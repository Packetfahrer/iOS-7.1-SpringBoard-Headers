/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionViewController.h"

@class SBUIControlCenterSlider;

__attribute__((visibility("hidden")))
@interface SBCCBrightnessSectionController : SBControlCenterSectionViewController {
	SBUIControlCenterSlider* _slider;
	BKSDisplayBrightnessTransactionRef _brightnessTransaction;
}
- (float)_backlightLevel;
- (void)_noteScreenBrightnessDidChange:(id)_noteScreenBrightness;
- (void)_setBacklightLevel:(float)level;
- (void)_sliderDidBeginTracking:(id)_slider;
- (void)_sliderDidEndTracking:(id)_slider;
- (void)_sliderValueDidChange:(id)_sliderValue;
- (CGSize)contentSizeForOrientation:(int)orientation;
- (void)dealloc;
- (void)noteSettingsDidUpdate:(id)noteSettings;
- (id)sectionIdentifier;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
@end

