/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class SBApplicationIcon;

__attribute__((visibility("hidden")))
@interface SBAppProfileExpiredAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBApplicationIcon* _icon;
}
- (id)initWithIcon:(id)icon;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end

