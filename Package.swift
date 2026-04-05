// swift-tools-version: 6.0
import PackageDescription

let package = Package(
    name: "CityScoutRemote",
    platforms: [.iOS(.v16)],
    products: [
        .library(name: "CityScoutRemoteFramework", targets: ["CityScoutRemoteFramework"])
    ],
    targets: [
        .binaryTarget(
            name: "CityScoutRemoteFramework",
            path: "./CityScoutRemoteFramework.xcframework"
        )
    ]
)