/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication, NSString;

__attribute__((visibility("hidden")))
@interface SBLaunchAlertItem : XXUnknownSuperclass {
	SBApplication* _associatedDisplay;
	int _type;
	NSString* _bundleID;
	BOOL _isDataAlert;
	BOOL _usesCellNetwork;
}
- (id)initWithLaunchAlertType:(int)launchAlertType dataAlert:(BOOL)alert usesCellNetwork:(BOOL)network bundleID:(id)anId;
- (id)_customAirplaneModeAlertPrompt;
- (void)_displayDeactivated:(id)deactivated;
- (id)alertSheet;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (void)setAssociatedWithDisplay:(id)display;
@end

