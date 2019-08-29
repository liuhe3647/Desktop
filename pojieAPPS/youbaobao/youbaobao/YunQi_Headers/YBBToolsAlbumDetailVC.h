//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "CAAnimationDelegate-Protocol.h"

@class IMYPickerView, NSString, UIImageView, UIView, YBBToolsAlbumDetailBottomView, YBBToolsAlbumDetailContentView, YBBToolsAlbumNavigationBar, YBBToolsAlbumPlayerViewModel;

@interface YBBToolsAlbumDetailVC : IMYPublicBaseViewController <CAAnimationDelegate>
{
    _Bool _isSeekingTime;
    _Bool _isAnimation;
    _Bool _animationFinish;
    unsigned long long _sourceFrom;
    YBBToolsAlbumDetailContentView *_contentView;
    YBBToolsAlbumDetailBottomView *_bottomView;
    UIImageView *_blurImageView;
    UIView *_coverView;
    YBBToolsAlbumNavigationBar *_specialNavigationBar;
    IMYPickerView *_timerPickerView;
    YBBToolsAlbumPlayerViewModel *_playerViewModel;
}

@property(nonatomic, getter=isAnimationFinish) _Bool animationFinish; // @synthesize animationFinish=_animationFinish;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) _Bool isSeekingTime; // @synthesize isSeekingTime=_isSeekingTime;
@property(retain, nonatomic) YBBToolsAlbumPlayerViewModel *playerViewModel; // @synthesize playerViewModel=_playerViewModel;
@property(retain, nonatomic) IMYPickerView *timerPickerView; // @synthesize timerPickerView=_timerPickerView;
@property(retain, nonatomic) YBBToolsAlbumNavigationBar *specialNavigationBar; // @synthesize specialNavigationBar=_specialNavigationBar;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) YBBToolsAlbumDetailBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) YBBToolsAlbumDetailContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long sourceFrom; // @synthesize sourceFrom=_sourceFrom;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)setCoverImageWithURLStr:(id)arg1;
- (void)uploadBI;
- (void)setupControls;
- (void)showPickerView;
- (void)feedbackAction;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)layerAnimationOpacityKey;
- (void)hideContentTextLabelAnimation;
- (void)hideContentImageViewAnimation;
- (void)playCenterStatus;
- (void)updateStatus;
- (void)setupData;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)enableFullPopGestureRecognizer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
