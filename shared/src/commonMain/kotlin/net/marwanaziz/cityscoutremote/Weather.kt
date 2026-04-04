package net.marwanaziz.cityscoutremote

import kotlinx.serialization.Serializable
import kotlinx.serialization.SerialName

@Serializable
data class Location(
    val name: String?,
    val region: String?,
    val country: String?,
    val lat: Double?,
    val lon: Double?,
    @SerialName("tz_id") val tzId: String?,
    @SerialName("localtime_epoch") val localtimeEpoch: Int?,
    val localtime: String?
)

@Serializable
data class Condition(
    val text: String?,
    val icon: String?,
    val code: Int?
)

@Serializable
data class Current(
    @SerialName("last_updated_epoch") val lastUpdatedEpoch: Int?,
    @SerialName("last_updated") val lastUpdated: String?,
    @SerialName("temp_c") val tempC: Double?,
    @SerialName("temp_f") val tempF: Double?,
    @SerialName("is_day") val isDay: Int?,
    val condition: Condition?,
    @SerialName("wind_mph") val windMph: Double?,
    @SerialName("wind_kph") val windKph: Double?,
    @SerialName("wind_degree") val windDegree: Int?,
    @SerialName("wind_dir") val windDir: String?,
    @SerialName("pressure_mb") val pressureMb: Int?,
    @SerialName("pressure_in") val pressureIn: Double?,
    @SerialName("precip_mm") val precipMm: Int?,
    @SerialName("precip_in") val precipIn: Int?,
    val humidity: Int?,
    val cloud: Int?,
    @SerialName("feelslike_c") val feelslikeC: Int?,
    @SerialName("feelslike_f") val feelslikeF: Double?,
    @SerialName("windchill_c") val windchillC: Double?,
    @SerialName("windchill_f") val windchillF: Double?,
    @SerialName("heatindex_c") val heatindexC: Double?,
    @SerialName("heatindex_f") val heatindexF: Double?,
    @SerialName("dewpoint_c") val dewpointC: Double?,
    @SerialName("dewpoint_f") val dewpointF: Double?,
    @SerialName("vis_km") val visKm: Int?,
    @SerialName("vis_miles") val visMiles: Int?,
    val uv: Double?,
    @SerialName("gust_mph") val gustMph: Double?,
    @SerialName("gust_kph") val gustKph: Double?,
    @SerialName("short_rad") val shortRad: Double?,
    @SerialName("diff_rad") val diffRad: Double?,
    val dni: Double?,
    val gti: Double?
)

@Serializable
data class Day(
    @SerialName("maxtemp_c") val maxtempC: Double?,
    @SerialName("maxtemp_f") val maxtempF: Double?,
    @SerialName("mintemp_c") val mintempC: Double?,
    @SerialName("mintemp_f") val mintempF: Int?,
    @SerialName("avgtemp_c") val avgtempC: Int?,
    @SerialName("avgtemp_f") val avgtempF: Double?,
    @SerialName("maxwind_mph") val maxwindMph: Double?,
    @SerialName("maxwind_kph") val maxwindKph: Double?,
    @SerialName("totalprecip_mm") val totalprecipMm: Double?,
    @SerialName("totalprecip_in") val totalprecipIn: Int?,
    @SerialName("totalsnow_cm") val totalsnowCm: Int?,
    @SerialName("avgvis_km") val avgvisKm: Int?,
    @SerialName("avgvis_miles") val avgvisMiles: Int?,
    val avghumidity: Int?,
    @SerialName("daily_will_it_rain") val dailyWillItRain: Int?,
    @SerialName("daily_chance_of_rain") val dailyChanceOfRain: Int?,
    @SerialName("daily_will_it_snow") val dailyWillItSnow: Int?,
    @SerialName("daily_chance_of_snow") val dailyChanceOfSnow: Int?,
    val condition: Condition?,
    val uv: Double?
)

@Serializable
data class Astro(
    val sunrise: String?,
    val sunset: String?,
    val moonrise: String?,
    val moonset: String?,
    @SerialName("moon_phase") val moonPhase: String?,
    @SerialName("moon_illumination") val moonIllumination: Int?,
    @SerialName("is_moon_up") val isMoonUp: Int?,
    @SerialName("is_sun_up") val isSunUp: Int?
)

@Serializable
data class Hour(
    @SerialName("time_epoch") val timeEpoch: Int?,
    val time: String?,
    @SerialName("temp_c") val tempC: Double?,
    @SerialName("temp_f") val tempF: Double?,
    @SerialName("is_day") val isDay: Int?,
    val condition: Condition?,
    @SerialName("wind_mph") val windMph: Double?,
    @SerialName("wind_kph") val windKph: Double?,
    @SerialName("wind_degree") val windDegree: Int?,
    @SerialName("wind_dir") val windDir: String?,
    @SerialName("pressure_mb") val pressureMb: Int?,
    @SerialName("pressure_in") val pressureIn: Double?,
    @SerialName("precip_mm") val precipMm: Int?,
    @SerialName("precip_in") val precipIn: Int?,
    @SerialName("snow_cm") val snowCm: Int?,
    val humidity: Int?,
    val cloud: Int?,
    @SerialName("feelslike_c") val feelslikeC: Double?,
    @SerialName("feelslike_f") val feelslikeF: Double?,
    @SerialName("windchill_c") val windchillC: Double?,
    @SerialName("windchill_f") val windchillF: Double?,
    @SerialName("heatindex_c") val heatindexC: Double?,
    @SerialName("heatindex_f") val heatindexF: Double?,
    @SerialName("dewpoint_c") val dewpointC: Double?,
    @SerialName("dewpoint_f") val dewpointF: Double?,
    @SerialName("will_it_rain") val willItRain: Int?,
    @SerialName("chance_of_rain") val chanceOfRain: Int?,
    @SerialName("will_it_snow") val willItSnow: Int?,
    @SerialName("chance_of_snow") val chanceOfSnow: Int?,
    @SerialName("vis_km") val visKm: Int?,
    @SerialName("vis_miles") val visMiles: Int?,
    @SerialName("gust_mph") val gustMph: Double?,
    @SerialName("gust_kph") val gustKph: Int?,
    val uv: Int?,
    @SerialName("short_rad") val shortRad: Int?,
    @SerialName("diff_rad") val diffRad: Int?,
    val dni: Int?,
    val gti: Int?
)

@Serializable
data class Forecastday(
    val date: String?,
    @SerialName("date_epoch") val dateEpoch: Int?,
    val day: Day?,
    val astro: Astro?,
    val hour: List<Hour?>
)

@Serializable
data class Forecast(
    val forecastday: List<Forecastday?>
)

@Serializable
data class Weather(
    val location: Location?,
    val current: Current?,
    val forecast: Forecast?
)