package net.marwanaziz.cityscoutremote

internal class RequestHelper {
    internal val citySearchHeaders = mapOf(
        "x-rapidapi-key" to "68999f7a20mshffaf2134c1e9edfp17598ejsn31fb20bd0572",
        "x-rapidapi-host" to "wft-geo-db.p.rapidapi.com",
    )

    internal val citySearchEndPoint = "https://wft-geo-db.p.rapidapi.com/v1/geo/cities"
}