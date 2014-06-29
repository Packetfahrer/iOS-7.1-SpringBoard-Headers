/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBUIUserAgent.h"

@class SBBulletinAlertHandlerRegistry;

__attribute__((visibility("hidden")))
@interface SBUserAgent : XXUnknownSuperclass <SBUIUserAgent> {
	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;
}
+ (id)sharedUserAgent;
- (id)init;
- (void)_cleanupFromBannerLaunch;
- (BOOL)_launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
- (BOOL)_openApplication:(id)application withURL:(id)url fromSource:(int)source animated:(BOOL)animated options:(id)options;
- (id)_safeValue:(id)value forKey:(id)key ofType:(Class)type;
- (void)activateModalBulletinAlert:(id)alert;
- (void)activateRemoteAlertService:(id)service options:(id)options;
- (int)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id)observer;
- (BOOL)alertIsActive;
- (BOOL)applicationInstalledForDisplayID:(id)displayID;
- (BOOL)canLaunchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId;
- (BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
- (BOOL)canLaunchFromSource:(int)source withURL:(id)url bundleID:(id)anId;
- (BOOL)canUserLaunchIcon;
- (void)dealloc;
- (CGRect)defaultContentRegionForAwayViewPlugin:(id)awayViewPlugin withOrientation:(int)orientation;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsLocked;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsTethered;
- (void)dimScreen:(BOOL)screen;
- (void)disableLockScreenBundleNamed:(id)named deactivationContext:(id)context;
- (void)enableLockScreenBundleNamed:(id)named activationContext:(id)context;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (BOOL)isIdleTimerDisabledForReason:(id)reason;
- (BOOL)isSBUILoggingEnabled;
- (BOOL)isUsingLegacyStyle;
- (BOOL)launchApplicationFromSource:(int)source withDisplayID:(id)displayID options:(id)options;
- (BOOL)launchApplicationFromSource:(int)source withURL:(id)url options:(id)options;
- (BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
- (BOOL)launchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
- (BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
- (BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
- (BOOL)launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock;
- (id)localizedDisplayNameForDisplayID:(id)displayID;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary andDimScreen:(BOOL)screen;
- (BOOL)lockScreenIsShowing;
- (id)modalBulletinAlertHandlerRegistry;
- (int)networkUsageTypeForAppWithDisplayID:(id)displayID;
- (void)notifyOnNextUserEvent;
- (BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
- (void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
- (void)playRingtoneAtPath:(id)path;
- (void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
- (void)prepareToAnswerCall;
- (void)removeActiveInterfaceOrientationObserver:(id)observer;
- (void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
- (void)setIdleText:(id)text;
- (void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
- (void)setMinimumBacklightLevel:(float)level animated:(BOOL)animated;
- (void)setWallpaperTunnelActive:(BOOL)active forFullscreenAlertController:(id)fullscreenAlertController;
- (BOOL)springBoardIsActive;
- (void)stopRinging;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateInterfaceOrientationIfNecessary;
- (void)updateLockScreenInterfaceIfNecessary;
@end

