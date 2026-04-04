package net.marwanaziz.cityscoutremote

/**
 * Creates [CityScoutRemote] instances for apps that depend on the shared module.
 * Each call builds a new client with its own HTTP engine and JSON configuration.
 *
 * Configure API keys with environment variables `CITYSCOUT_RAPIDAPI_KEY` and
 * `CITYSCOUT_WEATHER_API_KEY`, or for Android Gradle builds with `cityscout.rapidapi.key` /
 * `cityscout.weather.key` in the project root `local.properties`.
 */
object CityScoutRemoteFactory {

    fun create(): CityScoutRemote = CityScoutRemoteImp()
}
