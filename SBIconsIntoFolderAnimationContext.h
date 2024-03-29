/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, SBFolderIcon;

__attribute__((visibility("hidden")))
@interface SBIconsIntoFolderAnimationContext : XXUnknownSuperclass {
	SBFolderIcon* _folderIcon;
	NSArray* _iconSnapshots;
	NSArray* _miniSnapshots;
	NSArray* _addedIcons;
	BOOL _openFolderOnFinish;
	id _completeBlock;
}
@property(retain, nonatomic) NSArray* addedIcons;
@property(copy, nonatomic) id completeBlock;
@property(retain, nonatomic) SBFolderIcon* folderIcon;
@property(retain, nonatomic) NSArray* iconSnapshots;
@property(retain, nonatomic) NSArray* miniSnapshots;
@property(assign, nonatomic) BOOL openFolderOnFinish;
- (void)dealloc;
@end

