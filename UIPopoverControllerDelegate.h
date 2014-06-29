/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol UIPopoverControllerDelegate <NSObject>
@optional
- (void)popoverController:(id)controller willRepositionPopoverToRect:(inout CGRect*)rect inView:(inout id*)view;
- (void)popoverControllerDidDismissPopover:(id)popoverController;
- (BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
@end

