package net.marwanaziz.cityscoutremote

enum class CitySearchError(val description: String) {
    BlankQuery("The search query cannot be empty or blank."),
    Unauthorized("The request was rejected: the API key may be missing, invalid, or not allowed for this endpoint."),
    Forbidden("Access to the geo service was forbidden for this request."),
    NotFound("The requested geo resource was not found."),
    RateLimited("Too many requests were sent. Please wait and try again."),
    BadRequest("The request was invalid or could not be understood by the geo service."),
    ServerError("The geo service returned a server error. Please try again later."),
    HttpError("The geo service returned an unexpected HTTP status."),
    DeserializationError("The response from the geo service could not be parsed."),
    NetworkError("A network error occurred while contacting the geo service."),
    Timeout("The request to the geo service timed out."),
    UnknownError("An unexpected error occurred while searching for cities.");
}

class CitySearchException(
    val error: CitySearchError,
    cause: Throwable? = null,
) : Exception(error.description, cause)
