//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, IMYVideoView, NSIndexPath, NSMutableArray, NSString, NSTimer, UITableView, UIView, YBBToolsAlbumCartoonPlayerView, YBBToolsAlbumCartoonTopView, YBBToolsAlbumPlayGAModel;

@interface YBBToolsAlbumCartoonVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _playingWhenResignActive;
    _Bool _backgroundPlaying;
    NSString *_cartoonIds;
    NSString *_cid;
    YBBToolsAlbumCartoonTopView *_topView;
    UITableView *_tableView;
    UIView *_whiteVideoContainView;
    IMYVideoView *_videoView;
    YBBToolsAlbumCartoonPlayerView *_playerView;
    IMYCaptionView *_captionView;
    NSMutableArray *_albumList;
    long long _currentAlbumIndex;
    NSIndexPath *_selectedIndex;
    NSTimer *_autoFullScreenTimer;
    long long _timingCount;
    YBBToolsAlbumPlayGAModel *_albumPlayGAModel;
    YBBToolsAlbumPlayGAModel *_albumPlayBackgroundGAModel;
}

@property(nonatomic) _Bool backgroundPlaying; // @synthesize backgroundPlaying=_backgroundPlaying;
@property(retain, nonatomic) YBBToolsAlbumPlayGAModel *albumPlayBackgroundGAModel; // @synthesize albumPlayBackgroundGAModel=_albumPlayBackgroundGAModel;
@property(retain, nonatomic) YBBToolsAlbumPlayGAModel *albumPlayGAModel; // @synthesize albumPlayGAModel=_albumPlayGAModel;
@property(nonatomic) long long timingCount; // @synthesize timingCount=_timingCount;
@property(retain, nonatomic) NSTimer *autoFullScreenTimer; // @synthesize autoFullScreenTimer=_autoFullScreenTimer;
@property(nonatomic) _Bool playingWhenResignActive; // @synthesize playingWhenResignActive=_playingWhenResignActive;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) long long currentAlbumIndex; // @synthesize currentAlbumIndex=_currentAlbumIndex;
@property(retain, nonatomic) NSMutableArray *albumList; // @synthesize albumList=_albumList;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) YBBToolsAlbumCartoonPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) IMYVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *whiteVideoContainView; // @synthesize whiteVideoContainView=_whiteVideoContainView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YBBToolsAlbumCartoonTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *cartoonIds; // @synthesize cartoonIds=_cartoonIds;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)initUI;
- (void)requestCartoonDetail;
- (void)audioSessionInactive;
- (void)audioSessionActive;
- (void)remoteControlChangeGA;
- (void)pauseGA;
- (void)endReceivingRemoteControlEvents;
- (void)beginReceivingRemoteControlEvents;
- (void)remotePreviousEvent;
- (void)remoteNextEvent;
- (void)remotePlayEvent;
- (void)remotePauseEvent;
- (void)removeCommandCenterTargets;
- (void)createRemoteCommandCenter;
- (long long)maxAutoEnterFullScreenTime;
- (void)invalidateTimer;
- (void)startTimer;
- (void)pauseTimer;
- (void)updateTimeData;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)uploadCartoonGA;
- (void)uploadCartoonBackgroundGA;
- (void)reloadAlbumList;
- (void)saveCartoonPlayHistory;
- (id)numberPrefix:(id)arg1;
- (void)showOtherControls;
- (void)playEmptyVideo;
- (void)playCartoonVideo;
- (void)backAction;
- (void)previousSeletedIndex;
- (void)playPreviousCartoon;
- (void)nextSeletedIndex;
- (void)playNextCartoon;
- (void)playerView:(id)arg1 didControlByEvent:(long long)arg2;
- (void)playerViewAppDidBecomeActive:(id)arg1;
- (void)playerViewAppWillResignActive:(id)arg1;
- (void)playerView:(id)arg1 didChangeStateFrom:(long long)arg2;
- (void)playerViewDidFinishPlaying:(id)arg1;
- (void)playerView:(id)arg1 durationDidLoad:(id)arg2;
- (void)playerViewWillStartPlaying:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)interruption:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

