//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAnalyzeBaseChartWrapperImpl.h"

@class IMYAnalyzeLineChartView;

@interface IMYTemperatureChartWrapper : IMYAnalyzeBaseChartWrapperImpl
{
    IMYAnalyzeLineChartView *_chartView;
}

- (void).cxx_destruct;
- (id)fillDataWithStartModel:(id)arg1 endModel:(id)arg2 isVirtual:(_Bool)arg3;
- (id)prepareItemDatas;
- (id)showItemDatasWithPrepareDatas:(id)arg1;
- (void)_startLoading;
- (void)startLoading;
- (id)chartView;

@end

