//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CAGradientLayer, NSMutableArray, UILabel, UIView;
@protocol IMYAddScoreViewDelegate;

@interface IMYAddScoreView : UIImageView
{
    float offx;
    float offy;
    _Bool _isAnimationing;
    _Bool _hasTo;
    _Bool _fadeIn;
    _Bool _fadeOut;
    float _nowTo;
    float _nextTo;
    id <IMYAddScoreViewDelegate> _delegate;
    UIView *_boardView;
    CAGradientLayer *_pregress;
    UILabel *_msgLabel;
    UILabel *_scoreLabel;
    NSMutableArray *_starsImgArr;
    struct CGSize _originalSize;
}

+ (id)shareInstance;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(retain, nonatomic) NSMutableArray *starsImgArr; // @synthesize starsImgArr=_starsImgArr;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property _Bool fadeOut; // @synthesize fadeOut=_fadeOut;
@property _Bool fadeIn; // @synthesize fadeIn=_fadeIn;
@property _Bool hasTo; // @synthesize hasTo=_hasTo;
@property _Bool isAnimationing; // @synthesize isAnimationing=_isAnimationing;
@property float nextTo; // @synthesize nextTo=_nextTo;
@property float nowTo; // @synthesize nowTo=_nowTo;
@property(retain, nonatomic) CAGradientLayer *pregress; // @synthesize pregress=_pregress;
@property(nonatomic) __weak UIView *boardView; // @synthesize boardView=_boardView;
@property(nonatomic) __weak id <IMYAddScoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showFullScore:(float)arg1;
- (void)showMessage:(id)arg1 subMes:(id)arg2 fromScore:(float)arg3 toScore:(float)arg4;
- (void)dismiss;
- (void)beginFadeOut;
- (void)finishanimate;
- (void)startFrom:(float)arg1 to:(float)arg2 anim:(_Bool)arg3;
- (void)mes:(id)arg1 sub:(id)arg2;
- (void)addStars;
- (id)initWithImage:(id)arg1;

@end

