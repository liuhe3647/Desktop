//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIScrollView;

@interface YBBHomeRefreshView : UIView
{
    _Bool _isAnimating;
    _Bool _isMoveAnimating;
    _Bool _willCallBack;
    _Bool _hasPerformCmd;
    _Bool _fromPerformCmd;
    UIView *_refreshImageBox;
    UIImageView *_refreshImageView;
    UIScrollView *_observedScrollview;
    CDUnknownBlockType _refreshHandler;
    double _contentOffsetY;
    double _beginMargin;
    UIView *_maskView;
}

@property _Bool fromPerformCmd; // @synthesize fromPerformCmd=_fromPerformCmd;
@property _Bool hasPerformCmd; // @synthesize hasPerformCmd=_hasPerformCmd;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) double beginMargin; // @synthesize beginMargin=_beginMargin;
@property(nonatomic) double contentOffsetY; // @synthesize contentOffsetY=_contentOffsetY;
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
@property(nonatomic) __weak UIScrollView *observedScrollview; // @synthesize observedScrollview=_observedScrollview;
@property(nonatomic) _Bool willCallBack; // @synthesize willCallBack=_willCallBack;
@property(readonly, nonatomic) _Bool isMoveAnimating; // @synthesize isMoveAnimating=_isMoveAnimating;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIImageView *refreshImageView; // @synthesize refreshImageView=_refreshImageView;
@property(retain, nonatomic) UIView *refreshImageBox; // @synthesize refreshImageBox=_refreshImageBox;
- (void).cxx_destruct;
- (void)stopAnimation:(_Bool)arg1;
- (void)startAnimation:(_Bool)arg1;
- (void)setIsMoveAnimating:(_Bool)arg1;
- (void)setIsAnimating:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(double)arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)initViews;
- (id)init;

@end

