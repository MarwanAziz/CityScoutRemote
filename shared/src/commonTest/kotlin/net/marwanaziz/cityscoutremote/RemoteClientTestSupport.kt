package net.marwanaziz.cityscoutremote

import io.ktor.client.HttpClient
import io.ktor.client.engine.mock.MockEngine
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json

internal val remoteTestJson = Json {
    ignoreUnknownKeys = true
    isLenient = true
}

internal fun remoteTestHttpClient(engine: MockEngine): HttpClient = HttpClient(engine) {
    install(ContentNegotiation) {
        json(remoteTestJson)
    }
}
