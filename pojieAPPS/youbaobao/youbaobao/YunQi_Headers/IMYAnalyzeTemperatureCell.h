//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAnalyzeSummaryCell.h"

@class UIImageView;

@interface IMYAnalyzeTemperatureCell : IMYAnalyzeSummaryCell
{
    UIImageView *_statusImageView;
}

@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (void).cxx_destruct;
- (void)reloadDisplay;
- (void)continueHighDays:(long long)arg1 timeString:(id)arg2 status:(long long)arg3;
- (void)initSummaryView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

