/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationDosidoTransitionController.h"

@class UIView, SBLockScreenViewControllerBase;

__attribute__((visibility("hidden")))
@interface SBUIAnimationAppToLockScreenCamera : SBUIAnimationDosidoTransitionController {
	SBLockScreenViewControllerBase* _lockscreenVC;
	UIView* _cameraPNGView;
}
- (id)initWithActivatingLockscreen:(id)activatingLockscreen deactivatingApp:(id)app;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)dealloc;
@end

