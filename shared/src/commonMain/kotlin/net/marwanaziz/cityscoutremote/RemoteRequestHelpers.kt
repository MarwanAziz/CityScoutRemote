package net.marwanaziz.cityscoutremote

import kotlinx.serialization.SerializationException

internal fun Throwable.containsSerializationExceptionInChain(): Boolean {
    var current: Throwable? = this
    while (current != null) {
        if (current is SerializationException) return true
        current = current.cause
    }
    return false
}

internal fun Throwable.isLikelyNetworkFailure(): Boolean {
    val message = message?.lowercase().orEmpty()
    val simpleName = this::class.simpleName.orEmpty()
    return message.contains("network") ||
        message.contains("unreachable") ||
        message.contains("connection") ||
        simpleName.contains("IOException", ignoreCase = true)
}

internal enum class StandardHttpFailureKind {
    BadRequest,
    Unauthorized,
    Forbidden,
    NotFound,
    RateLimited,
    ServerError,
    UnexpectedStatus,
}

internal fun standardHttpFailureKindForCode(code: Int): StandardHttpFailureKind = when (code) {
    400 -> StandardHttpFailureKind.BadRequest
    401 -> StandardHttpFailureKind.Unauthorized
    403 -> StandardHttpFailureKind.Forbidden
    404 -> StandardHttpFailureKind.NotFound
    429 -> StandardHttpFailureKind.RateLimited
    in 500..599 -> StandardHttpFailureKind.ServerError
    else -> StandardHttpFailureKind.UnexpectedStatus
}

internal fun cityScoutRemoteErrorForHttpStatus(code: Int): CityScoutRemoteError =
    when (standardHttpFailureKindForCode(code)) {
        StandardHttpFailureKind.BadRequest -> CityScoutRemoteError.BadRequest
        StandardHttpFailureKind.Unauthorized -> CityScoutRemoteError.Unauthorized
        StandardHttpFailureKind.Forbidden -> CityScoutRemoteError.Forbidden
        StandardHttpFailureKind.NotFound -> CityScoutRemoteError.NotFound
        StandardHttpFailureKind.RateLimited -> CityScoutRemoteError.RateLimited
        StandardHttpFailureKind.ServerError -> CityScoutRemoteError.ServerError
        StandardHttpFailureKind.UnexpectedStatus -> CityScoutRemoteError.HttpError
    }
