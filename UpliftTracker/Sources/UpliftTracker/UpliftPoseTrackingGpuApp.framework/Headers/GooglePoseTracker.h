#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "Landmark.h"

@class GooglePoseTracker;

@protocol GooglePoseTrackerDelegate <NSObject>
- (void)googlePoseTracker: (GooglePoseTracker *)tracker didOutputLandmarks: (NSArray<Landmark *> *)landmarks;
- (void)googlePoseTracker: (GooglePoseTracker *)tracker didOutputPixelBuffer: (CVPixelBufferRef)pixelBuffer;
@end

@interface GooglePoseTracker : NSObject
- (instancetype)init;
- (void)startGraph;
- (void)sendPixelBuffer:(CVPixelBufferRef)pixelBuffer;
@property (weak, nonatomic) id <GooglePoseTrackerDelegate> delegate;
@end
