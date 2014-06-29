/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBWallpaperDefaults : XXUnknownSuperclass {
}
+ (id)defaults;
- (CGRect)cropRectForVariant:(int)variant;
- (float)parallaxFactorForVariant:(int)variant;
- (void)resetCroppingDefaults;
- (void)resetDefaults;
- (void)resetParallaxFactorDefaults;
- (void)resetZoomScaleDefaults;
- (void)setCropRect:(CGRect)rect forLocations:(int)locations;
- (void)setParallaxFactor:(float)factor forLocations:(int)locations;
- (void)setSupportsCropping:(BOOL)cropping forLocations:(int)locations;
- (void)setWallpaperOptions:(id)options forLocations:(int)locations;
- (void)setZoomScale:(float)scale forLocations:(int)locations;
- (BOOL)supportsCroppingForVariant:(int)variant;
- (float)zoomScaleForVariant:(int)variant;
@end

