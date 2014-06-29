/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBSIMLockAlertItem, SBSIMLockEntryAlert;

__attribute__((visibility("hidden")))
@interface SBSIMLockManager : XXUnknownSuperclass {
	BOOL _isInitialUpdate;
	BOOL _isBrickedDevice;
	int _status;
	SBSIMLockAlertItem* _currentAlert;
	SBSIMLockEntryAlert* _lockEntryAlert;
	NSString* _languageCode;
	BOOL _hasHadSIMWhileNotBricked;
	BOOL _wasActivated;
	BOOL _neededUIM;
}
@property(readonly, retain) NSString* languageCode;
@property(readonly, assign) int status;
+ (id)sharedInstance;
- (id)init;
- (int)_CTToSBSIMStatus:(CFStringRef)sbsimstatus;
- (void)_activationDidChange;
- (void)_externalSIMStatusChanged:(id)changed;
- (void)_handlePromptForUnlock;
- (void)_initialUpdate;
- (void)_postponementDidChange;
- (void)_setupAppActivationStateDidChange:(id)_setupAppActivationState;
- (BOOL)_shouldSuppressAlert;
- (int)_statusFromCT;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_telephonyDidRestart;
- (void)_tryToUpdateStatus;
- (void)_updateSIMStatus:(CFStringRef)status withOptions:(CFDictionaryRef)options;
- (void)_updateToStatus:(int)status;
- (void)airplaneModeChanged;
- (void)alertItemDismissed:(id)dismissed;
- (void)attemptUnlock;
- (void)dealloc;
- (void)lockEntryAlertDismissed:(id)dismissed;
- (int)pinLockAttemptsRemaining;
- (int)pukLockAttemptsRemaining;
- (void)registerForAlerts;
- (void)repopAlert;
@end
