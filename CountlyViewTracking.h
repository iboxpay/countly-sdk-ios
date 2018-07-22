// CountlyViewTracking.h
//
// This code is provided under the MIT License.
//
// Please visit www.count.ly for more information.

#import <Foundation/Foundation.h>

#if TARGET_OS_TV
#import <UIKit/UIKit.h>
#endif

@interface CountlyViewTracking : NSObject
@property (nonatomic) BOOL isEnabledOnInitialConfig;

+ (instancetype)sharedInstance;

- (void)startView:(NSString *)viewName;
- (void)endView;
- (void)pauseView;
- (void)resumeView;
#if (TARGET_OS_IOS || TARGET_OS_TV)
- (void)startAutoViewTracking;
- (void)stopAutoViewTracking;
- (void)addExceptionForAutoViewTracking:(NSString *)exception;
- (void)removeExceptionForAutoViewTracking:(NSString *)exception;
@property (nonatomic) BOOL isAutoViewTrackingActive;
#endif
@end
