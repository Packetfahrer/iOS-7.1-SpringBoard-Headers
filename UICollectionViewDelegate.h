/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"


@protocol UICollectionViewDelegate <UIScrollViewDelegate>
@optional
- (BOOL)collectionView:(id)view canPerformAction:(SEL)action forItemAtIndexPath:(id)indexPath withSender:(id)sender;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didEndDisplayingSupplementaryView:(id)view2 forElementOfKind:(id)kind atIndexPath:(id)indexPath;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view performAction:(SEL)action forItemAtIndexPath:(id)indexPath withSender:(id)sender;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)indexPath;
- (id)collectionView:(id)view transitionLayoutForOldLayout:(id)oldLayout newLayout:(id)layout;
@end

