/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDateLabelDelegate.h"
#import "SBLockScreenBulletinCell.h"

@class SBSnoozedAlarmDateLabel;

__attribute__((visibility("hidden")))
@interface SBLockScreenSnoozedAlarmCell : SBLockScreenBulletinCell <SBDateLabelDelegate> {
	SBSnoozedAlarmDateLabel* _countdownLabel;
}
+ (float)rowHeight;
+ (BOOL)wantsUnlockActionText;
- (void)dateLabelDidChange:(id)dateLabel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setContentAlpha:(float)alpha;
- (void)setFireDate:(id)date;
@end

