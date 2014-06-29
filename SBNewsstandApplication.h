/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplication.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandApplication : SBApplication {
	BOOL _isMagazineApp;
	BOOL _iconIsBoundOnRight;
	unsigned _supportsNewsstandContentBackgroundMode : 1;
	unsigned _allowedContentNotificationsPerDay;
	unsigned char _newsstandWakes;
	unsigned _lastPostedState;
}
@property(readonly, assign, nonatomic) BOOL iconIsBoundOnRight;
@property(readonly, assign, nonatomic) BOOL isMagazineApp;
- (id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated entitlements:(id)entitlements;
- (void)activate;
- (void)didExitWithInfo:(id)info type:(int)type;
- (void)didLaunch:(id)launch;
- (Class)iconClass;
- (BOOL)isFakeApp;
- (BOOL)isNewsstandApplication;
- (void)resumeForContentAvailable;
- (void)setApplicationState:(unsigned)state;
- (BOOL)shouldThrottleContentNotificationOnDate:(id)date withLastCount:(unsigned*)lastCount onDay:(int*)day;
@end

