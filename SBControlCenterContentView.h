/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBControlCenterObserver.h"

@class NSMutableArray, SBCCSettingsSectionController, SBControlCenterSectionViewController, SBControlCenterGrabberView, UIViewController, SBCCQuickLaunchSectionController;

__attribute__((visibility("hidden")))
@interface SBControlCenterContentView : XXUnknownSuperclass <SBControlCenterObserver> {
	NSMutableArray* _dividerViews;
	UIViewController* _viewController;
	SBControlCenterGrabberView* _grabberView;
	SBCCSettingsSectionController* _settingsSection;
	SBControlCenterSectionViewController* _brightnessSection;
	SBControlCenterSectionViewController* _mediaControlsSection;
	SBControlCenterSectionViewController* _airplaySection;
	SBCCQuickLaunchSectionController* _quickLaunchSection;
}
@property(retain, nonatomic) SBControlCenterSectionViewController* airplaySection;
@property(retain, nonatomic) SBControlCenterSectionViewController* brightnessSection;
@property(retain, nonatomic) SBControlCenterGrabberView* grabberView;
@property(retain, nonatomic) SBControlCenterSectionViewController* mediaControlsSection;
@property(retain, nonatomic) SBCCQuickLaunchSectionController* quickLaunchSection;
@property(retain, nonatomic) SBCCSettingsSectionController* settingsSection;
@property(assign, nonatomic) UIViewController* viewController;
- (id)initWithFrame:(CGRect)frame;
- (void)_addSectionController:(id)controller;
- (id)_allSections;
- (void)_iPad_layoutSubviewsInBounds:(CGRect)bounds orientation:(int)orientation;
- (void)_iPhone_layoutSubviewsInBounds:(CGRect)bounds orientation:(int)orientation;
- (void)_removeSectionController:(id)controller;
- (id)_separatorAtIndex:(unsigned)index;
- (float)contentHeightForOrientation:(int)orientation;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateEnabledSections;
- (void)updateSectionVisibility:(id)visibility animated:(BOOL)animated;
@end

