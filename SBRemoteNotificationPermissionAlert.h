/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationPermissionAlert : XXUnknownSuperclass {
	SBApplication* _app;
	unsigned _types;
}
- (id)initWithApplication:(id)application notificationTypes:(unsigned)types;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)shouldShowInLockScreen;
@end

