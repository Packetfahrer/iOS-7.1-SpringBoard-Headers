/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface SBPieChartSlice : XXUnknownSuperclass {
	float _value;
	UIColor* _fillColor;
}
@property(readonly, assign) UIColor* fillColor;
@property(readonly, assign) float value;
+ (id)sliceWithValue:(float)value fillColor:(id)color;
- (id)initWithValue:(float)value fillColor:(id)color;
- (void)dealloc;
@end

