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

private fun citySearchErrorForHttpCode(code: Int): CitySearchError = when (code) {
    400 -> CitySearchError.BadRequest
    401 -> CitySearchError.Unauthorized
    403 -> CitySearchError.Forbidden
    404 -> CitySearchError.NotFound
    429 -> CitySearchError.RateLimited
    in 500..599 -> CitySearchError.ServerError
    else -> CitySearchError.HttpError
}

private fun validatedCitySearchQuery(query: String): String? {
    val trimmed = query.trim()
    return trimmed.takeIf { it.isNotEmpty() }
}

private suspend fun HttpClient.requestCitySearch(namePrefix: String): HttpResponse {
    val requestHelper = RequestHelper()
    return get(requestHelper.citySearchEndPoint) {
        parameter("namePrefix", namePrefix)
        parameter("maxPopulation", 10)
        parameter("offset", 0)
        parameter("limit", 10)
        for (header in requestHelper.citySearchHeaders) {
            headers.append(header.key, header.value)
        }
    }
}

private suspend fun citySearchResultForHttpResponse(response: HttpResponse): Result<List<City>> {
    val code = response.status.value
    if (code in 200..299) {
        val payload: CitySearchResponse = response.body()
        return Result.success(payload.data.mapNotNull { it })
    }
    return Result.failure(
        CitySearchException(
            citySearchErrorForHttpCode(code),
            IllegalStateException("HTTP $code"),
        ),
    )
}

private fun Throwable.hasSerializationExceptionInChain(): Boolean {
    var current: Throwable? = this
    while (current != null) {
        if (current is SerializationException) return true
        current = current.cause
    }
    return false
}

private fun citySearchFailureForThrowable(e: Throwable): Result<List<City>> = when (e) {
    is SerializationException ->
        Result.failure(CitySearchException(CitySearchError.DeserializationError, e))
    is ClientRequestException -> {
        val code = e.response.status.value
        Result.failure(CitySearchException(citySearchErrorForHttpCode(code), e))
    }
    is ServerResponseException -> {
        val code = e.response.status.value
        Result.failure(CitySearchException(citySearchErrorForHttpCode(code), e))
    }
    is SocketTimeoutException ->
        Result.failure(CitySearchException(CitySearchError.Timeout))
    else -> if (e.hasSerializationExceptionInChain()) {
        Result.failure(CitySearchException(CitySearchError.DeserializationError, e))
    } else {
        citySearchFailureForGenericException(e)
    }
}

private fun citySearchFailureForGenericException(e: Throwable): Result<List<City>> {
    val message = e.message?.lowercase().orEmpty()
    val simpleName = e::class.simpleName.orEmpty()
    val isNetwork = message.contains("network") ||
        message.contains("unreachable") ||
        message.contains("connection") ||
        simpleName.contains("IOException", ignoreCase = true)
    return if (isNetwork) {
        Result.failure(CitySearchException(CitySearchError.NetworkError, e))
    } else {
        Result.failure(CitySearchException(CitySearchError.UnknownError, e))
    }
}

internal suspend fun performCitySearch(client: HttpClient, query: String): Result<List<City>> {
    val namePrefix = validatedCitySearchQuery(query)
        ?: return Result.failure(CitySearchException(CitySearchError.BlankQuery))
    return try {
        val response = client.requestCitySearch(namePrefix)
        citySearchResultForHttpResponse(response)
    } catch (e: CancellationException) {
        throw e
    } catch (e: Exception) {
        citySearchFailureForThrowable(e)
    }
}