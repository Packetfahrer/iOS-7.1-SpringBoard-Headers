/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertAdapter.h"


__attribute__((visibility("hidden")))
@interface SBUIFullscreenAlertAdapter : SBAlertAdapter {
	BOOL _animatingDeactivation;
	BOOL _animatingActivation;
}
@property(retain) id display;
+ (id)_adapterForController:(id)controller;
+ (void)activateAlertForController:(id)controller animated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay isSlidingDisplay:(BOOL)display;
+ (void)alertAdapterDisplayDidDisappear:(id)alertAdapterDisplay;
+ (void)deactivateAlertForController:(id)controller animated:(BOOL)animated animateOldDisplayInWithStyle:(int)style isSlidingDisplay:(BOOL)display;
- (id)initWithAlertController:(id)alertController;
- (void)_pluginViewAnimatedOut:(id)anOut;
- (void)_pluginViewDidAnimatedIn:(id)_pluginView;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (void)_updateForTransparentDismiss:(id)transparentDismiss;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)animateViewIn;
- (void)animateViewOut;
- (BOOL)currentlyAnimatingDeactivation;
- (void)deactivate;
- (void)dealloc;
- (void)displayDidDisappear;
- (id)effectiveViewController;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasTranslucentBackground;
- (BOOL)isCurrentlyAnimatingActivation;
- (void)prepareViewToAnimateIn;
- (void)prepareViewToAnimateOut;
- (void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
- (void)setViewShouldAnimateIn:(BOOL)animateIn;
- (BOOL)viewIsReadyToBeRemoved;
- (void)viewWillAppear:(BOOL)view;
@end

