/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_SBIconWallpaperColorClient.h"
#import "SpringBoard-Structs.h"

@protocol SBIconBlurryBackgroundViewObserver;

__attribute__((visibility("hidden")))
@interface SBIconBlurryBackgroundView : XXUnknownSuperclass <_SBIconWallpaperColorClient> {
	CGRect _wallpaperRelativeBounds;
	BOOL _isBlurring;
	BOOL _suppressesExternalUpdates;
	id<SBIconBlurryBackgroundViewObserver> _observer;
	id _wantsBlurEvaluator;
	CGPoint _wallpaperRelativeCenter;
}
@property(readonly, assign, nonatomic) BOOL isBlurring;
@property(assign, nonatomic) id<SBIconBlurryBackgroundViewObserver> observer;
@property(assign, nonatomic, getter=isSuppressingExternalUpdates) BOOL suppressesExternalUpdates;
@property(readonly, assign) CGRect wallpaperRelativeBounds;
@property(assign, nonatomic) CGPoint wallpaperRelativeCenter;
@property(copy, nonatomic) id wantsBlurEvaluator;
- (id)initWithFrame:(CGRect)frame;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)dealloc;
- (void)didAddSubview:(id)subview;
- (void)setBlurring:(BOOL)blurring;
- (void)setWallpaperColor:(CGColorRef)color phase:(CGSize)phase;
- (BOOL)wantsBlur:(id)blur;
@end

