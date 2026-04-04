package net.marwanaziz.cityscoutremote

import io.ktor.client.engine.mock.MockEngine
import io.ktor.client.engine.mock.respond
import io.ktor.http.HttpHeaders
import io.ktor.http.HttpStatusCode
import io.ktor.http.headersOf
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.decodeFromString
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertIs
import kotlin.test.assertNull
import kotlin.test.assertTrue

class WeatherForecastTest {

    private fun assertFailureWithError(result: Result<Weather>, expected: WeatherForecastError) {
        assertTrue(result.isFailure, "expected failure")
        val ex = result.exceptionOrNull()
        assertIs<WeatherForecastException>(ex)
        assertEquals(expected, ex.error)
    }

    @Test
    fun weather_json_decodesOutsideKtor() {
        val body = """{"location":{"name":"London"},"current":{"temp_c":12.3},"forecast":{"forecastday":[]}}"""
        val parsed = remoteTestJson.decodeFromString<Weather>(body)
        assertEquals("London", parsed.location?.name)
        assertEquals(12.3, parsed.current?.tempC!!, absoluteTolerance = 0.001)
        assertTrue(parsed.forecast?.forecastday?.isEmpty() == true)
    }

    @Test
    fun weatherLocationQuery_ignoresCoordinates_usesNameOnly() {
        val coordsOnly = City(latitude = 51.5, longitude = -0.12)
        assertNull(coordsOnly.weatherLocationQuery())
        val named = City(latitude = 51.5, longitude = -0.12, name = "London")
        assertEquals("London", named.weatherLocationQuery())
    }

    @Test
    fun weatherLocationQuery_prefersCityLabelOverName() {
        val city = City(city = "Paris", name = "Île-de-France")
        assertEquals("Paris", city.weatherLocationQuery())
    }

    @Test
    fun weatherLocationQuery_fallsBackToName() {
        val city = City(name = "Berlin")
        assertEquals("Berlin", city.weatherLocationQuery())
    }

    @Test
    fun weatherLocationQuery_nullWhenNoUsableFields() {
        assertNull(City().weatherLocationQuery())
        assertNull(City(city = "   ", name = null).weatherLocationQuery())
    }

    @Test
    fun performGetCityWeather_success_parsesBodyAndSendsQueryParams() = runBlocking {
        val body =
            """{"location":{"name":"London"},"current":{"temp_c":10.0},"forecast":{"forecastday":[]}}"""
        var capturedKey: String? = null
        var capturedQ: String? = null
        var capturedDays: String? = null
        val engine = MockEngine { request ->
            assertEquals("api.weatherapi.com", request.url.host)
            assertTrue(request.url.encodedPath.endsWith("forecast.json"))
            capturedKey = request.url.parameters["key"]
            capturedQ = request.url.parameters["q"]
            capturedDays = request.url.parameters["days"]
            respond(
                content = body,
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json"),
            )
        }
        val city = City(name = "London")
        val result = performGetCityWeather(remoteTestHttpClient(engine), city)
        assertTrue(result.isSuccess)
        assertEquals("London", result.getOrNull()?.location?.name)
        assertEquals(RemoteApiKeys.weatherApiKey, capturedKey)
        assertEquals("London", capturedQ)
        assertEquals(WeatherApiConfig.FORECAST_DAYS.toString(), capturedDays)
    }

    @Test
    fun performGetCityWeather_missingLocation_returnsError() = runBlocking {
        val engine = MockEngine { respond("", HttpStatusCode.OK) }
        val result = performGetCityWeather(remoteTestHttpClient(engine), City())
        assertFailureWithError(result, WeatherForecastError.MissingLocationQuery)
    }

    @Test
    fun performGetCityWeather_unauthorized_returnsUnauthorized() = runBlocking {
        val engine = MockEngine { respond("", HttpStatusCode.Unauthorized) }
        val result = performGetCityWeather(remoteTestHttpClient(engine), City(name = "x"))
        assertFailureWithError(result, WeatherForecastError.Unauthorized)
    }

    @Test
    fun performGetCityWeather_malformedPayload_returnsDeserializationError() = runBlocking {
        val engine = MockEngine {
            respond(
                content = """{"location":"oops"}""",
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json"),
            )
        }
        val result = performGetCityWeather(remoteTestHttpClient(engine), City(name = "London"))
        assertFailureWithError(result, WeatherForecastError.DeserializationError)
    }
}
