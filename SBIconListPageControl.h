/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBIconPageIndicatorImageSetResult, SBIconPageIndicatorImageSetCache;
@protocol SBIconListPageControlDelegate;

__attribute__((visibility("hidden")))
@interface SBIconListPageControl : XXUnknownSuperclass {
	id<SBIconListPageControlDelegate> _delegate;
	BOOL _hasSetLegibility;
	SBIconPageIndicatorImageSetResult* _pageIndicatorImageSets;
	SBIconPageIndicatorImageSetCache* _imageSetCache;
}
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache* imageSetCache;
- (id)initWithFrame:(CGRect)frame;
- (id)_iconListIndicatorImage:(BOOL)image;
- (id)_indicatorViewEnabled:(BOOL)enabled index:(int)index;
- (void)_setIndicatorImage:(id)image toEnabled:(BOOL)enabled;
- (void)_transitionIndicator:(id)indicator toEnabled:(BOOL)enabled index:(int)index;
- (void)dealloc;
- (float)defaultHeight;
- (void)setFrame:(CGRect)frame;
- (void)setLegibilitySettings:(id)settings;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
@end

