/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSDate, _UILegibilityLabel, UILabel, SBLockScreenTimerDialView;

__attribute__((visibility("hidden")))
@interface SBLockScreenTimerView : XXUnknownSuperclass {
	NSDate* _endDate;
	SBLockScreenTimerDialView* _timerDial;
	UILabel* _layoutLabel;
	_UILegibilityLabel* _timerLabel;
}
+ (id)_timerFont;
+ (float)interItemSpacing;
- (id)initWithFrame:(CGRect)frame;
- (id)_newLegibilityLabelForSettings:(id)settings strength:(float)strength;
- (id)_newTimerDialForSettings:(id)settings strength:(float)strength;
- (float)baselineOffsetFromBottom;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEndDate:(id)date;
- (void)setLegibilitySettings:(id)settings textStrength:(float)strength dialStrength:(float)strength3;
- (void)setTimerHidden:(BOOL)hidden;
- (CGSize)sizeThatFits:(CGSize)fits;
- (void)updateTimerLabel;
@end

