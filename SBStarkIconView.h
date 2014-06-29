/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconView.h"


__attribute__((visibility("hidden")))
@interface SBStarkIconView : SBIconView {
	BOOL _focused;
}
@property(readonly, assign, nonatomic) BOOL focused;
+ (int)_defaultIconFormat;
+ (float)_labelHeight;
+ (CGRect)_rectForLayoutMetric:(int)layoutMetric;
+ (BOOL)canShowUpdatedMark;
+ (CGSize)defaultIconSize;
+ (UIEdgeInsets)iconImagePaddingInsets;
+ (CGSize)maxLabelSize;
- (CGRect)_frameForLabel;
- (id)_labelImageParameters;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setFocused:(BOOL)focused;
- (void)setFocused:(BOOL)focused animated:(BOOL)animated;
@end

