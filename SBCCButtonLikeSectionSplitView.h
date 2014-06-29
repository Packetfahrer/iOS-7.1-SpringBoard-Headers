/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionView.h"

@class SBCCButtonLikeSectionView, SBControlCenterSeparatorView;

__attribute__((visibility("hidden")))
@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView {
	SBControlCenterSeparatorView* _separatorView;
	float _separatorWidth;
	BOOL _leftHidden;
	BOOL _rightHidden;
	SBCCButtonLikeSectionView* _leftSection;
	SBCCButtonLikeSectionView* _rightSection;
}
@property(assign, nonatomic) SBCCButtonLikeSectionView* leftSection;
@property(assign, nonatomic) SBCCButtonLikeSectionView* rightSection;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_frameForSectionSlot:(int)sectionSlot;
- (void)_relayoutAnimated:(BOOL)animated;
- (CGRect)_separatorFrame;
- (void)_updateLabelParameters;
- (void)_updateSeparatorVisibility;
- (BOOL)_useLandscapeBehavior;
- (id)_viewForSectionSlot:(int)sectionSlot;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setLeftSectionHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setRightSectionHidden:(BOOL)hidden animated:(BOOL)animated;
@end

