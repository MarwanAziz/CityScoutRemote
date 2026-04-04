package net.marwanaziz.cityscoutremote

import kotlinx.cinterop.ExperimentalForeignApi
import kotlinx.cinterop.toKString
import platform.posix.getenv

@OptIn(ExperimentalForeignApi::class)
private fun envOrEmpty(name: String): String = getenv(name)?.toKString() ?: ""

internal actual object RemoteApiKeys {
    // For now we hardcoding the keys
    actual val rapidApiKey: String get() = "68999f7a20mshffaf2134c1e9edfp17598ejsn31fb20bd0572"//envOrEmpty("CITYSCOUT_RAPIDAPI_KEY")
    actual val weatherApiKey: String get() = "e5a0ae782b414ae7b9000554260404"//envOrEmpty("CITYSCOUT_WEATHER_API_KEY")
}
