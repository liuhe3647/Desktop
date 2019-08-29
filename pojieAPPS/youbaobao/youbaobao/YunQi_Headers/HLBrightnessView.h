//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLVBaseView.h"

@class NSTimer, UIProgressView;

@interface HLBrightnessView : HLVBaseView
{
    _Bool _animating;
    _Bool _waiting;
    UIProgressView *_progressView;
    NSTimer *_timer;
}

+ (void)hideBrightnessView;
+ (void)changeBrightnessWith:(double)arg1;
+ (void)decreseBrightness;
+ (void)increseBrightness;
+ (id)defaultBrightnessView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)hideBrightnessViewImmediately;
- (void)hide;
- (void)timerAction:(id)arg1;
- (void)restartTimer;
- (void)showWith:(double)arg1;
- (void)updateBrightness:(double)arg1;
- (void)sendRequest:(double)arg1;
- (void)layoutForOrientation:(long long)arg1;
- (id)initWithTheme:(id)arg1;

@end

