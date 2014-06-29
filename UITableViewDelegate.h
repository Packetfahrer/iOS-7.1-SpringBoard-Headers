/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import "NSObject.h"


@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>
@optional
- (void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
- (int)tableView:(id)view accessoryTypeForRowWithIndexPath:(id)indexPath;
- (BOOL)tableView:(id)view canPerformAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
- (void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndDisplayingFooterView:(id)view2 forSection:(int)section;
- (void)tableView:(id)view didEndDisplayingHeaderView:(id)view2 forSection:(int)section;
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didHighlightRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didUnhighlightRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view estimatedHeightForFooterInSection:(int)section;
- (float)tableView:(id)view estimatedHeightForHeaderInSection:(int)section;
- (float)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForFooterInSection:(int)section;
- (float)tableView:(id)view heightForHeaderInSection:(int)section;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view performAction:(SEL)action forRowAtIndexPath:(id)indexPath withSender:(id)sender;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
- (BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
- (BOOL)tableView:(id)view shouldShowMenuForRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
- (id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view viewForFooterInSection:(int)section;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view willDeselectRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view willDisplayFooterView:(id)view2 forSection:(int)section;
- (void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
@end

