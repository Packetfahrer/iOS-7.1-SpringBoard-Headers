/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUIBannerView.h"
#import "SBVibrantBannerView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBUIBannerContext, SBDefaultBannerTextView, UIImageView;
@protocol SBDefaultBannerViewSource;

__attribute__((visibility("hidden")))
@interface SBDefaultBannerView : XXUnknownSuperclass <SBUIBannerView, SBVibrantBannerView> {
	SBUIBannerContext* _context;
	id<SBDefaultBannerViewSource> _viewSource;
	UIImageView* _iconImageView;
	SBDefaultBannerTextView* _textView;
	UIImageView* _attachmentImageView;
	CGSize _grabberSize;
	UIView* _grabberView;
}
+ (id)_defaultGrabberColor;
+ (id)_defaultRelevanceDateColor;
+ (id)defaultColorForElement:(int)element;
- (id)initWithContext:(id)context;
- (id)initWithFrame:(CGRect)frame;
- (id)_grabberColor;
- (id)_relevanceDateColor;
- (void)_setGrabberColor:(id)color;
- (void)_setRelevanceDateColor:(id)color;
- (id)bannerContext;
- (id)colorForElement:(int)element;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setColor:(id)color forElement:(int)element;
@end

