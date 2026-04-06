import java.util.Properties
import org.jetbrains.kotlin.gradle.dsl.JvmTarget
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.kotlinSerialization)
    alias(libs.plugins.mavenPublish)
}

fun loadCityScoutSecret(envName: String, propertyName: String): String {
    System.getenv(envName)?.trim()?.takeIf { it.isNotEmpty() }?.let { return it }
    val props = Properties()
    val local = rootProject.file("local.properties")
    if (local.exists()) {
        local.reader().use { props.load(it) }
    }
    return props.getProperty(propertyName)?.trim().orEmpty()
}

fun escapeForBuildConfigField(value: String): String =
    value.replace("\\", "\\\\").replace("\"", "\\\"")

val cityscoutRapidApiKey = loadCityScoutSecret("CITYSCOUT_RAPIDAPI_KEY", "cityscout.rapidapi.key")
val cityscoutWeatherApiKey = loadCityScoutSecret("CITYSCOUT_WEATHER_API_KEY", "cityscout.weather.key")

kotlin {
    androidTarget {
        compilerOptions {
            jvmTarget.set(JvmTarget.JVM_11)
        }
    }

    val xcframework = XCFramework("CityScoutRemoteFramework")

    listOf(
        iosArm64(),
        iosSimulatorArm64()
    ).forEach { iosTarget ->
        iosTarget.binaries.framework {
            baseName = "CityScoutRemoteFramework"
            isStatic = true
            xcframework.add(this)
        }
    }

    sourceSets {
        commonMain.dependencies {
            implementation(libs.ktorClientCore)
            implementation(libs.ktorClientNegotiation)
            implementation(libs.ktorClientSerializationKotlinxJson)
        }

        commonTest.dependencies {
            implementation(libs.kotlin.test)
            implementation(libs.ktorClientMock)
            implementation(libs.ktorClientNegotiation)
            implementation(libs.ktorClientSerializationKotlinxJson)
        }

        androidMain.dependencies {
            implementation(libs.ktorCleintAndroid)
        }

        iosMain.dependencies {
            implementation(libs.ktorCleintIos)
        }
    }
}

android {
    namespace = "net.marwanaziz.cityscoutremote.shared"
    compileSdk = libs.versions.android.compileSdk.get().toInt()
    buildFeatures {
        buildConfig = true
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
    defaultConfig {
        minSdk = libs.versions.android.minSdk.get().toInt()
        buildConfigField(
            "String",
            "RAPIDAPI_KEY",
            "\"${escapeForBuildConfigField(cityscoutRapidApiKey)}\"",
        )
        buildConfigField(
            "String",
            "WEATHER_API_KEY",
            "\"${escapeForBuildConfigField(cityscoutWeatherApiKey)}\"",
        )
    }
}
