/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWallpaperObserver.h"

@class UIImageView, SBWallpaperEffectView, SBHighlightView, UIView, SBDockIconListView, _UILegibilitySettings;

__attribute__((visibility("hidden")))
@interface SBDockView : XXUnknownSuperclass <SBWallpaperObserver> {
	SBDockIconListView* _iconListView;
	SBHighlightView* _highlightView;
	SBWallpaperEffectView* _backgroundView;
	UIImageView* _backgroundImageView;
	UIView* _accessibilityBackgroundView;
	_UILegibilitySettings* _legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
+ (float)defaultHeight;
- (id)initWithDockListView:(id)dockListView forSnapshot:(BOOL)snapshot;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (id)_newBackgroundImage;
- (void)dealloc;
- (id)dockListView;
- (float)heightForOrientation:(int)orientation;
- (void)layoutSubviews;
- (void)setBackgroundAlpha:(float)alpha;
- (void)setVerticalBackgroundStretch:(float)stretch;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
@end

