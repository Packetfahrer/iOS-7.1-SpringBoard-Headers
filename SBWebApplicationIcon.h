/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplicationIcon.h"

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBWebApplicationIcon : SBApplicationIcon {
	UIWebClip* _webClip;
}
@property(readonly, retain) UIWebClip* webClip;
- (BOOL)canGenerateImageInBackgroundForFormat:(int)format;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
@end
