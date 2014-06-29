/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinObserverSectionHeaderView.h"
#import "SpringBoard-Structs.h"

@class UIImageView, SBNotificationCenterSeparatorView, UILabel;

__attribute__((visibility("hidden")))
@interface SBTodayWidgetAndTomorrowSectionHeaderView : SBBulletinObserverSectionHeaderView {
	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	SBNotificationCenterSeparatorView* _separatorView;
}
+ (id)defaultBackgroundColor;
+ (id)defaultFont;
- (id)initWithFrame:(CGRect)frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end
