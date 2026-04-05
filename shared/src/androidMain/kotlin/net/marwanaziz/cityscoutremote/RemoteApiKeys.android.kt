package net.marwanaziz.cityscoutremote

import net.marwanaziz.cityscoutremote.shared.BuildConfig

internal actual object RemoteApiKeys {
    actual val rapidApiKey: String?
        get() = BuildConfig.RAPIDAPI_KEY.trim().takeIf { it.isNotEmpty() }

    actual val weatherApiKey: String?
        get() = BuildConfig.WEATHER_API_KEY.trim().takeIf { it.isNotEmpty() }
}
