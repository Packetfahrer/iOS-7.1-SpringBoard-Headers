/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDisplayProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBActivationContext, NSMapTable, NSHashTable, UIScreen, SBAlertManager, NSMutableDictionary, SBAlertView;
@protocol SBAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBAlert : XXUnknownSuperclass <SBDisplayProtocol> {
	id<SBAlertDelegate> _alertDelegate;
	SBAlertView* _display;
	NSMutableDictionary* _dictionary;
	SBActivationContext* _activationContext;
	BOOL _isWallpaperTunnelActive;
	BOOL _backgroundStyleIsSet;
	int _backgroundStyle;
	BOOL _suppressesBanners;
	NSMapTable* _displayValues;
	NSHashTable* _displayFlags;
	BOOL _orientationChangedEventsEnabled;
	float _accelerometerSampleInterval;
	BOOL _requestedDismissal;
	UIScreen* _targetScreen;
	NSHashTable* _observers;
	SBAlertManager* _alertManager;
}
@property(assign) double accelerometerSampleInterval;
@property(copy, nonatomic) SBActivationContext* activationContext;
@property(assign) id alertDelegate;
@property(retain, nonatomic) SBAlertManager* alertManager;
@property(retain) SBAlertView* display;
@property(assign) BOOL expectsFaceContact;
@property(assign) BOOL orientationChangedEventsEnabled;
@property(assign, nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) BOOL requestedDismissal;
@property(assign, nonatomic) BOOL suppressesBanners;
@property(assign, getter=isWallpaperTunnelActive) BOOL wallpaperTunnelActive;
+ (void)registerForAlerts;
+ (void)test;
- (id)init;
- (id)_impersonatesApplicationWithBundleID;
- (BOOL)_isLockAlert;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_screen;
- (void)_setTargetScreen:(id)screen;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (void)activate;
- (BOOL)activationFlag:(unsigned)flag;
- (id)activationValue:(unsigned)value;
- (void)addObserver:(id)observer;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertViewIsReadyToDismiss:(id)dismiss;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)animateDeactivation;
- (double)autoDimTime;
- (double)autoLockTime;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearDisplay;
- (void)clearDisplaySettings;
- (BOOL)currentlyAnimatingDeactivation;
- (int)customBackgroundStyle;
- (void)deactivate;
- (BOOL)deactivationFlag:(unsigned)flag;
- (id)deactivationValue:(unsigned)value;
- (void)dealloc;
- (id)description;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingIn;
- (void)didFinishAnimatingOut;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)dismissAlert;
- (void)displayDidDisappear;
- (BOOL)displayFlag:(unsigned)flag;
- (id)displayValue:(unsigned)value;
- (int)effectiveStatusBarStyle;
- (id)effectiveStatusBarStyleRequest;
- (id)effectiveViewController;
- (BOOL)expectsFaceContactInLandscape;
- (float)finalAlpha;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handleSlideshowHardwareButton;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasTranslucentBackground;
- (int)interfaceOrientationForActivation;
- (BOOL)isRemote;
- (id)legibilitySettings;
- (void)loadView;
- (BOOL)managesOwnStatusBarAtActivation;
- (BOOL)matchesRemoteAlertService:(id)service options:(id)options;
- (id)objectForKey:(id)key;
- (void)removeBackgroundStyleWithAnimationFactory:(id)animationFactory;
- (void)removeFromView;
- (void)removeObjectForKey:(id)key;
- (void)removeObserver:(id)observer;
- (void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setActivationSetting:(unsigned)setting value:(id)value;
- (void)setBackgroundStyle:(int)style withAnimationFactory:(id)animationFactory;
- (void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDeactivationSetting:(unsigned)setting value:(id)value;
- (void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDisplaySetting:(unsigned)setting value:(id)value;
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
- (void)setObject:(id)object forKey:(id)key;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)shouldPendAlertItemsWhileActive;
- (BOOL)showsSpringBoardStatusBar;
- (int)starkStatusBarStyle;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (id)statusBarStyleRequest;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (BOOL)undimsDisplay;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (BOOL)wantsCustomBackgroundStyle;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willBeginDeactivationForTransitionToApp:(id)app animated:(BOOL)animated;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

