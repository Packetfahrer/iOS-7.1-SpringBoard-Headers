/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLiveIconImageView.h"
#import "SpringBoard-Structs.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface SBClockApplicationIconImageView : SBLiveIconImageView {
	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
	CALayer* _blackDot;
	CALayer* _redDot;
}
+ (void)_handleTimeChange:(id)change;
+ (void)_iconEditingStateChanged:(id)changed;
+ (void)_timerFired:(id)fired;
+ (void)initialize;
- (id)initWithFrame:(CGRect)frame;
- (id)_generateSquareContentsImage;
- (void)_setAnimating:(BOOL)animating;
- (void)_timerFiredWithComponents:(id)components flags:(unsigned)flags;
- (void)_updateUnanimatedWithComponents:(id)components;
- (id)contentsImage;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateAnimatingState;
- (void)updateUnanimated;
@end

