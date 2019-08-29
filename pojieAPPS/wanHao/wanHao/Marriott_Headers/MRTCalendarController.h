//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSMutableArray, NSString;

@interface MRTCalendarController : NSObject
{
    NSMutableArray *_months;
    NSArray *_daysOfTheWeek;
    NSCalendar *_calendar;
    NSString *_headerDateTemplate;
}

@property(copy, nonatomic) NSString *headerDateTemplate; // @synthesize headerDateTemplate=_headerDateTemplate;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (id)indexPathForDate:(id)arg1;
- (_Bool)containingMonthMatchesIndexPath:(id)arg1;
- (_Bool)containsIndexPath:(id)arg1;
- (id)months;
- (void)calculateWeeks;
- (id)daysOfTheWeek;
- (id)init;

@end

