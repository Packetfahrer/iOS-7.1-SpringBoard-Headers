/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@protocol SBAppSliderContainerDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSliderContainer : XXUnknownSuperclass {
	id<SBAppSliderContainerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBAppSliderContainerDelegate> delegate;
- (void)didMoveToWindow;
- (void)setFrame:(CGRect)frame;
@end

