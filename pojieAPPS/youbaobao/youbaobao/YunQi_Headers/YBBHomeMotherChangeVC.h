//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYAdSignal, IMYCaptionView, IMYVideoModel, NSArray, NSString, UITableView, UIView, YBBAdVideoView, YBBHomeBabyGrowModel, YBBHomeMotherChangeModel, YBBHomeMotherVideoCell, YBBHomeWeekChangeBabyCompareCell, YBBHomeWeekChangeBabyImageCell;
@protocol IMYITableViewAdManager;

@interface YBBHomeMotherChangeVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hadPlayedAd;
    _Bool _autoPlay;
    _Bool _isMotherChange;
    _Bool _mbi_isAutoPlay;
    _Bool _bbi_isAutoPlay;
    _Bool _resetPanGestureDirection;
    _Bool _popVertical;
    NSString *_motherChangeStr;
    NSString *_motherChangeShareSubTitle;
    NSString *_babyChangeShareSubTitle;
    long long _index;
    long long _week;
    CDUnknownBlockType _videoDidEnd;
    CDUnknownBlockType _onShowMomChange;
    CDUnknownBlockType _shareActionBlock;
    IMYCaptionView *_captionView;
    UITableView *_tableView;
    NSArray *_mItems;
    YBBHomeMotherChangeModel *_mInfo;
    YBBAdVideoView *_mVideoView;
    id <IMYITableViewAdManager> _mADMgr;
    IMYAdSignal *_mADSignal;
    id _mADModel;
    double _mbi_startTime;
    double _mbi_durationTime;
    UIView *_mSectionHeaderView;
    YBBHomeBabyGrowModel *_bInfo;
    NSString *_bImageURLStringC;
    NSString *_bImageURLStringB;
    YBBHomeMotherVideoCell *_bVideoCell;
    UIView *_bVideoView;
    IMYVideoModel *_bVideoModel;
    double _bbi_startTime;
    UIView *_bSectionHeaderView;
    YBBHomeWeekChangeBabyCompareCell *_bCompareCell;
    YBBHomeWeekChangeBabyImageCell *_bImageCell;
    double _babyChangeHeaderViewHeight;
    UIView *_bVideoV;
    YBBAdVideoView *_babyVideoView;
    YBBAdVideoView *_coverView;
    struct CGRect _bigVideoFrame;
}

@property(nonatomic) struct CGRect bigVideoFrame; // @synthesize bigVideoFrame=_bigVideoFrame;
@property(nonatomic) _Bool popVertical; // @synthesize popVertical=_popVertical;
@property(nonatomic) _Bool resetPanGestureDirection; // @synthesize resetPanGestureDirection=_resetPanGestureDirection;
@property(retain, nonatomic) YBBAdVideoView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) YBBAdVideoView *babyVideoView; // @synthesize babyVideoView=_babyVideoView;
@property(retain, nonatomic) UIView *bVideoV; // @synthesize bVideoV=_bVideoV;
@property(nonatomic) double babyChangeHeaderViewHeight; // @synthesize babyChangeHeaderViewHeight=_babyChangeHeaderViewHeight;
@property(retain, nonatomic) YBBHomeWeekChangeBabyImageCell *bImageCell; // @synthesize bImageCell=_bImageCell;
@property(readonly, nonatomic) YBBHomeWeekChangeBabyCompareCell *bCompareCell; // @synthesize bCompareCell=_bCompareCell;
@property(retain, nonatomic) UIView *bSectionHeaderView; // @synthesize bSectionHeaderView=_bSectionHeaderView;
@property(nonatomic) double bbi_startTime; // @synthesize bbi_startTime=_bbi_startTime;
@property(nonatomic) _Bool bbi_isAutoPlay; // @synthesize bbi_isAutoPlay=_bbi_isAutoPlay;
@property(retain, nonatomic) IMYVideoModel *bVideoModel; // @synthesize bVideoModel=_bVideoModel;
@property(retain, nonatomic) UIView *bVideoView; // @synthesize bVideoView=_bVideoView;
@property(readonly, nonatomic) YBBHomeMotherVideoCell *bVideoCell; // @synthesize bVideoCell=_bVideoCell;
@property(copy, nonatomic) NSString *bImageURLStringB; // @synthesize bImageURLStringB=_bImageURLStringB;
@property(copy, nonatomic) NSString *bImageURLStringC; // @synthesize bImageURLStringC=_bImageURLStringC;
@property(retain, nonatomic) YBBHomeBabyGrowModel *bInfo; // @synthesize bInfo=_bInfo;
@property(retain, nonatomic) UIView *mSectionHeaderView; // @synthesize mSectionHeaderView=_mSectionHeaderView;
@property(nonatomic) double mbi_durationTime; // @synthesize mbi_durationTime=_mbi_durationTime;
@property(nonatomic) double mbi_startTime; // @synthesize mbi_startTime=_mbi_startTime;
@property(nonatomic) _Bool mbi_isAutoPlay; // @synthesize mbi_isAutoPlay=_mbi_isAutoPlay;
@property(retain, nonatomic) id mADModel; // @synthesize mADModel=_mADModel;
@property(retain, nonatomic) IMYAdSignal *mADSignal; // @synthesize mADSignal=_mADSignal;
@property(retain, nonatomic) id <IMYITableViewAdManager> mADMgr; // @synthesize mADMgr=_mADMgr;
@property(readonly, nonatomic) YBBAdVideoView *mVideoView; // @synthesize mVideoView=_mVideoView;
@property(retain, nonatomic) YBBHomeMotherChangeModel *mInfo; // @synthesize mInfo=_mInfo;
@property(retain, nonatomic) NSArray *mItems; // @synthesize mItems=_mItems;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(copy, nonatomic) CDUnknownBlockType shareActionBlock; // @synthesize shareActionBlock=_shareActionBlock;
@property(copy, nonatomic) CDUnknownBlockType onShowMomChange; // @synthesize onShowMomChange=_onShowMomChange;
@property(copy, nonatomic) CDUnknownBlockType videoDidEnd; // @synthesize videoDidEnd=_videoDidEnd;
@property(nonatomic) _Bool isMotherChange; // @synthesize isMotherChange=_isMotherChange;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool hadPlayedAd; // @synthesize hadPlayedAd=_hadPlayedAd;
@property(nonatomic) long long week; // @synthesize week=_week;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *babyChangeShareSubTitle; // @synthesize babyChangeShareSubTitle=_babyChangeShareSubTitle;
@property(retain, nonatomic) NSString *motherChangeShareSubTitle; // @synthesize motherChangeShareSubTitle=_motherChangeShareSubTitle;
@property(retain, nonatomic) NSString *motherChangeStr; // @synthesize motherChangeStr=_motherChangeStr;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bNoBaby;
- (unsigned long long)weeks;
@property(readonly, nonatomic) IMYVideoModel *mVideoModel;
- (void)babyChangeEvent:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTableHeaderWithInfo:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)setupBottomShareView;
- (void)setupTableView;
- (id)s_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)s_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)s_tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)b_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)getHeightWithStr:(id)arg1;
- (double)b_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)b_tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)b_tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)b_tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)b_showWithImageViewIndex:(unsigned long long)arg1;
- (void)pan:(id)arg1;
- (void)closeVideoWindow;
- (void)_b_resetVideoView;
- (id)m_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)m_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)m_tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)m_tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)m_tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_m_requestAdWithHandler:(CDUnknownBlockType)arg1;
- (void)_m_playVideoIfNoADOrNeedsAutoPlayOrWiFiOrAfterAD:(_Bool)arg1;
- (void)_m_configAndPlayContentVideo:(_Bool)arg1;
- (void)checkPauseVideo;
- (void)_m_configAndPlayADVideo:(id)arg1;
- (void)_m_refresh;
- (void)reloadDataWithModel:(id)arg1;
- (void)didDisappearFromPageViewController;
- (void)prepareForReuse;
- (_Bool)enableFullPopGestureRecognizer;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

