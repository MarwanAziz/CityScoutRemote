package net.marwanaziz.cityscoutremote

enum class CityScoutRemoteError(val description: String) {
    BlankQuery("The search query cannot be empty or blank."),
    MissingLocationQuery("No usable city name was provided for the weather request."),
    Unauthorized("The request was rejected: the API key may be missing, invalid, or not allowed."),
    Forbidden("Access to the remote service was forbidden for this request."),
    NotFound("The requested resource was not found."),
    RateLimited("Too many requests were sent. Please wait and try again."),
    BadRequest("The request was invalid or could not be understood."),
    ServerError("The remote service returned a server error. Please try again later."),
    HttpError("The remote service returned an unexpected HTTP status."),
    DeserializationError("The response could not be parsed."),
    NetworkError("A network error occurred while contacting the remote service."),
    Timeout("The request to the remote service timed out."),
    UnknownError("An unexpected error occurred."),
}
