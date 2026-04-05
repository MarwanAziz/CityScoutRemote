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

private suspend fun HttpClient.requestWeatherForecast(locationQuery: String, weatherApiKey: String): HttpResponse =
    get(WeatherApiConfig.FORECAST_ENDPOINT) {
        parameter("key", weatherApiKey)
        parameter("q", locationQuery)
        parameter("days", WeatherApiConfig.FORECAST_DAYS)
    }

private suspend fun weatherResultForHttpResponse(response: HttpResponse): CityScoutRemoteResult<Weather> {
    val code = response.status.value
    if (code in 200..299) {
        val payload: Weather = response.body()
        return CityScoutRemoteResult.Success(payload)
    }
    return CityScoutRemoteResult.Failure(
        cityScoutRemoteErrorForHttpStatus(code),
        IllegalStateException("HTTP $code"),
    )
}

private fun weatherFailureForThrowable(e: Throwable): CityScoutRemoteResult<Weather> = when (e) {
    is SerializationException ->
        CityScoutRemoteResult.Failure(CityScoutRemoteError.DeserializationError, e)
    is ClientRequestException -> {
        val code = e.response.status.value
        CityScoutRemoteResult.Failure(cityScoutRemoteErrorForHttpStatus(code), e)
    }
    is ServerResponseException -> {
        val code = e.response.status.value
        CityScoutRemoteResult.Failure(cityScoutRemoteErrorForHttpStatus(code), e)
    }
    is SocketTimeoutException ->
        CityScoutRemoteResult.Failure(CityScoutRemoteError.Timeout)
    else -> if (e.containsSerializationExceptionInChain()) {
        CityScoutRemoteResult.Failure(CityScoutRemoteError.DeserializationError, e)
    } else {
        weatherFailureForGenericException(e)
    }
}

private fun weatherFailureForGenericException(e: Throwable): CityScoutRemoteResult<Weather> =
    if (e.isLikelyNetworkFailure()) {
        CityScoutRemoteResult.Failure(CityScoutRemoteError.NetworkError, e)
    } else {
        CityScoutRemoteResult.Failure(CityScoutRemoteError.UnknownError, e)
    }

internal suspend fun performGetCityWeather(
    client: HttpClient,
    city: City,
    weatherApiKey: String,
): CityScoutRemoteResult<Weather> {
    val query = city.weatherLocationQuery()
        ?: return CityScoutRemoteResult.Failure(CityScoutRemoteError.MissingLocationQuery)
    return try {
        val response = client.requestWeatherForecast(query, weatherApiKey)
        weatherResultForHttpResponse(response)
    } catch (e: CancellationException) {
        throw e
    } catch (e: Exception) {
        weatherFailureForThrowable(e)
    }
}
