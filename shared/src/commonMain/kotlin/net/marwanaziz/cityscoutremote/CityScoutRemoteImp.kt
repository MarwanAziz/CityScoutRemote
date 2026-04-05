package net.marwanaziz.cityscoutremote

import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json

internal class CityScoutRemoteImp(
    private val apiKeys: EffectiveApiKeys,
) : CityScoutRemote {

    private val json = Json {
        ignoreUnknownKeys = true
        isLenient = true
    }

    internal val client = HttpClient {
        install(ContentNegotiation) {
            json(json)
        }
    }

    override suspend fun searchForCity(query: String): CityScoutRemoteResult<List<City>> =
        performCitySearch(client, query, apiKeys.rapidApiKey)

    override suspend fun getCityWeather(city: City): CityScoutRemoteResult<Weather> =
        performGetCityWeather(client, city, apiKeys.weatherApiKey)
}
