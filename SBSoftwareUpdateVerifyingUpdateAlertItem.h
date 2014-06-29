/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {
	UIView* _activityAccessoryView;
}
- (id)initWithDescriptor:(id)descriptor;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)behavesSuperModally;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
@end

