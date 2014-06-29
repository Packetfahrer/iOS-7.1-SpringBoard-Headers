/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinWindowClient.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBWidgetViewControllerHostDelegate.h"
#import "SBNotificationCenterViewControllerDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "SBCoordinatedPresenting.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication, SBChevronView, NSSet, SBWindow, SBNotificationCenterSettings, UILongPressGestureRecognizer, SBNotificationCenterViewController, SBUnlockActionContext, UIView;
@protocol SBPresentingDelegate;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterController : XXUnknownSuperclass <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerHostDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBCoordinatedPresenting> {
	SBNotificationCenterViewController* _viewController;
	UIView* _coveredContentSnapshot;
	SBApplication* _coveredApplication;
	SBChevronView* _borrowedGrabberView;
	id _borrowedGrabberWillPresentBlock;
	id _borrowedGrabberHideBlock;
	id _borrowedGrabberCompletionBlock;
	UILongPressGestureRecognizer* _grabberPressGesture;
	id _keyboardNotificationObserverToken;
	SBUnlockActionContext* _unlockActionContext;
	int _transitionState;
	int _presentedState;
	SBNotificationCenterSettings* _settings;
	BOOL _grabberEnabled;
}
@property(readonly, assign, nonatomic, getter=isAvailableWhileLocked) BOOL availableWhileLocked;
@property(assign, nonatomic) BOOL blursBackground;
@property(readonly, assign, nonatomic) NSSet* conflictingGestures;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, assign, nonatomic) NSSet* gestures;
@property(assign, nonatomic, getter=isGrabberEnabled) BOOL grabberEnabled;
@property(readonly, assign, nonatomic, getter=isGrabberVisible) BOOL grabberVisible;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(readonly, assign, nonatomic) int layoutMode;
@property(readonly, assign, nonatomic, getter=isNotificationsViewAvailableWhileLocked) BOOL notificationsViewAvailableWhileLocked;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic, getter=isPresentingWidgetContent) BOOL presentingWidgetContent;
@property(readonly, assign, nonatomic) SBNotificationCenterSettings* settings;
@property(readonly, assign, nonatomic) NSSet* tapExcludedViews;
@property(readonly, assign, nonatomic, getter=isTodayViewAvailableWhileLocked) BOOL todayViewAvailableWhileLocked;
@property(readonly, assign, nonatomic, getter=isTransitioning) BOOL transitioning;
@property(readonly, assign, nonatomic) SBUnlockActionContext* unlockActionContext;
@property(readonly, assign, nonatomic) SBNotificationCenterViewController* viewController;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, assign, nonatomic) SBWindow* window;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)newDynamicAnimationForShow:(BOOL)show targetValue:(double)value withInitialValue:(double)initialValue velocity:(double)velocity extraPull:(BOOL)pull;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (double)transitionAnimationDuration;
- (id)init;
- (void)_beginPresentationWithTouchLocation:(CGPoint)touchLocation setupPrelude:(id)prelude setupPostlude:(id)postlude animationPrelude:(id)prelude4;
- (void)_cleanupAfterTransition:(BOOL)transition;
- (void)_endTransitionWithVelocity:(CGPoint)velocity additionalValueApplier:(id)applier animationPostlude:(id)postlude completion:(id)completion;
- (BOOL)_handleActionOrRequestWithDefaultAction:(id)defaultAction lockedAction:(id)action;
- (void)_insertCoveredContentSnapshotIfNecessary:(id)necessary;
- (void)_invalidateCoveredContentSnapshot;
- (BOOL)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(id)profileBlock counterpartBlock:(id)block;
- (BOOL)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)featureKeyAvailableWhileLocked isLockedDownByRestrictions:(BOOL*)restrictions;
- (void)_present:(BOOL)present stepper:(id)stepper;
- (void)_present:(BOOL)present withStandardAnimation:(BOOL)standardAnimation stepper:(id)stepper completion:(id)completion fromCurrentState:(BOOL)currentState;
- (void)_presentAnimated:(BOOL)animated setupPrelude:(id)prelude setupPostlude:(id)postlude animationPrelude:(id)prelude4 animationPostlude:(id)postlude5 completion:(id)completion;
- (void)_removeCoveredContentSnapshot;
- (void)_setGrabberEnabled:(BOOL)enabled;
- (void)_setViewUserInteractionEnabled:(BOOL)enabled;
- (void)_setupForDismissal;
- (void)_setupForPresentationWithTouchLocation:(CGPoint)touchLocation;
- (void)_setupForViewPresentation;
- (BOOL)_shouldSelectViewControllerAtTouchLocation;
- (void)_updateCoveredContentSnapshot;
- (void)_updateForChangeInMessagePrivacy;
- (void)abortAnimatedTransition;
- (void)beginDismissalWithTouchLocation:(CGPoint)touchLocation;
- (void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
- (void)biometricEventMonitorDidAuthenticate:(id)biometricEventMonitor;
- (void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
- (void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
- (BOOL)canShowHideGrabberView;
- (void)cancelTransition;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)animated;
- (void)dismissAnimated:(BOOL)animated completion:(id)completion;
- (void)dismissAnimated:(BOOL)animated withStepper:(id)stepper completion:(id)completion fromCurrentState:(BOOL)currentState;
- (void)dismissPresentedWidgetContentAnimated:(BOOL)animated;
- (BOOL)doesSectionWithIdentifierUpdateMessagePrivacyViaSectionParameters:(id)identifierUpdateMessagePrivacyViaSectionParameters;
- (void)endTransitionWithVelocity:(CGPoint)velocity additionalValueApplier:(id)applier completion:(id)completion;
- (void)endTransitionWithVelocity:(CGPoint)velocity completion:(id)completion;
- (void)finishedScrollTest;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (BOOL)handleActionForBulletin:(id)bulletin;
- (void)handleGrabberPress:(id)press;
- (BOOL)handleMenuButtonTap;
- (void)hideGrabberAnimated:(BOOL)animated completion:(id)completion;
- (void)invalidateUnlockActionContext;
- (BOOL)isPresentingControllerTransitioning;
- (void)prepareLayoutForPresentationFromBanner;
- (void)presentAnimated:(BOOL)animated;
- (void)presentAnimated:(BOOL)animated completion:(id)completion;
- (void)registerSharedGrabberView:(id)view withWillPresentBlock:(id)with hideBlock:(id)block andCompletion:(id)completion;
- (void)reloadAllWidgets;
- (void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)showGrabberAnimated:(BOOL)animated;
- (void)unregisterSharedGrabberView;
- (void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
- (void)widget:(id)widget requestsLaunchOfURL:(id)url;
- (void)widget:(id)widget requestsPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
- (id)widgetViewControllerHostDelegate:(id)delegate;
@end

