//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYVideoViewDelegate-Protocol.h"

@class IMYVideoModel, IMYVideoView, NSString, NSTimer, PHAsset, YBBHomeLamaTimelineModel;
@protocol YBBLamaHeaderPhotoVideoPlayerDelegate;

@interface YBBLamaHeaderPhotoVideoPlayer : UIView <IMYVideoViewDelegate>
{
    _Bool _lastPauseIsTriggerByResignActive;
    _Bool _isPlaying;
    YBBHomeLamaTimelineModel *_timeline;
    id <YBBLamaHeaderPhotoVideoPlayerDelegate> _delegate;
    IMYVideoView *_playerView;
    IMYVideoModel *_videoModel;
    NSTimer *_timeoutTimer;
    double _oriDurtion;
    PHAsset *_localPhAsset;
}

@property(retain, nonatomic) PHAsset *localPhAsset; // @synthesize localPhAsset=_localPhAsset;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool lastPauseIsTriggerByResignActive; // @synthesize lastPauseIsTriggerByResignActive=_lastPauseIsTriggerByResignActive;
@property(nonatomic) double oriDurtion; // @synthesize oriDurtion=_oriDurtion;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) IMYVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) IMYVideoView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <YBBLamaHeaderPhotoVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YBBHomeLamaTimelineModel *timeline; // @synthesize timeline=_timeline;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clear;
- (void)resume;
- (void)pause;
- (void)play;
- (void)videoLoadTimeoutHandle;
- (void)playerViewAppDidBecomeActive:(id)arg1;
- (void)playerViewAppWillResignActive:(id)arg1;
- (void)playerViewReachabilityDidChange:(id)arg1;
- (void)playerView:(id)arg1 didPlayFrame:(double)arg2;
- (void)playerView:(id)arg1 willChangeStateTo:(long long)arg2;
- (void)playerView:(id)arg1 didFailWithError:(id)arg2;
- (void)playerViewDidFinishPlaying:(id)arg1;
- (void)playerViewDidStartPlaying:(id)arg1;
- (void)playerViewWillStartPlaying:(id)arg1;
- (void)stopTimeoutTimer;
- (void)resetTimeouTimer:(long long)arg1;
- (void)getVideoAVAssetCompletion:(CDUnknownBlockType)arg1;
- (void)loadLocalVideo;
- (void)loadNetVideo;
- (void)setupPlayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

