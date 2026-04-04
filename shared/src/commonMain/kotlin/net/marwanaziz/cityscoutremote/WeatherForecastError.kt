package net.marwanaziz.cityscoutremote

enum class WeatherForecastError(val description: String) {
    MissingLocationQuery("This city does not have a usable name for the weather query (e.g. London)."),
    Unauthorized("The weather request was rejected: the API key may be missing or invalid."),
    Forbidden("Access to the weather service was forbidden for this request."),
    NotFound("No weather data was found for this location."),
    RateLimited("Too many weather requests were sent. Please wait and try again."),
    BadRequest("The weather request was invalid or could not be understood."),
    ServerError("The weather service returned a server error. Please try again later."),
    HttpError("The weather service returned an unexpected HTTP status."),
    DeserializationError("The weather response could not be parsed."),
    NetworkError("A network error occurred while contacting the weather service."),
    Timeout("The request to the weather service timed out."),
    UnknownError("An unexpected error occurred while loading weather.");
}

class WeatherForecastException(
    val error: WeatherForecastError,
    cause: Throwable? = null,
) : Exception(error.description, cause)
