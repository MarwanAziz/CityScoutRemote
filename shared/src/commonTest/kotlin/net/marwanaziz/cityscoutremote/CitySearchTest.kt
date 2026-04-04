package net.marwanaziz.cityscoutremote

import io.ktor.client.HttpClient
import io.ktor.client.engine.mock.MockEngine
import io.ktor.client.engine.mock.respond
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.http.HttpHeaders
import io.ktor.http.HttpStatusCode
import io.ktor.http.headersOf
import io.ktor.serialization.kotlinx.json.json
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.json.Json
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertIs
import kotlin.test.assertTrue

class CitySearchTest {

    private val testJson = Json {
        ignoreUnknownKeys = true
        isLenient = true
    }

    private fun testClient(engine: MockEngine): HttpClient = HttpClient(engine) {
        install(ContentNegotiation) {
            json(testJson)
        }
    }

    private fun assertFailureWithError(result: Result<List<City>>, expected: CitySearchError) {
        assertTrue(result.isFailure, "expected failure")
        val ex = result.exceptionOrNull()
        assertIs<CitySearchException>(ex)
        assertEquals(expected, ex.error)
    }

    @Test
    fun citySearchResponse_json_decodesOutsideKtor() {
        val body =
            """{"data":[{"id":1,"name":"Paris","city":"Paris","country":"France","countryCode":"FR","latitude":48.8566,"longitude":2.3522}],"metadata":{"currentOffset":0,"totalCount":1}}"""
        val parsed = testJson.decodeFromString<CitySearchResponse>(body)
        assertEquals(1, parsed.data.size)
        assertEquals("Paris", parsed.data[0]!!.name)
    }

    @Test
    fun performCitySearch_blankQuery_returnsBlankQueryError() = runBlocking {
        val client = testClient(MockEngine { respond("", HttpStatusCode.OK) })
        val result = performCitySearch(client, "")
        assertFailureWithError(result, CitySearchError.BlankQuery)
    }

    @Test
    fun performCitySearch_whitespaceOnly_returnsBlankQueryError() = runBlocking {
        val client = testClient(MockEngine { respond("", HttpStatusCode.OK) })
        val result = performCitySearch(client, "   \t  ")
        assertFailureWithError(result, CitySearchError.BlankQuery)
    }

    @Test
    fun performCitySearch_success_returnsCitiesAndTrimsQuery() = runBlocking {
        val body = """
            {
              "data": [
                {
                  "id": 1,
                  "name": "Paris",
                  "city": "Paris",
                  "country": "France",
                  "countryCode": "FR",
                  "latitude": 48.8566,
                  "longitude": 2.3522
                }
              ],
              "metadata": { "currentOffset": 0, "totalCount": 1 }
            }
        """.trimIndent()
        var capturedPrefix: String? = null
        val engine = MockEngine { request ->
            capturedPrefix = request.url.parameters["namePrefix"]
            respond(
                content = body,
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json"),
            )
        }
        val result = performCitySearch(testClient(engine), "  Paris  ")
        assertTrue(result.isSuccess)
        val cities = result.getOrNull()!!
        assertEquals(1, cities.size)
        assertEquals("Paris", cities[0].name)
        assertEquals("FR", cities[0].countryCode)
        assertEquals("Paris", capturedPrefix)
    }

    @Test
    fun performCitySearch_success_filtersNullEntriesInData() = runBlocking {
        val body = """
            {"data": [null, {"id": 2, "name": "Lyon"}], "metadata": null}
        """.trimIndent()
        val engine = MockEngine { request ->
            respond(
                content = body,
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json"),
            )
        }
        val result = performCitySearch(testClient(engine), "Lyon")
        assertTrue(result.isSuccess)
        assertEquals(1, result.getOrNull()!!.size)
        assertEquals("Lyon", result.getOrNull()!![0].name)
    }

    @Test
    fun performCitySearch_unauthorized_returnsUnauthorized() = runBlocking {
        val engine = MockEngine { respond("", HttpStatusCode.Unauthorized) }
        val result = performCitySearch(testClient(engine), "x")
        assertFailureWithError(result, CitySearchError.Unauthorized)
    }

    @Test
    fun performCitySearch_notFound_returnsNotFound() = runBlocking {
        val engine = MockEngine { respond("", HttpStatusCode.NotFound) }
        val result = performCitySearch(testClient(engine), "x")
        assertFailureWithError(result, CitySearchError.NotFound)
    }

    @Test
    fun performCitySearch_serverError_returnsServerError() = runBlocking {
        val engine = MockEngine { respond("", HttpStatusCode.InternalServerError) }
        val result = performCitySearch(testClient(engine), "x")
        assertFailureWithError(result, CitySearchError.ServerError)
    }

    @Test
    fun performCitySearch_malformedPayload_returnsDeserializationError() = runBlocking {
        val engine = MockEngine { request ->
            respond(
                content = """{"data":"not-a-list"}""",
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json"),
            )
        }
        val result = performCitySearch(testClient(engine), "x")
        assertFailureWithError(result, CitySearchError.DeserializationError)
    }

    @Test
    fun performCitySearch_invalidJsonSyntax_returnsDeserializationError() = runBlocking {
        val engine = MockEngine { request ->
            respond(
                content = "{not-json",
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json"),
            )
        }
        val result = performCitySearch(testClient(engine), "x")
        assertFailureWithError(result, CitySearchError.DeserializationError)
    }
}
