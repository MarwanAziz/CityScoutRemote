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

private fun validatedCitySearchQuery(query: String): String? {
    val trimmed = query.trim()
    return trimmed.takeIf { it.isNotEmpty() }
}

private suspend fun HttpClient.requestCitySearch(namePrefix: String, rapidApiKey: String): HttpResponse {
    val requestHelper = RequestHelper(rapidApiKey)
    return get(requestHelper.citySearchEndPoint) {
        parameter("namePrefix", namePrefix)
        parameter("offset", 0)
        parameter("limit", 10)
        for (header in requestHelper.citySearchHeaders) {
            headers.append(header.key, header.value)
        }
    }
}

private suspend fun citySearchResultForHttpResponse(response: HttpResponse): CityScoutRemoteResult<List<City>> {
    val code = response.status.value
    if (code in 200..299) {
        val payload: CitySearchResponse = response.body()
        return CityScoutRemoteResult.Success(payload.data.mapNotNull { it })
    }
    return CityScoutRemoteResult.Failure(
        cityScoutRemoteErrorForHttpStatus(code),
        IllegalStateException("HTTP $code"),
    )
}

private fun citySearchFailureForThrowable(e: Throwable): CityScoutRemoteResult<List<City>> = when (e) {
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
        citySearchFailureForGenericException(e)
    }
}

private fun citySearchFailureForGenericException(e: Throwable): CityScoutRemoteResult<List<City>> =
    if (e.isLikelyNetworkFailure()) {
        CityScoutRemoteResult.Failure(CityScoutRemoteError.NetworkError, e)
    } else {
        CityScoutRemoteResult.Failure(CityScoutRemoteError.UnknownError, e)
    }

internal suspend fun performCitySearch(
    client: HttpClient,
    query: String,
    rapidApiKey: String,
): CityScoutRemoteResult<List<City>> {
    val namePrefix = validatedCitySearchQuery(query)
        ?: return CityScoutRemoteResult.Failure(CityScoutRemoteError.BlankQuery)
    check(rapidApiKey.isNotBlank()) {
        "RapidAPI key is missing or blank. Set CITYSCOUT_RAPIDAPI_KEY / cityscout.rapidapi.key or pass rapidApiKey in CityScoutRemoteApiKeys when creating CityScoutRemote."
    }
    return try {
        val response = client.requestCitySearch(namePrefix, rapidApiKey)
        citySearchResultForHttpResponse(response)
    } catch (e: CancellationException) {
        throw e
    } catch (e: Exception) {
        citySearchFailureForThrowable(e)
    }
}
