/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIcon.h"


__attribute__((visibility("hidden")))
@interface SBPlaceholderIcon : SBIcon {
	id _nodeIdentifier;
	SBIcon* _icon;
}
@property(readonly, retain) id nodeIdentifier;
+ (id)emptyPlaceholder;
+ (id)grabbedIconPlaceholder;
+ (id)placeholderForIcon:(id)icon;
+ (id)placeholderNodeIdentifierForIcon:(id)icon;
+ (void)setGrabbedIcon:(id)icon;
- (id)_initWithNodeIdentifier:(id)nodeIdentifier icon:(id)icon;
- (id)automationID;
- (void)dealloc;
- (id)generateIconImage:(int)image;
- (BOOL)isEmptyPlaceholder;
- (BOOL)isGrabbedIconPlaceholder;
- (BOOL)isPlaceholder;
- (id)referencedIcon;
- (BOOL)shouldCacheImageForFormat:(int)format;
@end

