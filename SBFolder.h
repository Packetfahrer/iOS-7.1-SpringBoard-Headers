/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconIndexNode.h"
#import "SBIconIndexMutableListObserver.h"
#import "SBIconListModelObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSCountedSet, NSHashTable, SBIconIndexMutableList, SBFolderIcon, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBFolder : XXUnknownSuperclass <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {
	NSString* _displayName;
	NSString* _defaultDisplayName;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSCountedSet* _coalesceChangesRequests;
	unsigned _maxListCount;
	unsigned _maxIconCountInLists;
	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;
}
@property(assign, nonatomic, getter=isCancelable) BOOL cancelable;
@property(retain) NSString* defaultDisplayName;
@property(copy, nonatomic) NSString* displayName;
@property(assign, nonatomic) SBFolderIcon* icon;
@property(assign, nonatomic) BOOL isOpen;
@property(readonly, retain) SBIconIndexMutableList* lists;
@property(readonly, assign) unsigned maxListCount;
+ (BOOL)isNewsstandFolderClass;
+ (BOOL)isRootFolderClass;
- (id)init;
- (id)initWithMaxListCount:(unsigned)maxListCount maxIconCountInLists:(unsigned)lists;
- (void)_addList:(id)list;
- (id)_createNewListWithIcon:(id)icon;
- (BOOL)_isCoalescingContentChanges;
- (id)_listsForCompaction;
- (void)_removeLists:(id)lists;
- (void)_setLists:(id)lists;
- (id)addEmptyList;
- (void)addFolderObserver:(id)observer;
- (id)addIcon:(id)icon;
- (void)addNodeObserver:(id)observer;
- (id)allIcons;
- (BOOL)canAddIcon;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;
- (void)compactIconsAndLists;
- (BOOL)compactLists;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (void)dealloc;
- (id)folderContainingIndexPath:(id)path relativeIndexPath:(id*)path2;
- (id)folderIcons;
- (id)iconAtIndexPath:(id)indexPath;
- (void)iconList:(id)list didAddIcon:(id)icon;
- (void)iconList:(id)list didRemoveIcon:(id)icon;
- (void)iconList:(id)list didReplaceIcon:(id)icon withIcon:(id)icon3;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexOfList:(id)list;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)firstFreeSlotAvoidingFirstList;
- (id)indexPathForIcon:(id)icon;
- (id)indexPathForIcon:(id)icon includingPlaceholders:(BOOL)placeholders;
- (id)indexPathForIconWithIdentifier:(id)identifier;
- (id)indexPathForNodeIdentifier:(id)nodeIdentifier;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (id)insertIcon:(id)icon atIndexPath:(id*)indexPath;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (BOOL)isIconStateDirty;
- (BOOL)isNewsstandFolder;
- (BOOL)isRootFolder;
- (id)leafIcons;
- (void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
- (void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)listAtIndex:(unsigned)index;
- (id)listContainingIcon:(id)icon;
- (id)listContainingLeafIconWithIdentifier:(id)identifier;
- (unsigned)listCount;
- (Class)listModelClass;
- (void)markIconStateClean;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (id)performCascadingIconInsertion:(id)insertion indexPath:(id)path;
- (id)performCascadingIconInsertion:(id)insertion listIndex:(unsigned)index iconIndex:(unsigned)index3;
- (id)placeIcon:(id)icon atIndexPath:(id*)indexPath;
- (void)purgeLists;
- (void)removeEmptyList:(id)list;
- (void)removeFolderObserver:(id)observer;
- (void)removeIconAtIndexPath:(id)indexPath;
- (void)removeNodeObserver:(id)observer;
- (BOOL)shouldRemoveWhenEmpty;
- (void)startCoalescingContentChangesWithRequestID:(id)requestID;
- (void)stopCoalescingContentChangesForRequestID:(id)requestID;
- (void)stopCoalescingContentChangesForRequestID:(id)requestID forceReload:(BOOL)reload;
- (id)visibleIcons;
@end

