package net.marwanaziz.cityscoutremote

internal class RequestHelper {
    internal val citySearchHeaders = mapOf(
        "x-rapidapi-key" to RemoteApiKeys.rapidApiKey,
        "x-rapidapi-host" to "wft-geo-db.p.rapidapi.com",
    )

    internal val citySearchEndPoint = "https://wft-geo-db.p.rapidapi.com/v1/geo/cities"
}