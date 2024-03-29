/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication, UIView, SBStretchTransformer;

__attribute__((visibility("hidden")))
@interface SBSwitchAppGestureView : XXUnknownSuperclass {
	int m_orientation;
	SBApplication* m_startingApp;
	SBApplication* m_endingApp;
	SBApplication* m_leftwardApp;
	SBApplication* m_rightwardApp;
	int m_startingViewOrientation;
	int m_leftwardViewOrientation;
	int m_rightwardViewOrientation;
	UIView* m_startingView;
	UIView* m_leftwardView;
	UIView* m_rightwardView;
	float m_pageWidth;
	float m_percentage;
	float m_contentOffset;
	SBStretchTransformer* m_stretchTransformer;
	BOOL m_finishingPaging;
	BOOL m_underflowing;
	BOOL m_overflowing;
	id m_completion;
}
@property(copy, nonatomic) id completion;
@property(assign, nonatomic) float contentOffset;
@property(retain, nonatomic) SBApplication* endingApp;
@property(retain, nonatomic) SBApplication* leftwardApp;
@property(retain, nonatomic) UIView* leftwardView;
@property(assign, nonatomic) int leftwardViewOrientation;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) BOOL overflowing;
@property(assign, nonatomic) float pageWidth;
@property(readonly, assign, nonatomic) BOOL pagingLeftward;
@property(readonly, assign, nonatomic) BOOL pagingRightward;
@property(assign, nonatomic) float percentage;
@property(retain, nonatomic) SBApplication* rightwardApp;
@property(retain, nonatomic) UIView* rightwardView;
@property(assign, nonatomic) int rightwardViewOrientation;
@property(retain, nonatomic) SBApplication* startingApp;
@property(retain, nonatomic) UIView* startingView;
@property(assign, nonatomic) int startingViewOrientation;
@property(retain, nonatomic) SBStretchTransformer* stretchTransformer;
@property(assign, nonatomic) BOOL underflowing;
- (id)initWithInterfaceOrientation:(int)interfaceOrientation startingApp:(id)app leftwardApp:(id)app3 rightwardApp:(id)app4;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)beginPaging;
- (float)contentOffsetForApp:(id)app;
- (void)dealloc;
- (void)finishBackwardToStartWithCompletion:(id)completion;
- (void)finishForwardToEndWithPercentage:(float)percentage completion:(id)completion;
- (BOOL)isPagingOverflowPercentage:(float)percentage;
- (BOOL)isPagingUnderflowPercentage:(float)percentage;
- (void)moveToApp:(id)app;
- (void)moveToApp:(id)app animated:(BOOL)animated;
- (void)moveToContentOffset:(float)contentOffset percentage:(float)percentage animated:(BOOL)animated;
- (float)opacityForPercentage:(float)percentage;
- (float)percentageForApp:(id)app;
- (float)scaleForPercentage:(float)percentage;
- (void)stretchTransformerAnimationDidStop:(BOOL)stretchTransformerAnimation;
- (void)transformGestureViewContainer:(id)container;
- (void)updatePaging:(float)paging;
- (id)viewForApp:(id)app;
@end

