/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImageView, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface SBTodayBulletinCell : XXUnknownSuperclass {
	UILabel* _label;
	UIImageView* _iconImageView;
}
@property(copy, nonatomic) NSString* labelText;
@property(assign, nonatomic) CGRect textRect;
+ (id)defaultFont;
+ (id)defaultFontColor;
+ (id)defaultTextAttributes;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setIcon:(id)icon;
@end

