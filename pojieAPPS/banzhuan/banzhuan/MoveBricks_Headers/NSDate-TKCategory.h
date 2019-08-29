//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TKCategory)
+ (id)rangeOfDatesInMonthGrid:(id)arg1 startOnSunday:(_Bool)arg2;
+ (id)dateInformationDescriptionWithInformation:(struct TKDateInformation)arg1;
+ (id)dateFromDateInformation:(struct TKDateInformation)arg1;
+ (id)dateFromDateInformation:(struct TKDateInformation)arg1 timeZone:(id)arg2;
+ (id)dateWithDatePart:(id)arg1 andTimePart:(id)arg2;
+ (id)lastOfCurrentMonth;
+ (id)lastofMonthDate;
+ (id)month;
+ (id)yesterday;
- (id)previousMonth;
- (id)nextMonth;
- (id)firstOfMonth;
- (struct TKDateInformation)dateInformation;
- (struct TKDateInformation)dateInformationWithTimeZone:(id)arg1;
- (id)yearString;
- (id)monthString;
- (id)dateByAddingHours:(unsigned long long)arg1;
- (id)dateByAddingDays:(unsigned long long)arg1;
- (_Bool)isToday;
- (long long)daysBetweenDate:(id)arg1;
- (int)monthsBetweenDate:(id)arg1;
- (_Bool)isSameDay:(id)arg1;
- (id)monthlessDate;
- (id)timelessDate;
- (int)weekday;
- (id)lastOfMonthDate;
- (id)monthDate;
- (double)timeIntervaISince1970;
@end
