package net.marwanaziz.cityscoutremote

import kotlinx.serialization.Serializable

@Serializable
data class Links(
    val rel: String? = null,
    val href: String? = null,
)

@Serializable
data class City(
    val id: Int? = null,
    val wikiDataId: String? = null,
    val type: String? = null,
    val city: String? = null,
    val name: String? = null,
    val country: String? = null,
    val countryCode: String? = null,
    val region: String? = null,
    val regionCode: String? = null,
    val regionWdId: String? = null,
    val latitude: Double? = null,
    val longitude: Double? = null,
    val population: Int? = null,
)

@Serializable
data class Metadata(
    val currentOffset: Int? = null,
    val totalCount: Int? = null,
)

@Serializable
data class CitySearchResponse(
    val links: List<Links?> = emptyList(),
    val data: List<City?> = emptyList(),
    val metadata: Metadata? = null,
)
