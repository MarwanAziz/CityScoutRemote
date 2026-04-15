# CityScoutRemote

Kotlin Multiplatform networking for **city search** and **short-range weather**. The `:shared` module exposes a small API over [Ktor](https://ktor.io/): it calls **RapidAPI GeoDB** for city autocomplete-style search and **WeatherAPI** for a **5-day forecast**, using kotlinx.serialization models and a typed result type instead of exceptions for expected failures.

This repository is a KMP workspace: the library lives under [`shared`](./shared), with optional sample apps [`composeApp`](./composeApp) (Android / Compose Multiplatform) and [`iosApp`](./iosApp) (SwiftUI + embedded Kotlin framework).

---

## What it does

| API | Backend | Purpose |
|-----|---------|--------|
| `searchForCity(query)` | GeoDB on RapidAPI (`wft-geo-db.p.rapidapi.com`) | Returns a list of **`City`** matches for a name prefix. |
| `getCityWeather(city)` | WeatherAPI (`forecast.json`) | Returns **`Weather`** for a **place name** only (`city` / `name` on **`City`**—not lat/lon). Forecast length is configured as 5 days in code. |

Both calls return **`CityScoutRemoteResult<T>`**: either `Success(data)` or `Failure(error: CityScoutRemoteError, cause)` with helpers such as `getOrNull()`, `failureOrNull()`, `onSuccess`, and `onFailure`. Errors are a single enum (**`CityScoutRemoteError`**) covering validation, HTTP, network, timeouts, and deserialization.

---

## Adding the dependency

From another module in this project:

```kotlin
// build.gradle.kts
dependencies {
    implementation(projects.shared)
}
```

From an external Gradle project, use a composite build or depend on a published build (e.g. [JitPack](https://jitpack.io)).

**Maven coordinates** (see `shared/build.gradle.kts`): `com.github.MarwanAziz.CityScoutRemote:CityScoutRemote:<tag>`.

```kotlin
// build.gradle.kts
repositories { maven { url = uri("https://jitpack.io") } }
dependencies {
    implementation("com.github.MarwanAziz.CityScoutRemote:CityScoutRemote:1.0.16")
}
```

**Targets:** Android (library) and iOS (`iosArm64`, `iosSimulatorArm64`) with a static framework **`CityScoutRemoteFramework`** and an **XCFramework** task for distribution (configured in the **`shared`** module’s Gradle build).

---

## Creating a client

Use the factory; each `create()` builds a new `HttpClient` with JSON negotiation.

```kotlin

// Platform keys only (see “API keys” below)
val remote = CityScoutRemoteFactory.create()

// Or pass fallbacks when platform keys are missing / empty
val remote = CityScoutRemoteFactory.create(
    CityScoutRemoteApiKeys(
        rapidApiKey = "…",
        weatherApiKey = "…",
    ),
)
```

Resolution order **per key**: non-blank value from the platform **`RemoteApiKeys`** implementation, otherwise non-blank value from **`CityScoutRemoteApiKeys`**, otherwise an empty string (requests may fail with auth or validation errors until keys are set).

---

## API keys

Keys are **not** hardcoded in Kotlin sources.

### Android

At Gradle configuration time, the **`shared`** module’s build loads:

1. Environment variables **`CITYSCOUT_RAPIDAPI_KEY`** and **`CITYSCOUT_WEATHER_API_KEY`**, or  
2. Properties **`cityscout.rapidapi.key`** and **`cityscout.weather.key`** in the project root **`local.properties`** (typically gitignored).

Values are written into **`BuildConfig`** as `RAPIDAPI_KEY` and `WEATHER_API_KEY`. Empty or missing values yield **`null`** from `RemoteApiKeys` at runtime, so `CityScoutRemoteApiKeys` overrides apply.

### iOS

The iOS `actual` reads the same variable names from the **process environment** (e.g. Xcode scheme → Run → Environment Variables). Missing or blank values are **`null`**; use `CityScoutRemoteFactory.create(CityScoutRemoteApiKeys(...))` to inject keys from Swift if needed.

---

## Kotlin usage

`suspend` functions—call from a coroutine scope:

```kotlin
when (val result = remote.searchForCity("Paris")) {
    is CityScoutRemoteResult.Success -> {
        val cities: List<City> = result.data
        // …
    }
    is CityScoutRemoteResult.Failure -> {
        // result.error: CityScoutRemoteError, result.description, optional result.cause
    }
}

when (val result = remote.getCityWeather(selectedCity)) {
    is CityScoutRemoteResult.Success -> {
        val weather: Weather = result.data
        // …
    }
    is CityScoutRemoteResult.Failure -> { /* … */ }
}
```

---

## iOS (Swift)

Import the Kotlin framework produced for Xcode (e.g. **`CityScoutRemoteFramework`** when using `embedAndSignAppleFrameworkForXcode`, or the XCFramework from `Package.swift` if you ship the binary target).

- Kotlin `suspend` is exposed with a **completion handler** (e.g. `searchForCity(query:completionHandler:)`).
- `CityScoutRemoteFactory.shared.create(...)` accepts override key parameters matching `CityScoutRemoteApiKeys` once the framework is regenerated after API changes.
- Use `getOrNull()`, `failureOrNull()`, and **`description_`** on failures where Kotlin’s `description` clashes with `NSObject`.

Open the sample project under [`iosApp`](./iosApp) and run the “Compile Kotlin Framework” build phase so Gradle produces the framework before compiling Swift.

---

## Tests

Unit tests use Ktor **`MockEngine`** in the **`shared`** module’s test source set:

```shell
./gradlew :shared:testDebugUnitTest :shared:iosSimulatorArm64Test
```

---

## Repository layout

| Path | Role |
|------|------|
| [`shared`](./shared) | KMP library: `CityScoutRemote`, factory, models, Ktor clients. |
| [`composeApp`](./composeApp) | Sample Compose Multiplatform / Android app (depends on `shared`). |
| [`iosApp`](./iosApp) | Sample SwiftUI app; embeds the Kotlin framework via Gradle. |
| [`Package.swift`](./Package.swift) | SwiftPM binary target pointing at **`CityScoutRemoteFramework.xcframework`** (regenerate when the API changes). |

---

## Further reading

- [Kotlin Multiplatform](https://www.jetbrains.com/help/kotlin-multiplatform-dev/get-started.html)
- [Ktor client](https://ktor.io/docs/client.html)
