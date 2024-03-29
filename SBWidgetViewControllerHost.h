/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol SBWidgetViewControllerHostDelegate;

__attribute__((visibility("hidden")))
@interface SBWidgetViewControllerHost : XXUnknownSuperclass {
	id<SBWidgetViewControllerHostDelegate> _delegate;
	int _widgetIdiom;
	NSString* _widgetIdentifier;
	NSString* _appBundleID;
	NSString* _displayName;
	struct {
		unsigned _didFetchDisplayName : 1;
	} _widgetViewControllerHostFlags;
}
@property(readonly, assign, nonatomic) NSString* appBundleID;
@property(assign, nonatomic) id<SBWidgetViewControllerHostDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* displayName;
@property(readonly, assign, nonatomic) NSString* widgetIdentifier;
@property(readonly, assign, nonatomic) int widgetIdiom;
+ (void)_invalidateVendedWidgetClass;
+ (id)_requestLocalViewControllerOfClass:(Class)aClass context:(id)context handler:(id)handler;
+ (BOOL)canLoadWidgetWithIdentifier:(id)identifier forWidgetIdiom:(int)widgetIdiom bundlePath:(id)path;
+ (id)requestViewController:(id)controller context:(id)context handler:(id)handler;
+ (id)widgetViewControllerWithIdentifier:(id)identifier forWidgetIdiom:(int)widgetIdiom bundlePath:(id)path;
- (id)initWithWidgetIdentifier:(id)widgetIdentifier forWidgetIdiom:(int)widgetIdiom bundlePath:(id)path;
- (void)_requestLaunchOfURL:(id)url;
- (void)_requestPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
- (void)dealloc;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (void)requestPreferredViewSizeWithHandler:(id)handler;
@end

