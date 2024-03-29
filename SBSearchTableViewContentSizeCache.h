/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont;

__attribute__((visibility("hidden")))
@interface SBSearchTableViewContentSizeCache : XXUnknownSuperclass {
	UIFont* _bodyFont;
	UIFont* _headlineShortFont;
	UIFont* _caption1Font;
	UIFont* _boldCaption1Font;
	UIFont* _footnoteFont;
	UIFont* _subheadFont;
	float _baseHeight;
	float _baseHeightWithSubtitle;
	float _footnoteFontLineHeight;
	float _footnoteFontAscender;
	float _bodyFontLineHeight;
	float _bodyFontAscender;
	float _headlineShortFontLineHeight;
	float _headlineShortFontAscender;
	float _caption1FontLineHeight;
	float _caption1FontAscender;
	float _subheadFontLineHeight;
	float _subheadFontAscender;
	float _emphasizedCaption1FontLineHeight;
	float _emphasizedCaption1FontAscender;
	float _summaryLineHeight;
	float _titleBaseline;
	float _titleBaselineSummary;
	float _subtitleBaseline;
	float _subtitleBaselineSummary;
	float _summaryBaseline;
	float _headerHeight;
	float _headerBaseline;
}
@property(assign, nonatomic) float baseHeight;
@property(assign, nonatomic) float baseHeightWithSubtitle;
@property(retain, nonatomic) UIFont* bodyFont;
@property(assign, nonatomic) float bodyFontAscender;
@property(assign, nonatomic) float bodyFontLineHeight;
@property(retain, nonatomic) UIFont* boldCaption1Font;
@property(retain, nonatomic) UIFont* caption1Font;
@property(assign, nonatomic) float caption1FontAscender;
@property(assign, nonatomic) float caption1FontLineHeight;
@property(assign, nonatomic) float emphasizedCaption1FontAscender;
@property(assign, nonatomic) float emphasizedCaption1FontLineHeight;
@property(retain, nonatomic) UIFont* footnoteFont;
@property(assign, nonatomic) float footnoteFontAscender;
@property(assign, nonatomic) float footnoteFontLineHeight;
@property(assign, nonatomic) float headerBaseline;
@property(assign, nonatomic) float headerHeight;
@property(retain, nonatomic) UIFont* headlineShortFont;
@property(assign, nonatomic) float headlineShortFontAscender;
@property(assign, nonatomic) float headlineShortFontLineHeight;
@property(retain, nonatomic) UIFont* subheadFont;
@property(assign, nonatomic) float subheadFontAscender;
@property(assign, nonatomic) float subheadFontLineHeight;
@property(assign, nonatomic) float subtitleBaseline;
@property(assign, nonatomic) float subtitleBaselineSummary;
@property(assign, nonatomic) float summaryBaseline;
@property(assign, nonatomic) float summaryLineHeight;
@property(assign, nonatomic) float titleBaseline;
@property(assign, nonatomic) float titleBaselineSummary;
+ (id)rowFontWithStyle:(id)style traits:(unsigned)traits;
+ (id)sharedInstance;
- (void)contentSizeDidChange;
- (void)dealloc;
@end

