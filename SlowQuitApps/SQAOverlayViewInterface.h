@import Foundation;

@protocol SQAOverlayViewInterface <NSObject>

// duration is a value in seconds, controlling the amount of time
// the overlay is visible and animated.
- (void)showOverlay:(CGFloat)duration;
- (void)hideOverlay;
- (void)resetOverlay;

@end
