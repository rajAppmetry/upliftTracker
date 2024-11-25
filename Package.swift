// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "UpliftTrackerSPM",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "UpliftTrackerSPM",
            targets: ["UpliftTracker"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .target(
            name: "UpliftTracker",
            path: "Sources/UpliftTracker",
            publicHeadersPath: "Headers", // Public headers for Objective-C
            cSettings: [
                .headerSearchPath("Headers"), // Include header search path
            ]
        )
    ]
)
