rootProject.name = "CityScoutRemote"
enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

/**
 * JitPack passes `-Pjitpack=true` (see [jitpack.yml](jitpack.yml)) so only `:shared` is included.
 * That avoids configuring the sample `composeApp`, which is not published.
 */
val isJitpackBuild = (startParameter.projectProperties["jitpack"] == "true")

pluginManagement {
    repositories {
        google {
            mavenContent {
                includeGroupAndSubgroups("androidx")
                includeGroupAndSubgroups("com.android")
                includeGroupAndSubgroups("com.google")
            }
        }
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositories {
        google {
            mavenContent {
                includeGroupAndSubgroups("androidx")
                includeGroupAndSubgroups("com.android")
                includeGroupAndSubgroups("com.google")
            }
        }
        mavenCentral()
    }
}

include(":shared")
if (!isJitpackBuild) {
    include(":composeApp")
}