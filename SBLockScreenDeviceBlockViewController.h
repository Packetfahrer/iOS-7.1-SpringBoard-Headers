/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayViewController.h"

@class NSTimer, NSString;

__attribute__((visibility("hidden")))
@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController {
	NSTimer* _updateTimer;
}
@property(readonly, assign, nonatomic) NSString* slideToUnlockText;
- (void)_clearTimer;
- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;
- (void)dealloc;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
@end

