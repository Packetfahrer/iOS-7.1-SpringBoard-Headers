/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"

@class SBUnlockActionContext;
@protocol SBLockScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenViewControllerBase : SBAlert {
	id<SBLockScreenViewControllerDelegate> _delegate;
	SBUnlockActionContext* _customUnlockActionContext;
}
@property(assign, nonatomic) id<SBLockScreenViewControllerDelegate> delegate;
@property(assign, getter=isInScreenOffMode) BOOL inScreenOffMode;
@property(assign, getter=isShowingMediaControls) BOOL showingMediaControls;
- (id)_customUnlockActionContext;
- (BOOL)_isLockAlert;
- (void)_transitionWallpaperFromLock;
- (void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)optionalOutTimingFunction adjustWindowLevel:(BOOL)level;
- (BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (void)activate;
- (BOOL)activateAlertItem:(id)item;
- (void)activateCamera;
- (void)activateCameraAnimated:(BOOL)animated;
- (void)activateCardItem:(id)item animated:(BOOL)animated;
- (id)activationBlockAnimated:(BOOL)animated;
- (id)activeLockScreenPluginController;
- (id)allPendingAlertItems;
- (BOOL)allowSystemGestureAtLocation:(CGPoint)location;
- (void)attemptToUnlockUIFromNotification;
- (void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
- (BOOL)cameraIsActive;
- (BOOL)cameraIsVisible;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
- (BOOL)canRelockForAutoDimTimer;
- (void)cancelReturnToCameraAfterCall;
- (id)currentAlertItem;
- (id)currentUnlockActionContext;
- (void)deactivate;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateCardItem:(id)item;
- (CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
- (id)dequeueAllPendingSuperModalAlertItems;
- (void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
- (void)dismissCameraImmediately;
- (void)emergencyDialerExitedWithError:(id)error;
- (void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
- (void)exitEmergencyDialerAnimated:(BOOL)animated;
- (void)finishUIUnlockFromSource:(int)source;
- (BOOL)handleExternalKeyDownEvent;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handlePhoneAppExitedIfNecessary;
- (BOOL)hasActiveUIAccessories;
- (BOOL)hasSuperModalAlertItems;
- (BOOL)isHidingPasscodeViewDuringCall;
- (BOOL)isLockScreenPluginViewVisible;
- (BOOL)isLockScreenVisible;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isPasscodeLockVisible;
- (BOOL)isShowingOverheatUI;
- (void)launchEmergencyDialer;
- (BOOL)lockScreenBulletinControllerIsActive;
- (BOOL)lockScreenIsShowingBulletins;
- (void)noteDeviceBlockedStatusUpdated;
- (void)noteExitingLostMode;
- (void)noteResetRestoreStateUpdated;
- (void)noteStartingPhoneCallWhileUILocked;
- (void)prepareForExternalUIUnlock;
- (void)prepareForMesaUnlockWithCompletion:(id)completion;
- (void)prepareForUIUnlock;
- (void)prepareToEnterLostMode;
- (void)prepareToReturnToCameraFromCall;
- (void)setCustomUnlockActionContext:(id)context;
- (void)setForcesPasscodeViewDuringCall:(BOOL)call;
- (void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated;
- (void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
- (void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
- (void)shakeSlideToUnlockTextWithCustomText:(id)customText;
- (BOOL)shouldReturnToCameraAfterCall;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowSlideshowButton;
- (void)startLockScreenFadeInAnimationForSource:(int)source;
- (void)updateCardItem:(id)item;
- (void)updateInterfaceIfNecessary;
- (void)updateOrientationForUndim;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
- (BOOL)wantsScreenToAutoDim;
- (BOOL)wantsToHandleAlert:(id)handleAlert;
- (void)willBeginDeactivationForTransitionToApp:(id)app animated:(BOOL)animated;
@end

