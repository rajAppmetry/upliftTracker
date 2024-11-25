//
//  UpliftTrackerExampleApp.swift
//  UpliftTrackerExample
//
//  Created by Raj S on 24/11/24.
//

import SwiftUI
import UpliftTracker

@main
struct UpliftTrackerExampleApp: App {
    var body: some Scene {
        WindowGroup {
            ContentView()
                .onAppear {
                    let object = GooglePoseTracker.init()
                    print(object?.description)
                }
        }
    }
}
