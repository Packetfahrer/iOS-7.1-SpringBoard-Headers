/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"

@class UIColor;

@protocol SBWindowContextAppearance <NSObject>
@property(retain, nonatomic) UIColor* backgroundColorWhileHosting;
@property(retain, nonatomic) UIColor* backgroundColorWhileNotHosting;
@property(readonly, assign, nonatomic) CGRect contentFrame;
@property(readonly, assign, nonatomic, getter=isContextHosted) BOOL contextHosted;
@property(readonly, assign, nonatomic, getter=isJailed) BOOL jailed;
@end

