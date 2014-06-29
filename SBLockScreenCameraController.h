/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockScreenSlideUpController.h"

@class NSDate, UIImageView, UIWindow, DeferredPUApplicationCameraViewController, UIView, NSObject, SBPasscodeLockDisableAssertion;
@protocol OS_dispatch_queue, SBLockScreenCameraControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenCameraController : SBLockScreenSlideUpController {
	UIView* _cameraClippingView;
	UIImageView* _cameraDefaultImageView;
	UIImageView* _cameraLandscapeDefaultImageView;
	UIView* _cameraBackgroundView;
	UIView* _cameraContainerView;
	UIView* _cameraFakeStatusBar;
	DeferredPUApplicationCameraViewController* _cameraViewController;
	BOOL _animatingCameraIn;
	BOOL _cancelCameraAnimation;
	BOOL _cameraModeActive;
	BOOL _cameraVisible;
	NSDate* _lastCameraSessionID;
	BOOL _exitedCameraForAlert;
	BOOL _exitedCameraToHomescreen;
	BOOL _restartCameraAfterCall;
	BOOL _disableGracePeriodForCamera;
	SBPasscodeLockDisableAssertion* _disableGracePeriodForCameraAssertion;
	NSObject<OS_dispatch_queue>* _prewarmQueue;
	UIWindow* _lockScreenWindow;
	id _savedWindowDelegate;
	BOOL _prewarming;
	id<SBLockScreenCameraControllerDelegate> _delegate;
}
@property(readonly, assign, nonatomic) UIView* cameraView;
@property(readonly, assign, getter=isCameraVisible) BOOL cameraVisible;
@property(assign, nonatomic) id<SBLockScreenCameraControllerDelegate> delegate;
- (id)init;
- (void)_activateCameraAfterCall;
- (void)_activateCameraWithNewSessionID:(BOOL)newSessionID afterCall:(BOOL)call;
- (void)_cancelCameraPrewarm;
- (void)_cleanupFromDismissal;
- (void)_createCameraViewControllerWithNewSessionID;
- (void)_createCameraViewControllerWithNewSessionID:(BOOL)newSessionID andStartPreview:(BOOL)preview;
- (void)_createCameraViewControllerWithOldSessionID;
- (void)_didActivate;
- (void)_didDeactivate;
- (void)_disableRotationForCamera;
- (void)_dismissCameraAnimated:(BOOL)animated;
- (void)_enableRotationForCamera;
- (void)_prewarmCamera;
- (void)_removeCameraPreviewViews;
- (void)_removeLockScreenViewFakeStatusBar;
- (void)_setCameraSessionID:(id)anId;
- (void)_setupCameraSlideDownAnimation;
- (void)_tearDownCameraPreview;
- (void)abortAnimatedTransition;
- (void)abortDynamicAnimationForScreenOff;
- (void)activate;
- (void)activateCamera;
- (void)cancelReturnToCameraAfterCall;
- (void)cleanupFromGesture;
- (void)deactivate;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)finalizeGesture;
- (id)grabberView;
- (BOOL)handleMenuButtonTap;
- (BOOL)isCameraActive;
- (void)noteStartingPhoneCallWhileUILocked;
- (void)prepareForSlideUpAnimation;
- (void)prepareToReturnToCameraFromCall;
- (void)presentCameraAnimated:(BOOL)animated;
- (void)setDisableGracePeriodForCamera:(BOOL)camera;
- (void)setGrabberOnLockScreen:(id)screen;
- (void)setInScreenOffMode:(BOOL)screenOffMode;
- (void)setLockScreenView:(id)view;
- (BOOL)shouldReturnToCameraAfterCall;
- (void)tearDownCameraUIImmediately;
- (void)translateSlidingViewByY:(float)y;
- (BOOL)wantsStatusBar;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end
