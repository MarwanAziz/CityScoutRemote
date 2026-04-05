import PackageDescription

let package = Package(
    name: "CityScoutRemote",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "CityScoutRemoteFramework", targets: ["CityScoutRemoteFramework"])
    ],
    targets: [
        .binaryTarget(
            name: "CityScoutRemoteFramework",
            path: "./KPM.xcframework"
        )
    ]
)