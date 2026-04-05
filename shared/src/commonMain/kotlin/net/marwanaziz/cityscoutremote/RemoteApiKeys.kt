package net.marwanaziz.cityscoutremote

/**
 * API keys for remote services. Values are never hardcoded in source.
 *
 * Each property is **null** (or treated as missing) when not configured on the platform.
 * Use [CityScoutRemoteFactory.create] with [CityScoutRemoteApiKeys] to supply keys when these
 * are absent.
 *
 * **Android:** Set `CITYSCOUT_RAPIDAPI_KEY` and `CITYSCOUT_WEATHER_API_KEY` in the environment
 * when running Gradle, or add `cityscout.rapidapi.key` / `cityscout.weather.key` to
 * the project root `local.properties` (already gitignored). Keys are baked into
 * `BuildConfig` at compile time.
 *
 * **iOS:** Set the same `CITYSCOUT_*` names in the process environment (e.g. Xcode scheme
 * → Run → Arguments → Environment Variables).
 */
internal expect object RemoteApiKeys {
    val rapidApiKey: String?
    val weatherApiKey: String?
}
