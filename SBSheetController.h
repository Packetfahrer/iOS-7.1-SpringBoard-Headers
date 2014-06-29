/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, NSMutableDictionary, UIView, SBApplication;

__attribute__((visibility("hidden")))
@interface SBSheetController : XXUnknownSuperclass {
	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;
	SBApplication* _topHostedApp;
	UIView* _topHostedAppView;
}
+ (id)sharedInstance;
- (id)init;
- (void)_positionFakeStatusBarView:(id)view forOrientation:(int)orientation;
- (void)_tearDownSheet:(id)sheet;
- (id)applicationForTopSheet;
- (void)dealloc;
- (void)dismissAllSheets;
- (void)dismissRemoteViewIdentifier:(id)identifier forApplication:(id)application animated:(BOOL)animated;
- (void)dismissSheetView:(id)view animated:(BOOL)animated;
- (void)dismissSheetsForApplication:(id)application;
- (BOOL)isShowingSheets;
- (BOOL)isShowingSheetsForApplication:(id)application;
- (BOOL)presentRemoteViewIdentifier:(id)identifier asSheetForApplication:(id)application requireTopApplication:(BOOL)application3 animated:(BOOL)animated;
- (void)presentSheetView:(id)view animated:(BOOL)animated;
- (void)sendStatusBarOrientationWillChangeToSheets:(int)sendStatusBarOrientation duration:(float)duration;
- (BOOL)sheetWantsProgress;
@end
