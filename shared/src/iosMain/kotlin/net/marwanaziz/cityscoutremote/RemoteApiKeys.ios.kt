package net.marwanaziz.cityscoutremote

import kotlinx.cinterop.ExperimentalForeignApi
import kotlinx.cinterop.toKString
import platform.posix.getenv

@OptIn(ExperimentalForeignApi::class)
private fun envOrEmpty(name: String): String = getenv(name)?.toKString() ?: ""

internal actual object RemoteApiKeys {
    actual val rapidApiKey: String?
        get() = envOrEmpty("CITYSCOUT_RAPIDAPI_KEY").trim().takeIf { it.isNotEmpty() }

    actual val weatherApiKey: String?
        get() = envOrEmpty("CITYSCOUT_WEATHER_API_KEY").trim().takeIf { it.isNotEmpty() }
}
