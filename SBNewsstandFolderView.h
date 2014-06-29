/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconIndexNodeObserver.h"
#import "SBFolderView.h"

@class SBNewsstandBackgroundView, UIButton;

__attribute__((visibility("hidden")))
@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver> {
	UIButton* _storeButton;
	UIButton* _emptyImageButton;
	SBNewsstandBackgroundView* _backgroundView;
}
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
- (void)_layoutSubviews;
- (void)_newsstandStoreAvailabilityDidChangeNotification:(id)_newsstandStoreAvailability;
- (BOOL)_showsTitle;
- (void)_storeButtonTapped:(id)tapped;
- (float)_titleFontSize;
- (void)_updateEmptyState;
- (void)dealloc;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)setFolder:(id)folder;
- (void)setLegibilitySettings:(id)settings;
@end
