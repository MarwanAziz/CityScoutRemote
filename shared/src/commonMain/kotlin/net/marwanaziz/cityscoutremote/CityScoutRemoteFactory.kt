package net.marwanaziz.cityscoutremote

/**
 * Creates [CityScoutRemote] instances for apps that depend on the shared module.
 * Each call builds a new client with its own HTTP engine and JSON configuration.
 */
object CityScoutRemoteFactory {

    fun create(): CityScoutRemote = CityScoutRemoteImp()
}
