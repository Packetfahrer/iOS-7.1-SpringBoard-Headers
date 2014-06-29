/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconObserver.h"
#import "SBIconIndexNodeObserver.h"
#import "SBReusableViewMap.h"
#import "SBIconViewObserver.h"

@class SBIconModel, NSMapTable, _UILegibilitySettings;
@protocol SBIconViewMapDelegate, SBIconViewDelegate;

__attribute__((visibility("hidden")))
@interface SBIconViewMap : SBReusableViewMap <SBIconObserver, SBIconIndexNodeObserver, SBIconViewObserver> {
	SBIconModel* _model;
	NSMapTable* _iconViewsForIcons;
	id<SBIconViewMapDelegate> _delegate;
	id<SBIconViewDelegate> _viewDelegate;
	NSMapTable* _labelsForIcons;
	NSMapTable* _lightLegibilityImagesForIcons;
	NSMapTable* _darkLegibilityImagesForIcons;
	NSMapTable* _accessoryImagesForIcons;
	_UILegibilitySettings* _legibilitySettings;
}
@property(readonly, assign, nonatomic) SBIconModel* iconModel;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
+ (id)homescreenMap;
- (id)initWithIconModel:(id)iconModel delegate:(id)delegate viewDelegate:(id)delegate3;
- (void)_addIconView:(id)view forIcon:(id)icon;
- (void)_cacheAccessoryImagesForIcon:(id)icon location:(int*)location;
- (void)_cacheImagesForIcon:(id)icon;
- (void)_cacheLabelImagesForIcon:(id)icon location:(int)location;
- (id)_iconViewForIcon:(id)icon;
- (void)_modelReloadedIcons;
- (void)_modelReloadedState;
- (void)_modelRemovedIcon:(id)icon;
- (void)_modelWillReloadState;
- (void)_observeIconAndCacheIfNecessary:(id)necessary;
- (void)_recycleIconView:(id)view;
- (void)dealloc;
- (id)extraIconViewForIcon:(id)icon;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (void)iconViewDidChangeLocation:(id)iconView;
- (id)iconViewForIcon:(id)icon;
- (void)invalidate;
- (id)mappedIconViewForIcon:(id)icon;
- (id)newViewOfClass:(Class)aClass;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)purgeIconFromMap:(id)map;
- (void)purgeRecycledIconViewsForClass:(Class)aClass;
- (void)recycleAndPurgeAll;
- (void)recycleIconView:(id)view;
- (void)recycleViewForIcon:(id)icon;
- (void)tryToReplaceIcon:(id)replaceIcon withIcon:(id)icon;
@end

