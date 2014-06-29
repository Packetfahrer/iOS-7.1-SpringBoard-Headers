/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class UIView, SBAlertManager, SBAlert;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadePluginAlertToHome : SBUIMainScreenAnimationController {
	SBAlertManager* _alertManager;
	SBAlert* _alert;
	UIView* _viewToAnimate;
}
- (id)initWithDeactivatingAlert:(id)deactivatingAlert alertManager:(id)manager;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)dealloc;
@end

