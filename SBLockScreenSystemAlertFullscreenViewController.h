/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayViewDelegate.h"
#import "SBLockOverlayViewController.h"

@class SBSystemLocalNotificationAlert, NSString, SBLockOverlayView;

__attribute__((visibility("hidden")))
@interface SBLockScreenSystemAlertFullscreenViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {
	SBSystemLocalNotificationAlert* _alertItem;
	SBLockOverlayView* _fullscreenAlertView;
	NSString* _title;
	NSString* _actionText;
}
@property(readonly, assign, nonatomic) SBSystemLocalNotificationAlert* alertItem;
- (id)initWithSystemNotification:(id)systemNotification title:(id)title subtitle:(id)subtitle;
- (void)deactivateAlertItem;
- (void)dealloc;
- (void)handleTapGestureFromView:(id)view;
- (void)loadView;
- (void)lockButtonPressed:(id)pressed;
- (void)performUnlockAction;
- (void)snoozeAlertItemWithReason:(int)reason;
@end

