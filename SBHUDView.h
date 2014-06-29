/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImageView, UIImage, UIView, NSString, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SBHUDView : XXUnknownSuperclass {
	int _level;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _image;
	BOOL _showsProgress;
	float _progress;
	UIView* _blockView;
	_UIBackdropView* _backdropView;
	UIImageView* _backdropMaskImageView;
}
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) int level;
@property(assign, nonatomic) float progress;
@property(assign, nonatomic) BOOL showsProgress;
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) NSString* title;
+ (int)numberOfProgressIndicatorSteps;
+ (float)progressIndicatorStep;
- (id)initWithHUDViewLevel:(int)hudviewLevel;
- (id)_blockColorForValue:(float)value;
- (void)_updateBackdropMask;
- (void)_updateBlockView;
- (void)_updateBlockView:(id)view value:(float)value blockSize:(CGSize)size point:(CGPoint)point;
- (void)cancelDismissal;
- (void)dealloc;
- (void)dismissWithCompletion:(id)completion;
- (BOOL)displaysLabel;
- (void)layoutSubviews;
@end
