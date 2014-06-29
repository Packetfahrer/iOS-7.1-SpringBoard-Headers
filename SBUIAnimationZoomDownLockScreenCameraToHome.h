/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownAppToHome.h"

@class SBLockToAppStatusBarAnimator, SBLockScreenViewController;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownLockScreenCameraToHome : SBUIAnimationZoomDownAppToHome {
	SBLockScreenViewController* _lockScreenViewController;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
}
- (id)initWithLockScreenViewController:(id)lockScreenViewController;
- (void)_prepareAnimation;
- (BOOL)_shouldTakeActivationAssertionForDeactivatingApp;
- (BOOL)_shouldUpdateStatusBarOnContentRestore;
- (void)animateFakeStatusBarWithParameters:(id)parameters;
- (void)animateZoomWithCompletion:(id)completion;
- (void)dealloc;
@end

