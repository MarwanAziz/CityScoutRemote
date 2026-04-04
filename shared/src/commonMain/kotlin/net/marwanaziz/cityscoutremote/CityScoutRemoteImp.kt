package net.marwanaziz.cityscoutremote

import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json

internal class CityScoutRemoteImp : CityScoutRemote {

    private val json = Json {
        ignoreUnknownKeys = true
        isLenient = true
    }

    internal val client = HttpClient {
        install(ContentNegotiation) {
            json(json)
        }
    }

    override suspend fun searchForCity(query: String): Result<List<City>> =
        performCitySearch(client, query)

    override suspend fun getCityWeather(city: City): Result<Weather> {
        return Result.failure(Error("Not implemented"))
    }
}
