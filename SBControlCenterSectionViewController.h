/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBControlCenterObserver.h"

@class NSString;
@protocol SBControlCenterSectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBControlCenterSectionViewController : XXUnknownSuperclass <SBControlCenterObserver> {
	id<SBControlCenterSectionViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBControlCenterSectionViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* sectionIdentifier;
+ (Class)viewClass;
- (CGSize)contentSizeForOrientation:(int)orientation;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (BOOL)enabledForOrientation:(int)orientation;
- (void)loadView;
- (void)noteSettingsDidUpdate:(id)noteSettings;
- (id)view;
@end

