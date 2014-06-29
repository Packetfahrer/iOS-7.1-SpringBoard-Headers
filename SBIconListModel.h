/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconIndexNode.h"
#import "SpringBoard-Structs.h"
#import "NSFastEnumeration.h"

@class SBFolder, NSHashTable, SBIconIndexMutableList;

__attribute__((visibility("hidden")))
@interface SBIconListModel : XXUnknownSuperclass <SBIconIndexNode, NSFastEnumeration> {
	SBIconIndexMutableList* _icons;
	unsigned _maxIconCount;
	NSHashTable* _nodeObservers;
	NSHashTable* _listObservers;
	BOOL _iconStateIsDirty;
	SBFolder* _folder;
}
@property(readonly, retain) SBFolder* folder;
@property(readonly, retain) SBIconIndexMutableList* icons;
- (id)init;
- (id)initWithFolder:(id)folder maxIconCount:(unsigned)count;
- (void)_notifyListObservers:(id)observers;
- (BOOL)addIcon:(id)icon;
- (BOOL)addIcon:(id)icon asDirty:(BOOL)dirty;
- (void)addListObserver:(id)observer;
- (void)addNodeObserver:(id)observer;
- (BOOL)allowsAddingIcon:(id)icon;
- (unsigned)compactIcons;
- (id)containedNodeIdentifiers;
- (BOOL)containsIcon:(id)icon;
- (BOOL)containsLeafIconWithIdentifier:(id)identifier;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
- (void)dealloc;
- (id)description;
- (unsigned)firstFreeSlotIndex;
- (unsigned)firstFreeSlotIndexForType:(int)type;
- (id)iconAtIndex:(unsigned)index;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexForIcon:(id)icon;
- (unsigned)indexForLeafIconWithIdentifier:(id)identifier;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (id)insertIcon:(id)icon atIndex:(unsigned*)index;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (BOOL)isIconStateDirty;
- (void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
- (void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)markIconStateClean;
- (unsigned)maxNumberOfIcons;
- (BOOL)needsCompacting;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (unsigned)numberOfIcons;
- (id)placeIcon:(id)icon atIndex:(unsigned*)index;
- (void)removeIcon:(id)icon;
- (void)removeIconAtIndex:(unsigned)index;
- (void)removeListObserver:(id)observer;
- (void)removeNodeObserver:(id)observer;
- (void)warmUpIconImagesForLocation:(int)location;
@end
