package net.marwanaziz.cityscoutremote

interface CityScoutRemote {
    suspend fun searchForCity(query: String): Result<List<City>>
    suspend fun getCityWeather(city: City): Result<Weather>
}