/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SBCallPermissionAlertItem : XXUnknownSuperclass {
	NSURL* _url;
	SBApplication* _appHandlingURL;
	NSString* _sender;
}
- (id)initWithURL:(id)url applicationHandlingURL:(id)url2 sender:(id)sender;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end

