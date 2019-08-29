//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, IMYButton, NSString, UIButton, UILabel;

@interface IMYAnalyzeBannerView : UIView
{
    UILabel *_resultLabel;
    NSString *_explain;
    CDUnknownBlockType _eventBlock;
    double _originalHeight;
    CAGradientLayer *_bannerLayer;
    double _gradientBottom;
    IMYButton *_questionButton;
    UIButton *_promptButton;
    IMYButton *_promptQuestionButton;
}

+ (id)createSubResultLabel:(struct CGRect)arg1;
+ (id)createSubTitleLabel:(struct CGRect)arg1;
@property(retain, nonatomic) IMYButton *promptQuestionButton; // @synthesize promptQuestionButton=_promptQuestionButton;
@property(retain, nonatomic) UIButton *promptButton; // @synthesize promptButton=_promptButton;
@property(retain, nonatomic) IMYButton *questionButton; // @synthesize questionButton=_questionButton;
@property(nonatomic) double gradientBottom; // @synthesize gradientBottom=_gradientBottom;
@property(retain, nonatomic) CAGradientLayer *bannerLayer; // @synthesize bannerLayer=_bannerLayer;
@property(nonatomic) double originalHeight; // @synthesize originalHeight=_originalHeight;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(copy, nonatomic) NSString *explain; // @synthesize explain=_explain;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
- (void).cxx_destruct;
- (double)noDataTipLabelHight;
- (double)heightWithPrompt:(_Bool)arg1;
- (double)bannerLayerHeightWithPrompt:(_Bool)arg1;
- (void)resetPromptLabel:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)resetPromptTop:(double)arg1;
- (void)resetResultLabel:(id)arg1;
- (void)resetGradientBottom:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

