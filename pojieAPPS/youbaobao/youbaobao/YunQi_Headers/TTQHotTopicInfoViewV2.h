//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYRM80AttributedLabelDelegate-Protocol.h"
#import "TTQHotTopicInfoViewProtocol-Protocol.h"

@class IMYActionTab, IMYRM80AttributedLabel, NSString, TTQHotTopicInfoModel, UIImageView, UILabel, UIVisualEffectView;

@interface TTQHotTopicInfoViewV2 : UIView <IMYRM80AttributedLabelDelegate, TTQHotTopicInfoViewProtocol>
{
    double _curOriHeight;
    double _oriIconBottomOffsetY;
    UIView *_bgEffectBgView;
    UIView *_infoView;
    IMYRM80AttributedLabel *_introductionM80Label;
    UILabel *_detailLabel;
    IMYActionTab *_menuActionTab;
    UIVisualEffectView *_bgEffectView;
    UIImageView *_bgImgView;
    NSString *_introduction;
    double _oriHeight;
    double _unflodHeight;
    CDUnknownBlockType _frameChangeBlock;
    TTQHotTopicInfoModel *_hotInfo;
}

@property(retain, nonatomic) TTQHotTopicInfoModel *hotInfo; // @synthesize hotInfo=_hotInfo;
@property(copy, nonatomic) CDUnknownBlockType frameChangeBlock; // @synthesize frameChangeBlock=_frameChangeBlock;
@property(nonatomic) double unflodHeight; // @synthesize unflodHeight=_unflodHeight;
@property(nonatomic) double oriHeight; // @synthesize oriHeight=_oriHeight;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIVisualEffectView *bgEffectView; // @synthesize bgEffectView=_bgEffectView;
@property(retain, nonatomic) IMYActionTab *menuActionTab; // @synthesize menuActionTab=_menuActionTab;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) IMYRM80AttributedLabel *introductionM80Label; // @synthesize introductionM80Label=_introductionM80Label;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *bgEffectBgView; // @synthesize bgEffectBgView=_bgEffectBgView;
@property(nonatomic) double oriIconBottomOffsetY; // @synthesize oriIconBottomOffsetY=_oriIconBottomOffsetY;
@property(nonatomic) double curOriHeight; // @synthesize curOriHeight=_curOriHeight;
- (void).cxx_destruct;
- (void)m80AttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)setIconImgView:(id)arg1 iconUrl:(id)arg2;
- (void)setupInfoView:(id)arg1;
- (id)adTruncationAttributedStringWithString:(id)arg1;
- (id)adTruncationDotAttributedStringWithString:(id)arg1;
- (long long)lineCountWithText:(id)arg1 trancation:(id)arg2;
- (void)setupIntroductionView:(id)arg1;
- (void)setupActionView:(id)arg1 andAction:(CDUnknownBlockType)arg2;
- (void)setupEffectView:(id)arg1;
- (double)updateOriFrame;
- (void)remarkConstraints;
- (void)updateWith:(id)arg1 andAction:(CDUnknownBlockType)arg2 cardAction:(CDUnknownBlockType)arg3;
- (void)setupWith:(id)arg1 andAction:(CDUnknownBlockType)arg2 cardAction:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double actionHeight;
@property(nonatomic) long long currentIndex;
- (id)initWithHotInfo:(id)arg1 andAction:(CDUnknownBlockType)arg2 cardAction:(CDUnknownBlockType)arg3 andFrameChange:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andHotInfo:(id)arg2 andAction:(CDUnknownBlockType)arg3 cardAction:(CDUnknownBlockType)arg4 andFrameChange:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

