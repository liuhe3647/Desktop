//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYToolsContractionDataModel, IMYToolsFMCountModel, NSDate, UILabel;

@interface YBBToolsFMCountingCell : UITableViewCell
{
    _Bool _cellHeighIs44;
    NSDate *_begingTime;
    long long _fmCount;
    long long _totalCount;
    IMYToolsFMCountModel *_model;
    IMYToolsContractionDataModel *_contractionModel;
    UILabel *_begingTimeLabel;
    UILabel *_fmTimesLable;
    UILabel *_totalTimesLabel;
    UILabel *_topLine;
    UILabel *_bottomLine;
}

@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *totalTimesLabel; // @synthesize totalTimesLabel=_totalTimesLabel;
@property(retain, nonatomic) UILabel *fmTimesLable; // @synthesize fmTimesLable=_fmTimesLable;
@property(retain, nonatomic) UILabel *begingTimeLabel; // @synthesize begingTimeLabel=_begingTimeLabel;
@property(nonatomic) _Bool cellHeighIs44; // @synthesize cellHeighIs44=_cellHeighIs44;
@property(retain, nonatomic) IMYToolsContractionDataModel *contractionModel; // @synthesize contractionModel=_contractionModel;
@property(retain, nonatomic) IMYToolsFMCountModel *model; // @synthesize model=_model;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long fmCount; // @synthesize fmCount=_fmCount;
@property(retain, nonatomic) NSDate *begingTime; // @synthesize begingTime=_begingTime;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showLine:(id)arg1 total:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

