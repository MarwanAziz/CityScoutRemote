package net.marwanaziz.cityscoutremote

interface CityScoutRemote {
    suspend fun searchForCity(query: String): CityScoutRemoteResult<List<City>>
    suspend fun getCityWeather(city: City): CityScoutRemoteResult<Weather>
}
