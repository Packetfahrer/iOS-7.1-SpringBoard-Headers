/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, SBApplication, UIView, SBDosidoAnimator;

__attribute__((visibility("hidden")))
@interface SBUIStarkDosidoAnimation : SBUIStarkScreenAnimationController {
	UIView* _fromView;
	UIView* _toView;
	UIView* _viewToHide;
	SBAlert* _alertImpersonator;
	SBApplication* _impersonatedApplication;
	SBDosidoAnimator* _dosidoAnimator;
	BOOL _animationFinished;
	BOOL _fromAssistant;
}
- (id)initFromAlertImpersonator:(id)alertImpersonator toApp:(id)app starkScreenController:(id)controller;
- (id)initFromApp:(id)app toAlertImpersonator:(id)alertImpersonator starkScreenController:(id)controller;
- (id)initFromApp:(id)app toApp:(id)app2 starkScreenController:(id)controller;
- (double)_animationDelay;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_cleanupHosting;
- (void)_commonInitFromView:(id)view toView:(id)view2 alert:(id)alert toDisplay:(id)display;
- (void)_maybeReportAnimationFinished;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (void)dealloc;
- (void)noteDependencyDidInvalidate;
@end

