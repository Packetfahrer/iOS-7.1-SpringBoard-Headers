/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFileLogger.h"


__attribute__((visibility("hidden")))
@interface SBAppInstallationLogger : SBFileLogger {
	BOOL _enabled;
}
@property(readonly, assign, getter=isEnabled) BOOL enabled;
- (BOOL)includeConsole;
- (id)name;
- (void)reloadFromDefaults;
@end
