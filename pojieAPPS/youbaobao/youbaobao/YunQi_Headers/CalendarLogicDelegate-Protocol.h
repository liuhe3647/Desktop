//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CalendarLogic, NSDate;

@protocol CalendarLogicDelegate

@optional
- (void)calendarLogic:(CalendarLogic *)arg1 monthChangeDirection:(long long)arg2;
- (void)calendarLogic:(CalendarLogic *)arg1 dateSelected:(NSDate *)arg2 distance:(long long)arg3;
@end

