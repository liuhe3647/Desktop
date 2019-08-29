//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLView.h"

@class IMYTLHomeTitleView, IMYTLUnreadMsgView, IMYTouchEXButton, NSTimer, UILabel, UIView;

@interface IMYTLHomeNavView : IMYTLView
{
    _Bool _isActive;
    _Bool _isOldStyle;
    _Bool _isShowBack;
    _Bool _isOp;
    _Bool _lastOp;
    _Bool _didSetupStyle;
    IMYTouchEXButton *_rightButton;
    CDUnknownBlockType _uploadBlock;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _manageBlock;
    UILabel *_titleLabel;
    IMYTLHomeTitleView *_titleView;
    IMYTouchEXButton *_leftButton;
    UIView *_maskView;
    IMYTLUnreadMsgView *_unreadMsgView;
    UIView *_pullDownOpView;
    NSTimer *_guideTimer;
}

@property(retain, nonatomic) NSTimer *guideTimer; // @synthesize guideTimer=_guideTimer;
@property(retain, nonatomic) UIView *pullDownOpView; // @synthesize pullDownOpView=_pullDownOpView;
@property(nonatomic) _Bool didSetupStyle; // @synthesize didSetupStyle=_didSetupStyle;
@property(nonatomic) _Bool lastOp; // @synthesize lastOp=_lastOp;
@property(nonatomic) _Bool isOp; // @synthesize isOp=_isOp;
@property(retain, nonatomic) IMYTLUnreadMsgView *unreadMsgView; // @synthesize unreadMsgView=_unreadMsgView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IMYTouchEXButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) IMYTLHomeTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType manageBlock; // @synthesize manageBlock=_manageBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadBlock; // @synthesize uploadBlock=_uploadBlock;
@property(nonatomic) _Bool isShowBack; // @synthesize isShowBack=_isShowBack;
@property(nonatomic) _Bool isOldStyle; // @synthesize isOldStyle=_isOldStyle;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) IMYTouchEXButton *rightButton; // @synthesize rightButton=_rightButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)checkAndShowGuide;
- (void)updateUnreadMsgCount:(long long)arg1;
- (void)setOp:(_Bool)arg1 animation:(_Bool)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setOp:(_Bool)arg1 animation:(_Bool)arg2;
- (void)addObserverview:(id)arg1;
- (void)didMoveToSuperview;
- (void)updateTitle:(id)arg1;
- (void)closeBabyListView;
- (void)titleViewTapAction;
- (void)setupRightView;
- (void)setupMaskView;
- (void)setupPullDownOpView;
- (void)updateStyle;
- (id)initWithFrame:(struct CGRect)arg1 isOldStyle:(_Bool)arg2 isShowback:(_Bool)arg3;

@end

