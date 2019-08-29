//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CommonVPlayerDelegate-Protocol.h"
#import "IMYURISoloPlayerProtocol-Protocol.h"
#import "IMYVForeViewDelegate-Protocol.h"

@class CommonVPlayer, IMYVForeView, IMYVPlayerView, IMYVideoModel, IMYVideoOptions, LLVideoTrack, NSString;
@protocol IMYVideoViewDelegate;

@interface IMYVideoView : UIView <IMYURISoloPlayerProtocol, IMYVForeViewDelegate, CommonVPlayerDelegate>
{
    _Bool _active;
    _Bool _prefersStatusBarHidden;
    _Bool _playingWhenResignActive;
    IMYVideoModel *_model;
    IMYVideoOptions *_options;
    IMYVPlayerView *_playerView;
    IMYVForeView *_foreView;
    id <IMYVideoViewDelegate> _delegate;
    CommonVPlayer *_player;
    long long _pausedReason;
    double _originalBrightness;
}

+ (id)currentActiveView;
+ (id)getPlayerView;
+ (id)getSingletonPlayer;
+ (void)load;
@property(nonatomic) _Bool playingWhenResignActive; // @synthesize playingWhenResignActive=_playingWhenResignActive;
@property(nonatomic) double originalBrightness; // @synthesize originalBrightness=_originalBrightness;
@property(nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(nonatomic) long long pausedReason; // @synthesize pausedReason=_pausedReason;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) CommonVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMYVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMYVForeView *foreView; // @synthesize foreView=_foreView;
@property(retain, nonatomic) IMYVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) IMYVideoOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) IMYVideoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)playVia:(long long)arg1;
- (void)videoPlayerReachabilityDidChange:(id)arg1;
- (_Bool)shouldVideoPlayer:(id)arg1 changeStateTo:(long long)arg2;
- (_Bool)shouldVideoPlayerStartVideo:(id)arg1;
- (void)videoPlayerAppDidBecomeActive:(id)arg1;
- (void)videoPlayerAppWillResignActive:(id)arg1;
- (void)videoPlayer:(id)arg1 didChangeOrientationFrom:(long long)arg2;
- (void)videoPlayer:(id)arg1 willChangeOrientationTo:(long long)arg2;
- (void)videoPlayer:(id)arg1 playbackLikelyToKeepUp:(_Bool)arg2;
- (void)videoPlayer:(id)arg1 playbackBufferEmpty:(_Bool)arg2;
- (void)videoPlayer:(id)arg1 durationDidLoad:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoPlayerWillContinuePlaying:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 readyForDisplay:(_Bool)arg2;
- (void)videoPlayer:(id)arg1 loadedTimeRanges:(id)arg2;
- (void)videoPlayer:(id)arg1 didPlayFrame:(double)arg2;
- (void)videoPlayerDidStartVideo:(id)arg1;
- (void)videoPlayerWillStartVideo:(id)arg1;
- (void)videoPlayer:(id)arg1 didChangeStateFrom:(long long)arg2;
- (void)videoPlayer:(id)arg1 willChangeStateTo:(long long)arg2;
- (void)videoPlayer:(id)arg1 didControlByEvent:(long long)arg2 userInfo:(id)arg3;
- (void)videoPlayer:(id)arg1 didControlByEvent:(long long)arg2;
- (void)prepareForReuse;
- (void)exitFullScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)enterFullScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)foreViewSignleTapped:(id)arg1;
- (void)foreView:(id)arg1 playButtonTapped:(id)arg2;
@property(readonly, nonatomic) LLVideoTrack *track;
@property(readonly, nonatomic) double currentPlaybackTime;
- (_Bool)isLoading;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)preload;
- (void)_loadStreamURL:(id)arg1 continous:(_Bool)arg2;
- (void)dismiss;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)replay;
- (void)play;
@property(readonly, nonatomic) _Bool isPausedByUser;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(readonly, nonatomic) long long visibleInterfaceOrientation;
- (void)deactivate;
- (void)activate;
- (void)setupSoloPlayerObserver;
- (id)initWithModel:(id)arg1 options:(id)arg2 playerView:(id)arg3;
- (id)initWithModel:(id)arg1 options:(id)arg2;
- (id)init;
- (void)dealloc;
@property(nonatomic) unsigned long long videoType;
- (_Bool)outterVideoIsPauseByUser;
- (id)outterVideoView;
- (void)pauseByOutterVideoView;
- (void)playByOutterVideoView;
- (void)replayByOutterVideoView;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (id)solo_info;
- (long long)solo_type;
- (_Bool)solo_playing;
- (void)stopPlayCountdownAnimation;
- (void)startPlayCountdownAnimation;
@property(readonly, nonatomic) _Bool isPlayCountdownAnimating;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

