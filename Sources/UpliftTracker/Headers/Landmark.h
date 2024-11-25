#import <Foundation/Foundation.h>

@class Landmark;

@interface Landmark: NSObject
@property(nonatomic, readonly) float x;
@property(nonatomic, readonly) float y;
@property(nonatomic, readonly) float z;
@end

@interface Landmark()
- (instancetype)initWithX:(float)x y:(float)y z:(float)z;
- (NSString*)description;
@end