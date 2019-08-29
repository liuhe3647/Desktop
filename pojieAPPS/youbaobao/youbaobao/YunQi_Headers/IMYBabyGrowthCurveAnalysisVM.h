//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IMYBabyGrowthCurveAnalysisVM : NSObject
{
    NSArray *_tableViewData;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSArray *tableViewData; // @synthesize tableViewData=_tableViewData;
- (void).cxx_destruct;
- (id)dashYDataWithType:(unsigned long long)arg1 config:(id)arg2;
- (id)dashXDataWithType:(unsigned long long)arg1 config:(id)arg2;
- (void)refreshConfig:(id)arg1 WithType:(unsigned long long)arg2 index:(long long)arg3;
- (id)lineYDataWithType:(unsigned long long)arg1 config:(id)arg2;
- (id)lineXDataWithType:(unsigned long long)arg1 config:(id)arg2 width:(double)arg3;
- (id)defaultChartConfig;
- (id)chartConfigWithRecordType:(unsigned long long)arg1;
- (void)initTableData;
- (id)init;

@end

