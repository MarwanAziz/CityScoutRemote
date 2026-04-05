package net.marwanaziz.cityscoutremote

/**
 * Outcome of [CityScoutRemote] operations: [Success] with payload [T], or [Failure] with [CityScoutRemoteError].
 */
sealed class CityScoutRemoteResult<out T> {

    data class Success<T>(val data: T) : CityScoutRemoteResult<T>()

    data class Failure(
        val error: CityScoutRemoteError,
        val cause: Throwable? = null,
    ) : CityScoutRemoteResult<Nothing>() {
        val description: String get() = error.description
    }

    val isSuccess: Boolean get() = this is Success

    val isFailure: Boolean get() = this is Failure

    fun getOrNull(): T? = (this as? Success)?.data

    fun failureOrNull(): Failure? = this as? Failure

    inline fun onSuccess(action: (T) -> Unit): CityScoutRemoteResult<T> {
        if (this is Success) action(data)
        return this
    }

    inline fun onFailure(action: (Failure) -> Unit): CityScoutRemoteResult<T> {
        if (this is Failure) action(this)
        return this
    }
}
