/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBDismissOnlyAlertItem;

__attribute__((visibility("hidden")))
@interface SBLockdownManager : XXUnknownSuperclass {
	int _state;
	BOOL _settingUpActivationState;
	BOOL _isBricked;
	BOOL _isDeveloperDevice;
	BOOL _hasShownMismatchedSIM;
	SBDismissOnlyAlertItem* _activatingAlertItem;
	NSString* _unqiueDeviceIdentifier;
}
@property(readonly, assign) BOOL isDeveloperDevice;
+ (id)sharedInstance;
- (id)init;
- (void)_activationFailed;
- (BOOL)_hasEverRegistered;
- (BOOL)_isRegisteredToNetwork;
- (void)_postAlertsIfNeeded;
- (void)_resetActivationState;
- (void)_serviceAvailabilityChanged:(id)changed;
- (void)_setCurrentAlertItem:(id)item;
- (void)_setHasEverRegistered:(BOOL)registered;
- (void)_setupActivationState;
- (BOOL)_shouldShowTelephonyAlerts;
- (BOOL)brickedDevice;
- (void)dealloc;
- (int)lockdownState;
@end

