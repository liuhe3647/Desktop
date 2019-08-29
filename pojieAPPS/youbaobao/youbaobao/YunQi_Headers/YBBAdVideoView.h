//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYVForeViewDelegate-Protocol.h"
#import "IMYVideoViewDelegate-Protocol.h"

@class IMYVideoModel, IMYVideoView, NSString, YBBAdVideoPlayerView;

@interface YBBAdVideoView : UIView <IMYVideoViewDelegate, IMYVForeViewDelegate>
{
    _Bool _adMode;
    _Bool _scrubbing;
    IMYVideoModel *_model;
    YBBAdVideoPlayerView *_adPlayerView;
    IMYVideoView *_videoView;
    CDUnknownBlockType _playStartBlock;
    CDUnknownBlockType _playPauseBlock;
    CDUnknownBlockType _playEndBlock;
    CDUnknownBlockType _playProgress;
    CDUnknownBlockType _playLoadedDurationBlock;
    CDUnknownBlockType _clickAction;
    CDUnknownBlockType _playUmengBlock;
    CDUnknownBlockType _fullscreenUmengBlock;
    CDUnknownBlockType _loadedDurationBlock;
    CDUnknownBlockType _mobileNetUmengBlock;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) _Bool adMode; // @synthesize adMode=_adMode;
@property(copy, nonatomic) CDUnknownBlockType mobileNetUmengBlock; // @synthesize mobileNetUmengBlock=_mobileNetUmengBlock;
@property(copy, nonatomic, setter=onLoadDuration:) CDUnknownBlockType loadedDurationBlock; // @synthesize loadedDurationBlock=_loadedDurationBlock;
@property(copy, nonatomic) CDUnknownBlockType fullscreenUmengBlock; // @synthesize fullscreenUmengBlock=_fullscreenUmengBlock;
@property(copy, nonatomic) CDUnknownBlockType playUmengBlock; // @synthesize playUmengBlock=_playUmengBlock;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(copy, nonatomic) CDUnknownBlockType playLoadedDurationBlock; // @synthesize playLoadedDurationBlock=_playLoadedDurationBlock;
@property(copy, nonatomic) CDUnknownBlockType playProgress; // @synthesize playProgress=_playProgress;
@property(copy, nonatomic) CDUnknownBlockType playEndBlock; // @synthesize playEndBlock=_playEndBlock;
@property(copy, nonatomic) CDUnknownBlockType playPauseBlock; // @synthesize playPauseBlock=_playPauseBlock;
@property(copy, nonatomic) CDUnknownBlockType playStartBlock; // @synthesize playStartBlock=_playStartBlock;
@property(retain, nonatomic) IMYVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) YBBAdVideoPlayerView *adPlayerView; // @synthesize adPlayerView=_adPlayerView;
- (void).cxx_destruct;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)playerViewAppWillResignActive:(id)arg1;
- (void)playerViewReachabilityDidChange:(id)arg1;
- (void)playerView:(id)arg1 playbackBufferEmpty:(_Bool)arg2;
- (void)playerView:(id)arg1 didPlayFrame:(double)arg2;
- (void)playerView:(id)arg1 didControlByEvent:(long long)arg2;
- (void)playerView:(id)arg1 didChangeStateFrom:(long long)arg2;
- (void)playerView:(id)arg1 didFailWithError:(id)arg2;
- (void)playerViewDidFinishPlaying:(id)arg1;
- (void)playerViewDidStartPlaying:(id)arg1;
- (void)playerView:(id)arg1 durationDidLoad:(id)arg2;
- (void)didLoadDuration:(id)arg1;
- (void)foreViewSignleTapped:(id)arg1;
- (void)foreView:(id)arg1 playButtonTapped:(id)arg2;
- (void)willPlayVideo;
- (void)handlePlayingInCelluarNetworking;
- (void)setLoading:(_Bool)arg1;
- (void)prepareForReuse;
- (void)resetAd;
- (void)pause;
- (void)play;
- (void)stop;
- (_Bool)isLoading;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)setVideoModel:(id)arg1;
- (void)setAdModel:(id)arg1;
- (void)layoutSubviews;
- (void)updateReplayViewCover;
- (id)createAdVideoView;
@property(retain, nonatomic) IMYVideoModel *model; // @synthesize model=_model;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

