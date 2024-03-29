/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BKSWorkspaceDelegate.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBWorkspaceTransactionGroupDelegate.h"
#import "SBStarkScreenManagerDelegate.h"
#import "SBStarkScreenControllerObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBScreenTimeTrackingController, NSMutableArray, SBAlertManager, SBWorkspaceEventQueueLockAssertion, NSObject, SBWorkspaceTransaction, NSTimer, BKSWorkspace;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBWorkspace : XXUnknownSuperclass <BKSWorkspaceDelegate, SBAlertManagerDelegate, SBAlertManagerObserver, SBWorkspaceTransactionGroupDelegate, SBStarkScreenManagerDelegate, SBStarkScreenControllerObserver> {
	BKSWorkspace* _bksWorkspace;
	SBAlertManager* _alertManager;
	BOOL _alertManagerIsDeactivatingAlert;
	SBScreenTimeTrackingController* _screenTimeTrackingController;
	SBWorkspaceTransaction* _currentTransaction;
	SBWorkspaceEventQueueLockAssertion* _eventQueueLock;
	NSObject<OS_dispatch_source>* _transactionWatchdog;
	NSTimer* _relaunchTimer;
	NSMutableArray* _applicationsToRelaunch;
}
@property(readonly, assign, nonatomic) SBAlertManager* alertManager;
@property(readonly, assign, nonatomic) BKSWorkspace* bksWorkspace;
@property(retain, nonatomic) SBWorkspaceTransaction* currentTransaction;
- (id)init;
- (BOOL)_applicationExited:(id)exited withInfo:(id)info;
- (id)_applicationForBundleIdentifier:(id)bundleIdentifier frontmost:(BOOL)frontmost;
- (void)_handleBuddyLaunchFinished;
- (BOOL)_handleSetupExited:(id)exited;
- (void)_invalidateRelaunchTimer;
- (void)_launchNextPendedAutoLaunchApp;
- (void)_memoryPressureRelieved:(id)relieved;
- (void)_memoryPressureWarn:(id)warn;
- (void)_noteCurrentTransactionFailed:(const char*)failed;
- (void)_scheduleRelaunchTimerIfNecessary;
- (id)_selectTransactionForAppActivationToApp:(id)app activationHandler:(id)handler;
- (id)_selectTransactionForAppActivationToApp:(id)app activationHandler:(id)handler canDeactivateAlerts:(BOOL)alerts;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)appActivationUnderMainScreenLock;
- (id)_selectTransactionForAppExited:(id)appExited;
- (id)_selectTransactionForAppRelaunch:(id)appRelaunch;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)app forceToBuddy:(BOOL)buddy withActivationHandler:(id)activationHandler;
- (id)_selectTransactionForReturningToTheLockScreenWithActivationHandler:(id)activationHandler;
- (void)_updateStatusBarTimeItemEnabled;
- (void)_workspace:(id)workspace handleOpenApplicationRequest:(id)request withOptions:(id)options origin:(id)origin withResult:(id)result;
- (void)_workspace:(id)workspace handleOpenURLRequest:(id)request application:(id)application withOptions:(id)options origin:(id)origin withResult:(id)result;
- (void)alertManager:(id)manager didActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager didRemoveAlert:(id)alert fromWindow:(id)window;
- (void)alertManager:(id)manager didTearDownAlertWindow:(id)window;
- (id)alertManager:(id)manager newAlertWindowForLockAlerts:(BOOL)lockAlerts;
- (BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
- (void)alertManager:(id)manager topAlert:(id)alert requestsWallpaperStyleChangeWithAnimationFactory:(id)animationFactory;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager willDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager willTearDownAlertWindow:(id)window;
- (void)alertManagerDidChangeTopAlert:(id)alertManager;
- (void)dealloc;
- (id)debugDescription;
- (void)starkScreenController:(id)controller didChangeStateFromState:(int)state;
- (void)starkScreenManagerDidChangeActiveController:(id)starkScreenManager;
- (void)starkScreenManagerWillChangeActiveController:(id)starkScreenManager;
- (void)transactionDidFinish:(id)transaction success:(BOOL)success;
- (void)transactionGroup:(id)group childTransactionDidFinish:(id)childTransaction success:(BOOL)success;
- (void)updateInterruptedByCallSettingsFrom:(id)from to:(id)to;
- (void)workspace:(id)workspace applicationActivated:(id)activated;
- (void)workspace:(id)workspace applicationDebugStateChanged:(id)changed newState:(BOOL)state;
- (void)workspace:(id)workspace applicationDidBecomeReceiver:(id)application fromApplication:(id)application3;
- (void)workspace:(id)workspace applicationDidFailToLaunch:(id)application;
- (void)workspace:(id)workspace applicationDidFinishLaunching:(id)application withInfo:(id)info;
- (void)workspace:(id)workspace applicationDidStartLaunching:(id)application;
- (void)workspace:(id)workspace applicationExited:(id)exited withInfo:(id)info;
- (void)workspace:(id)workspace applicationFinishedBackgroundContentFetching:(id)fetching withInfo:(id)info;
- (void)workspace:(id)workspace applicationSuspended:(id)suspended withSettings:(id)settings;
- (void)workspace:(id)workspace applicationSuspensionSettingsUpdated:(id)updated withSettings:(id)settings;
- (id)workspace:(id)workspace applicationWillBecomeReceiver:(id)application fromApplication:(id)application3;
- (int)workspace:(id)workspace canOpenApplication:(id)application;
- (void)workspace:(id)workspace handleOpenApplicationRequest:(id)request withOptions:(id)options origin:(id)origin withResult:(id)result;
- (void)workspace:(id)workspace handleOpenURLRequest:(id)request application:(id)application withOptions:(id)options origin:(id)origin withResult:(id)result;
- (void)workspace:(id)workspace handleStatusBarReturnActionFromApplication:(id)application statusBarStyle:(id)style;
- (void)workspaceDidResume:(id)workspace;
- (void)workspaceDidSuspend:(id)workspace;
- (void)workspaceWillResume:(id)workspace;
- (void)workspaceWillSuspend:(id)workspace;
@end

