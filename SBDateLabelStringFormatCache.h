/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFLockScreenDateFormatter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSDateFormatter, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface SBDateLabelStringFormatCache : XXUnknownSuperclass <SBFLockScreenDateFormatter> {
	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSDateFormatter* _relativeDateFormatter;
	NSDateFormatter* _dayOfWeekMonthDayFormatter;
	NSDateFormatter* _timeNoAMPMFormatter;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _timerNumberFormatter;
	NSDateFormatter* _abbreviatedTimerFormatter;
	NSDateFormatter* _alarmSnoozeFormatter;
	NSDate* _timerReferenceDate;
	NSDate* _alarmReferenceDate;
}
+ (void)load;
+ (id)sharedInstance;
- (id)init;
- (BOOL)_shouldShowHoursForTimerDuration:(double)timerDuration;
- (void)dealloc;
- (id)formatAbbreviatedTimerDuration:(double)duration;
- (id)formatAlarmSnoozeDuration:(double)duration;
- (id)formatDateAsAbbreviatedDayMonthStyle:(id)style;
- (id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)timeStyle;
- (id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)time;
- (id)formatDateAsDayMonthYearStyle:(id)style;
- (id)formatDateAsDayOfWeek:(id)week;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)weekMonthDayStyle;
- (id)formatDateAsRelativeDateAndTimeStyle:(id)style;
- (id)formatDateAsRelativeDateStyle:(id)style;
- (id)formatDateAsShortDayMonthWithTimeStyle:(id)timeStyle;
- (id)formatDateAsTimeNoAMPM:(id)ampm;
- (id)formatDateAsTimeStyle:(id)style;
- (id)formatNumberAsDecimal:(id)decimal;
- (id)formatTimerDuration:(double)duration;
- (void)resetFormatters:(id)formatters;
- (void)resetFormattersIfNecessary;
@end

