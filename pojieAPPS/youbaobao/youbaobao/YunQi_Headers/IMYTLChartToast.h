//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, IMYLChartToastLineView, NSString, UILabel;

@interface IMYTLChartToast : UIView <UIGestureRecognizerDelegate>
{
    _Bool _showCircleBG;
    UILabel *_lb_mes;
    UILabel *_lb_submes;
    UIView *_circleView;
    CAShapeLayer *_circle_bg;
    CAShapeLayer *_circle;
    CDUnknownBlockType _onTouchUpInsideEvent;
    UIView *_hehe;
    IMYLChartToastLineView *_lineView;
}

@property(retain, nonatomic) IMYLChartToastLineView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIView *hehe; // @synthesize hehe=_hehe;
@property(copy, nonatomic) CDUnknownBlockType onTouchUpInsideEvent; // @synthesize onTouchUpInsideEvent=_onTouchUpInsideEvent;
@property(nonatomic) _Bool showCircleBG; // @synthesize showCircleBG=_showCircleBG;
@property(retain, nonatomic) CAShapeLayer *circle; // @synthesize circle=_circle;
@property(retain, nonatomic) CAShapeLayer *circle_bg; // @synthesize circle_bg=_circle_bg;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UILabel *lb_submes; // @synthesize lb_submes=_lb_submes;
@property(retain, nonatomic) UILabel *lb_mes; // @synthesize lb_mes=_lb_mes;
- (void).cxx_destruct;
- (void)setColorR:(int)arg1 g:(int)arg2 b:(int)arg3;
- (void)setLineHeight:(float)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

