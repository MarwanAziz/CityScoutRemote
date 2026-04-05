package net.marwanaziz.cityscoutremote

/**
 * Creates [CityScoutRemote] instances for apps that depend on the shared module.
 * Each call builds a new client with its own HTTP engine and JSON configuration.
 *
 * Keys are resolved per service as: platform [RemoteApiKeys] value if non-null and non-blank,
 * otherwise the matching non-blank value from [overrideKeys], otherwise an empty string
 * (requests may fail until a key is configured).
 *
 * Configure platform keys with environment variables `CITYSCOUT_RAPIDAPI_KEY` and
 * `CITYSCOUT_WEATHER_API_KEY`, or for Android Gradle builds with `cityscout.rapidapi.key` /
 * `cityscout.weather.key` in the project root `local.properties`.
 */
object CityScoutRemoteFactory {

    fun create(overrideKeys: CityScoutRemoteApiKeys = CityScoutRemoteApiKeys()): CityScoutRemote =
        CityScoutRemoteImp(resolveEffectiveApiKeys(overrideKeys))
}
