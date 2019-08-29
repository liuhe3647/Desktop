//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYBGCLineChartService-Protocol.h"

@class NSString;

@interface IMYBGCLineChartService : NSObject <IMYBGCLineChartService>
{
}

+ (id)textColor;
+ (id)lineColor;
+ (id)dashLineColor;
+ (id)pointBorderColor;
+ (id)pointOutRangeColor;
+ (id)pointNormalColor;
+ (id)getLargeTimesArrayWithRecords:(id)arg1 birtyday:(id)arg2;
+ (id)getMonthFirstYDataWith:(id)arg1 records:(id)arg2 type:(unsigned long long)arg3 index:(long long)arg4;
+ (void)setYAxisNamesWithConfig:(id)arg1;
+ (id)getMonthFirstTimeArrayWithRecords:(id)arg1 birtyday:(id)arg2;
+ (id)getRecent7TimesArrayWithRecords:(id)arg1;
+ (id)largeDashYData:(id)arg1 type:(unsigned long long)arg2;
+ (id)largeDashXData:(id)arg1 config:(id)arg2;
+ (id)largeLineYData:(id)arg1 config:(id)arg2 type:(unsigned long long)arg3;
+ (long long)monthPositionWithDate:(id)arg1 birthday:(id)arg2;
+ (id)largeLineXData:(id)arg1 config:(id)arg2 width:(double)arg3;
+ (id)monthFirstDashYData:(id)arg1 type:(unsigned long long)arg2;
+ (id)monthFirstDashXData:(id)arg1 config:(id)arg2;
+ (void)refreshConfig:(id)arg1 withRecords:(id)arg2 type:(unsigned long long)arg3 index:(long long)arg4;
+ (id)monthFirstLineYData:(id)arg1 config:(id)arg2 type:(unsigned long long)arg3;
+ (id)monthFirstLineXData:(id)arg1 config:(id)arg2 width:(double)arg3 type:(unsigned long long)arg4;
+ (id)recentAreaYData:(id)arg1 config:(id)arg2 type:(unsigned long long)arg3;
+ (id)recentAreaXData:(id)arg1 config:(id)arg2;
+ (void)recentAxisCustomX:(id)arg1 records:(id)arg2 xData:(id)arg3 width:(double)arg4 type:(unsigned long long)arg5;
+ (id)recentLineYData:(id)arg1 config:(id)arg2 type:(unsigned long long)arg3;
+ (id)recentLineXData:(id)arg1 config:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

