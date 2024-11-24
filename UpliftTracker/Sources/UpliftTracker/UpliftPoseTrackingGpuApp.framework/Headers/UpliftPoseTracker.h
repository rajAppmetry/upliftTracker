#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "Landmark.h"

@class UpliftPoseTracker;

@protocol UpliftPoseTrackerDelegate <NSObject>
- (void)upliftPoseTracker: (UpliftPoseTracker *)tracker didOutputNormalizedLandmarks: (NSArray<Landmark *> *)landmarks;
- (void)upliftPoseTracker: (UpliftPoseTracker *)tracker didOutputPixelBuffer: (CVPixelBufferRef)pixelBuffer;
@end

@interface UpliftPoseTracker : NSObject
- (instancetype)init;
- (void)preloadModel:(NSArray *)modelNames;
- (void)startGraph:(bool)needsRotation modelIndex:(int)modelIndex smoothLandmarks:(bool)smoothLandmarks useANE:(bool)useANE;
- (void)sendPixelBuffer:(CVPixelBufferRef)pixelBuffer;
@property (weak, nonatomic) id <UpliftPoseTrackerDelegate> delegate;
@end
