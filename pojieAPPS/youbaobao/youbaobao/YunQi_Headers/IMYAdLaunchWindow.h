//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "IMYLaunchVideoAdViewDelegate-Protocol.h"
#import "IMYTimerRuningProtocol-Protocol.h"

@class CADisplayLink, IMYBaseLaunchVideoAdView, IMYBrandAdView, NSString, NSURL, UIImage, UIImageView, UILabel, UIView;
@protocol IMYAdvertiserViewEventDelegate, IMYIAdvertiserModel;

@interface IMYAdLaunchWindow : UIWindow <IMYTimerRuningProtocol, IMYLaunchVideoAdViewDelegate>
{
    _Bool _showedRootVC;
    UIImage *_drawImage;
    NSURL *_videoUrl;
    UIView *_renderView;
    unsigned long long _launchType;
    id <IMYIAdvertiserModel> _adModel;
    id <IMYAdvertiserViewEventDelegate> _eventDelegate;
    long long _countDown;
    UIView *_contentView;
    UIImageView *_splashImageView;
    UILabel *_countDownLabel;
    IMYBaseLaunchVideoAdView *_adVideoView;
    IMYBrandAdView *_brandView;
    double _startDownTime;
    CADisplayLink *_downTimer;
}

+ (void)initAdLaunchWindow:(id)arg1 launchType:(unsigned long long)arg2 videoUrl:(id)arg3 image:(id)arg4 renderView:(id)arg5 eventDelegate:(id)arg6;
+ (void)showLaunchAd:(id)arg1 renderView:(id)arg2 eventDelegate:(id)arg3;
+ (void)showLaunchAd:(id)arg1 videoUrl:(id)arg2 eventDelegate:(id)arg3;
+ (void)showLaunchAd:(id)arg1 drawImage:(id)arg2 eventDelegate:(id)arg3;
@property(retain, nonatomic) CADisplayLink *downTimer; // @synthesize downTimer=_downTimer;
@property(nonatomic) double startDownTime; // @synthesize startDownTime=_startDownTime;
@property(retain, nonatomic) IMYBrandAdView *brandView; // @synthesize brandView=_brandView;
@property(retain, nonatomic) IMYBaseLaunchVideoAdView *adVideoView; // @synthesize adVideoView=_adVideoView;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UIImageView *splashImageView; // @synthesize splashImageView=_splashImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property long long countDown; // @synthesize countDown=_countDown;
@property _Bool showedRootVC; // @synthesize showedRootVC=_showedRootVC;
@property(retain, nonatomic) id <IMYAdvertiserViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) id <IMYIAdvertiserModel> adModel; // @synthesize adModel=_adModel;
@property(nonatomic) unsigned long long launchType; // @synthesize launchType=_launchType;
@property(retain, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIImage *drawImage; // @synthesize drawImage=_drawImage;
- (void).cxx_destruct;
- (void)launchVideoPlayerPlayResult:(_Bool)arg1;
- (void)skipAds;
- (void)showRootViewController;
- (void)imy_timerRuning;
- (void)showLaunchWindowAtDelay:(double)arg1;
- (void)initCountDownLabel;
- (void)loadSplash;
- (void)setupBrandView:(id)arg1;
- (void)setupSpreadLabel:(id)arg1;
- (void)setupToastViews:(id)arg1;
- (void)setLaunchRenderView:(id)arg1;
- (void)setLaunchVideo:(id)arg1;
- (void)setLaunchImage:(id)arg1;
- (void)clickAction;
- (void)clickADViewAction;
- (void)initADView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

