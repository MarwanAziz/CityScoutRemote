plugins {
    // this is necessary to avoid the plugins to be loaded multiple times
    // in each subproject's classloader
    alias(libs.plugins.androidApplication) apply false
    alias(libs.plugins.androidLibrary) apply false
    alias(libs.plugins.composeMultiplatform) apply false
    alias(libs.plugins.composeCompiler) apply false
    alias(libs.plugins.kotlinMultiplatform) apply false
    alias(libs.plugins.kotlinSerialization) apply false
}

/**
 * JitPack runs `publishToMavenLocal` on the **root** project. The KMP library lives in `:shared`,
 * which already applies `maven-publish` and exposes `shared:publishToMavenLocal`.
 */
tasks.register("publishToMavenLocal") {
    group = "publishing"
    description = "Publishes the :shared library to the local Maven repository (used by JitPack)."
    dependsOn(":shared:publishToMavenLocal")
}