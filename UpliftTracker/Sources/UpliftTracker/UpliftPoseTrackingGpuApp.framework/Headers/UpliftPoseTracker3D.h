#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "Landmark.h"

@class UpliftPoseTracker3D;

@protocol UpliftPoseTracker3DDelegate <NSObject>
- (void)upliftPoseTracker3D: (UpliftPoseTracker3D *)tracker didOutputLandmarks: (NSArray<NSArray<Landmark *> *> *)landmarks;
@end

@interface UpliftPoseTracker3D : NSObject
- (instancetype)initWithShape:(int)shape;
- (void)startGraph:(int)modelIndex;
- (void)sendLandmarkListCollection:(NSArray<NSArray<Landmark *> *> *)landmarkListCollection;
@property (weak, nonatomic) id <UpliftPoseTracker3DDelegate> delegate;
@end

