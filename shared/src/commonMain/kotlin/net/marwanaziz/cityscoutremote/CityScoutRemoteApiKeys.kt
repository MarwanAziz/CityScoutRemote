package net.marwanaziz.cityscoutremote

/**
 * Optional API keys passed to [CityScoutRemoteFactory.create]. When a value is non-null and
 * non-blank, it is used if the corresponding [RemoteApiKeys] platform value is null or blank.
 */
data class CityScoutRemoteApiKeys(
    val rapidApiKey: String? = null,
    val weatherApiKey: String? = null,
)

internal data class EffectiveApiKeys(
    val rapidApiKey: String,
    val weatherApiKey: String,
)

internal fun resolveEffectiveApiKeys(overrides: CityScoutRemoteApiKeys): EffectiveApiKeys {
    fun resolved(platform: String?, override: String?): String {
        val fromPlatform = platform?.trim()?.takeIf { it.isNotEmpty() }
        if (fromPlatform != null) return fromPlatform
        return override?.trim()?.takeIf { it.isNotEmpty() }.orEmpty()
    }
    return EffectiveApiKeys(
        rapidApiKey = resolved(RemoteApiKeys.rapidApiKey, overrides.rapidApiKey),
        weatherApiKey = resolved(RemoteApiKeys.weatherApiKey, overrides.weatherApiKey),
    )
}
