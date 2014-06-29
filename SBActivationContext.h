/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSHashTable, NSMapTable;

__attribute__((visibility("hidden")))
@interface SBActivationContext : XXUnknownSuperclass <NSCopying> {
	NSMapTable* _displayValues;
	NSMapTable* _activationValues;
	NSMapTable* _deactivationValues;
	NSHashTable* _displayFlags;
	NSHashTable* _activationFlags;
	NSHashTable* _deactivationFlags;
}
@property(copy, nonatomic) NSHashTable* activationFlags;
@property(copy, nonatomic) NSMapTable* activationValues;
@property(copy, nonatomic) NSHashTable* deactivationFlags;
@property(copy, nonatomic) NSMapTable* deactivationValues;
@property(copy, nonatomic) NSHashTable* displayFlags;
@property(copy, nonatomic) NSMapTable* displayValues;
+ (id)_descriptionForFlags:(id)flags values:(id)values withNameForSettingFunction:(/*function-pointer*/ void*)settingFunction;
+ (id)contextFromDisplay:(id)display;
+ (id)descriptionForActivationFlags:(id)activationFlags values:(id)values;
+ (id)descriptionForDeactivationFlags:(id)deactivationFlags values:(id)values;
+ (id)descriptionForDisplayFlags:(id)displayFlags values:(id)values;
+ (id)newFlagTable;
+ (id)newValueTable;
- (id)initWithDisplay:(id)display;
- (BOOL)activationFlag:(unsigned)flag;
- (id)activationValue:(unsigned)value;
- (void)applyActivationSettingsToDisplay:(id)display;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (id)copyWithZone:(NSZone*)zone;
- (BOOL)deactivationFlag:(unsigned)flag;
- (id)deactivationValue:(unsigned)value;
- (void)dealloc;
- (id)description;
- (BOOL)displayFlag:(unsigned)flag;
- (id)displayValue:(unsigned)value;
- (BOOL)isEqual:(id)equal;
- (void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setActivationSetting:(unsigned)setting value:(id)value;
- (void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDeactivationSetting:(unsigned)setting value:(id)value;
@end

