package net.marwanaziz.cityscoutremote

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.network.sockets.SocketTimeoutException
import io.ktor.client.plugins.ClientRequestException
import io.ktor.client.plugins.ServerResponseException
import io.ktor.client.request.get
import io.ktor.client.request.parameter
import io.ktor.client.statement.HttpResponse
import kotlinx.coroutines.CancellationException
import kotlinx.serialization.SerializationException

/** WeatherAPI `q` uses a place name (e.g. `q=London`), not lat/lon. */
internal fun City.weatherLocationQuery(): String? =
    sequenceOf(city, name)
        .mapNotNull { it?.trim()?.takeIf { t -> t.isNotEmpty() } }
        .firstOrNull()

private fun weatherForecastErrorForHttpCode(code: Int): WeatherForecastError =
    when (standardHttpFailureKindForCode(code)) {
        StandardHttpFailureKind.BadRequest -> WeatherForecastError.BadRequest
        StandardHttpFailureKind.Unauthorized -> WeatherForecastError.Unauthorized
        StandardHttpFailureKind.Forbidden -> WeatherForecastError.Forbidden
        StandardHttpFailureKind.NotFound -> WeatherForecastError.NotFound
        StandardHttpFailureKind.RateLimited -> WeatherForecastError.RateLimited
        StandardHttpFailureKind.ServerError -> WeatherForecastError.ServerError
        StandardHttpFailureKind.UnexpectedStatus -> WeatherForecastError.HttpError
    }

private suspend fun HttpClient.requestWeatherForecast(locationQuery: String): HttpResponse =
    get(WeatherApiConfig.FORECAST_ENDPOINT) {
        parameter("key", WeatherApiSecrets.API_KEY)
        parameter("q", locationQuery)
        parameter("days", WeatherApiConfig.FORECAST_DAYS)
    }

private suspend fun weatherResultForHttpResponse(response: HttpResponse): Result<Weather> {
    val code = response.status.value
    if (code in 200..299) {
        val payload: Weather = response.body()
        return Result.success(payload)
    }
    return Result.failure(
        WeatherForecastException(
            weatherForecastErrorForHttpCode(code),
            IllegalStateException("HTTP $code"),
        ),
    )
}

private fun weatherFailureForThrowable(e: Throwable): Result<Weather> = when (e) {
    is SerializationException ->
        Result.failure(WeatherForecastException(WeatherForecastError.DeserializationError, e))
    is ClientRequestException -> {
        val code = e.response.status.value
        Result.failure(WeatherForecastException(weatherForecastErrorForHttpCode(code), e))
    }
    is ServerResponseException -> {
        val code = e.response.status.value
        Result.failure(WeatherForecastException(weatherForecastErrorForHttpCode(code), e))
    }
    is SocketTimeoutException ->
        Result.failure(WeatherForecastException(WeatherForecastError.Timeout))
    else -> if (e.containsSerializationExceptionInChain()) {
        Result.failure(WeatherForecastException(WeatherForecastError.DeserializationError, e))
    } else {
        weatherFailureForGenericException(e)
    }
}

private fun weatherFailureForGenericException(e: Throwable): Result<Weather> =
    if (e.isLikelyNetworkFailure()) {
        Result.failure(WeatherForecastException(WeatherForecastError.NetworkError, e))
    } else {
        Result.failure(WeatherForecastException(WeatherForecastError.UnknownError, e))
    }

internal suspend fun performGetCityWeather(client: HttpClient, city: City): Result<Weather> {
    val query = city.weatherLocationQuery()
        ?: return Result.failure(WeatherForecastException(WeatherForecastError.MissingLocationQuery))
    return try {
        val response = client.requestWeatherForecast(query)
        weatherResultForHttpResponse(response)
    } catch (e: CancellationException) {
        throw e
    } catch (e: Exception) {
        weatherFailureForThrowable(e)
    }
}
