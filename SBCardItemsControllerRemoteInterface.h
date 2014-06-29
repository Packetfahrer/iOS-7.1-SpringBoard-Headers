/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBCardItemsControllerRemoteInterface <NSObject>
- (void)addCardItems:(id)items forControllerWithIdentifier:(id)identifier;
- (void)cardItemsDidChange:(id)cardItems forControllerWithIdentifier:(id)identifier;
- (void)clearCardItemsForControllerWithIdentifier:(id)identifier;
- (void)getCardItemsForControllerWithIdentifier:(id)identifier withHandler:(id)handler;
- (void)removeCardItems:(id)items forControllerWithIdentifier:(id)identifier;
- (void)setCardItems:(id)items forControllerWithIdentifier:(id)identifier;
@end

