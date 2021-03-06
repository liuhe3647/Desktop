//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DACircularProgressView, IMYBGCRecordModel, NSMutableArray, UIImageView, UILabel;

@interface IMYBabyGrowthCurveAnalysisHeaderView : UIView
{
    _Bool _hideHC;
    UIImageView *_arrow;
    IMYBGCRecordModel *_record;
    DACircularProgressView *_circle;
    UILabel *_scoreLabel;
    UILabel *_heightLabel;
    UILabel *_weightLabel;
    UILabel *_headLabel;
    NSMutableArray *_tipsArray;
}

@property(nonatomic) _Bool hideHC; // @synthesize hideHC=_hideHC;
@property(retain, nonatomic) NSMutableArray *tipsArray; // @synthesize tipsArray=_tipsArray;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UILabel *weightLabel; // @synthesize weightLabel=_weightLabel;
@property(retain, nonatomic) UILabel *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) DACircularProgressView *circle; // @synthesize circle=_circle;
@property(nonatomic) IMYBGCRecordModel *record; // @synthesize record=_record;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
- (void).cxx_destruct;
- (double)infoValueWithType:(unsigned long long)arg1;
- (id)titleStringWithType:(unsigned long long)arg1;
- (id)unitStringWithType:(unsigned long long)arg1;
- (void)progressWithPercent:(double)arg1;
- (id)judgeWithValue:(double)arg1 defaultModel:(id)arg2 isBoy:(_Bool)arg3 type:(unsigned long long)arg4;
- (void)label:(id)arg1 appendJudgeString:(id)arg2;
- (void)label:(id)arg1 appendValueString:(id)arg2;
- (double)percentValue;
- (void)setupAccessoryRightArrow;
- (void)setLabelInfo:(id)arg1 type:(unsigned long long)arg2;
- (id)labelWithType:(unsigned long long)arg1;
- (void)setupInfo;
- (void)setupCircleProgress;
- (void)setupUI;
- (id)init;
- (id)initWithRecord:(id)arg1;
- (void)refreshWithRecord:(id)arg1;
- (void)refreshWithRecord:(id)arg1 hideHeadCircumference:(_Bool)arg2;
- (id)tips;

@end

