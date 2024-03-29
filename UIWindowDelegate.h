/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol UIWindowDelegate <NSObject>
@optional
- (void)getRotationContentSettings:(XXStruct_3uUjXA*)settings forWindow:(id)window;
- (id)rotatingContentViewForWindow:(id)window;
- (id)rotatingFooterViewForWindow:(id)window;
- (id)rotatingHeaderViewForWindow:(id)window;
- (id)rotatingSnapshotViewForWindow:(id)window;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
- (void)window:(id)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
- (void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)window:(id)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
- (void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)window:(id)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

