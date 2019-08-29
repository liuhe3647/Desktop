//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsTableViewController.h"

#import "IMYAOPTableViewGetModelProtocol-Protocol.h"
#import "IMYNewsRecommendTTQCellDelegate-Protocol.h"
#import "IMYNewsRootAutoPlayVideoCellDelegate-Protocol.h"
#import "IMYNewsRootCellDelegate-Protocol.h"
#import "IMYNewsRootContainerActionProtocol-Protocol.h"
#import "IMYNewsRootInterestTagsCellDelegate-Protocol.h"
#import "IMYNewsRootShortVideoCellDelegate-Protocol.h"
#import "IMYNewsRootUserRecommendCellDelegate-Protocol.h"
#import "IMYNewsRootVideoCellDelegate-Protocol.h"
#import "IMYRecommendWeiboCellDelegate-Protocol.h"

@class IMYAdSignal, IMYLocationServiceDisableView, IMYNewsForumsHeaderView, IMYNewsRefreshHeader, IMYNewsRootAutoPlayVideoCell, IMYRecommendBaseModel, IMYScrollToTopButton, MASConstraint, NSArray, NSIndexPath, NSMutableArray, NSString, UIButton, UIView;
@protocol IMYIAdManager, IMYITableViewAdManager, IMYNewsRootContainerViewDelegate;

@interface IMYNewsRootContainerViewController : IMYNewsTableViewController <IMYNewsRootCellDelegate, IMYNewsRootUserRecommendCellDelegate, IMYNewsRootVideoCellDelegate, IMYNewsRootInterestTagsCellDelegate, IMYAOPTableViewGetModelProtocol, IMYNewsRootShortVideoCellDelegate, IMYNewsRecommendTTQCellDelegate, IMYRecommendWeiboCellDelegate, IMYNewsRootAutoPlayVideoCellDelegate, IMYNewsRootContainerActionProtocol>
{
    _Bool _videoFeeds;
    _Bool _showMoreChannel;
    _Bool _hideAd;
    _Bool _needShowReadPosition;
    _Bool _viewIsAppeared;
    _Bool _adFirstRequest;
    _Bool _needFirstRequest;
    _Bool _dataRequestFinished;
    _Bool _useNewFeedsStyle;
    _Bool _feedsCacheControl;
    _Bool _currentPlayingVideoEnterFullScreen;
    _Bool _canLoadMoreShortVideo;
    _Bool _hasShareAction;
    _Bool _needRetryRequest;
    _Bool _isMute;
    _Bool _autoPlayInWifi;
    _Bool _videoCanTapPlay;
    _Bool _refreshByHeaderView;
    id <IMYNewsRootContainerViewDelegate> _delegate;
    unsigned long long _newsCategoryId;
    unsigned long long _feedsType;
    long long _imageType;
    long long _ybbType;
    long long _biWeiboEndType;
    NSString *_custom_flag;
    long long _biEntrance;
    IMYRecommendBaseModel *_readPositionModel;
    unsigned long long _selectedCityId;
    unsigned long long _news_time;
    unsigned long long _responseTime;
    UIView *_tableHeaderView;
    IMYLocationServiceDisableView *_locationServiceDisableView;
    IMYNewsRefreshHeader *_headerRefreshView;
    unsigned long long _refreshCount;
    unsigned long long _loadMoreCount;
    unsigned long long _cardUpdateType;
    id <IMYITableViewAdManager> _adManager;
    id <IMYIAdManager> _chapingAd;
    long long _publisherId;
    IMYAdSignal *_videoCurrTimeSignal;
    IMYAdSignal *_videoPauseSignal;
    IMYAdSignal *_videoContinueSignal;
    IMYAdSignal *_videoEndSignal;
    IMYAdSignal *_videoReplaySignal;
    IMYAdSignal *_videoCurrentIndexSignal;
    id _videoLogoAdBlock;
    IMYScrollToTopButton *_scrollTopButton;
    UIView *_containerView;
    MASConstraint *_headerRefreshHeight;
    UIButton *_publishBtn;
    IMYNewsForumsHeaderView *_forumsHeaderView;
    long long _styleType;
    NSArray *_lastRequest;
    NSIndexPath *_currentPlayingVideoIndexPath;
    NSMutableArray *_selectedTagItems;
    unsigned long long _shareNewsId;
    long long _refreshTime;
    IMYNewsRootAutoPlayVideoCell *_currentPlayCell;
}

+ (void)initialize;
@property(nonatomic) _Bool refreshByHeaderView; // @synthesize refreshByHeaderView=_refreshByHeaderView;
@property(nonatomic) _Bool videoCanTapPlay; // @synthesize videoCanTapPlay=_videoCanTapPlay;
@property(nonatomic) _Bool autoPlayInWifi; // @synthesize autoPlayInWifi=_autoPlayInWifi;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) IMYNewsRootAutoPlayVideoCell *currentPlayCell; // @synthesize currentPlayCell=_currentPlayCell;
@property(nonatomic) long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool needRetryRequest; // @synthesize needRetryRequest=_needRetryRequest;
@property(nonatomic) unsigned long long shareNewsId; // @synthesize shareNewsId=_shareNewsId;
@property(nonatomic) _Bool hasShareAction; // @synthesize hasShareAction=_hasShareAction;
@property(nonatomic) _Bool canLoadMoreShortVideo; // @synthesize canLoadMoreShortVideo=_canLoadMoreShortVideo;
@property(retain, nonatomic) NSMutableArray *selectedTagItems; // @synthesize selectedTagItems=_selectedTagItems;
@property(nonatomic) _Bool currentPlayingVideoEnterFullScreen; // @synthesize currentPlayingVideoEnterFullScreen=_currentPlayingVideoEnterFullScreen;
@property(nonatomic) NSIndexPath *currentPlayingVideoIndexPath; // @synthesize currentPlayingVideoIndexPath=_currentPlayingVideoIndexPath;
@property(retain, nonatomic) NSArray *lastRequest; // @synthesize lastRequest=_lastRequest;
@property(nonatomic) _Bool feedsCacheControl; // @synthesize feedsCacheControl=_feedsCacheControl;
@property(nonatomic) long long styleType; // @synthesize styleType=_styleType;
@property(retain, nonatomic) IMYNewsForumsHeaderView *forumsHeaderView; // @synthesize forumsHeaderView=_forumsHeaderView;
@property(retain, nonatomic) UIButton *publishBtn; // @synthesize publishBtn=_publishBtn;
@property(nonatomic) _Bool useNewFeedsStyle; // @synthesize useNewFeedsStyle=_useNewFeedsStyle;
@property(nonatomic) _Bool dataRequestFinished; // @synthesize dataRequestFinished=_dataRequestFinished;
@property(nonatomic) _Bool needFirstRequest; // @synthesize needFirstRequest=_needFirstRequest;
@property(retain, nonatomic) MASConstraint *headerRefreshHeight; // @synthesize headerRefreshHeight=_headerRefreshHeight;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) IMYScrollToTopButton *scrollTopButton; // @synthesize scrollTopButton=_scrollTopButton;
@property(nonatomic) _Bool adFirstRequest; // @synthesize adFirstRequest=_adFirstRequest;
@property(copy, nonatomic) id videoLogoAdBlock; // @synthesize videoLogoAdBlock=_videoLogoAdBlock;
@property(retain, nonatomic) IMYAdSignal *videoCurrentIndexSignal; // @synthesize videoCurrentIndexSignal=_videoCurrentIndexSignal;
@property(retain, nonatomic) IMYAdSignal *videoReplaySignal; // @synthesize videoReplaySignal=_videoReplaySignal;
@property(retain, nonatomic) IMYAdSignal *videoEndSignal; // @synthesize videoEndSignal=_videoEndSignal;
@property(retain, nonatomic) IMYAdSignal *videoContinueSignal; // @synthesize videoContinueSignal=_videoContinueSignal;
@property(retain, nonatomic) IMYAdSignal *videoPauseSignal; // @synthesize videoPauseSignal=_videoPauseSignal;
@property(retain, nonatomic) IMYAdSignal *videoCurrTimeSignal; // @synthesize videoCurrTimeSignal=_videoCurrTimeSignal;
@property(nonatomic) long long publisherId; // @synthesize publisherId=_publisherId;
@property(retain, nonatomic) id <IMYIAdManager> chapingAd; // @synthesize chapingAd=_chapingAd;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(nonatomic) unsigned long long cardUpdateType; // @synthesize cardUpdateType=_cardUpdateType;
@property(nonatomic) unsigned long long loadMoreCount; // @synthesize loadMoreCount=_loadMoreCount;
@property(nonatomic) unsigned long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(retain, nonatomic) IMYNewsRefreshHeader *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) IMYLocationServiceDisableView *locationServiceDisableView; // @synthesize locationServiceDisableView=_locationServiceDisableView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) unsigned long long responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) unsigned long long news_time; // @synthesize news_time=_news_time;
@property(nonatomic) _Bool viewIsAppeared; // @synthesize viewIsAppeared=_viewIsAppeared;
@property(nonatomic) unsigned long long selectedCityId; // @synthesize selectedCityId=_selectedCityId;
@property(retain, nonatomic) IMYRecommendBaseModel *readPositionModel; // @synthesize readPositionModel=_readPositionModel;
@property(nonatomic) _Bool needShowReadPosition; // @synthesize needShowReadPosition=_needShowReadPosition;
@property(nonatomic) long long biEntrance; // @synthesize biEntrance=_biEntrance;
@property(retain, nonatomic) NSString *custom_flag; // @synthesize custom_flag=_custom_flag;
@property(nonatomic) long long biWeiboEndType; // @synthesize biWeiboEndType=_biWeiboEndType;
@property(nonatomic) _Bool hideAd; // @synthesize hideAd=_hideAd;
@property(nonatomic) _Bool showMoreChannel; // @synthesize showMoreChannel=_showMoreChannel;
@property(nonatomic) long long ybbType; // @synthesize ybbType=_ybbType;
@property(nonatomic) _Bool videoFeeds; // @synthesize videoFeeds=_videoFeeds;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) unsigned long long feedsType; // @synthesize feedsType=_feedsType;
@property(nonatomic) unsigned long long newsCategoryId; // @synthesize newsCategoryId=_newsCategoryId;
@property(nonatomic) __weak id <IMYNewsRootContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)IMYNewsXiaoShiPinPlayViewControllerWillDismiss;
- (void)IMYNewsXiaoShiPinPlayViewControllerScrollToIndex:(long long)arg1 loadMoreBack:(CDUnknownBlockType)arg2;
- (void)IMYNewsXiaoShiPinPlayViewControllerScrollToIndex:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)IMYNewsRootShortVideoCell:(id)arg1 ClickedAtTitleWith:(id)arg2;
- (void)IMYNewsRootShortVideoCell:(id)arg1 ScrollToIndex:(long long)arg2;
- (void)IMYNewsRootShortVideoCell:(id)arg1 ClickedAtIndex:(long long)arg2 coverImage:(id)arg3 itemFrame:(struct CGRect)arg4 model:(id)arg5 view:(id)arg6;
- (void)requestShortVideoDataAction:(_Bool)arg1 rootShortVideoCell:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)refreshAction:(_Bool)arg1;
- (void)refreshAction;
- (void)scrollToTop;
- (void)loadCacheAction;
- (void)cacheDataAction;
- (void)uploadSelectedInterestTagsAction:(id)arg1;
- (void)updateInsterestTagsCardDataAction;
- (void)updateCardDataAction;
- (void)checkNeedUpdateCardData;
- (void)cacluateCellHeightWithArray:(id)arg1;
- (id)parseJONSData:(id)arg1;
- (void)requestDataAction:(_Bool)arg1 loadPre:(_Bool)arg2 fromTab:(_Bool)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)reportFloorAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)canShowLine:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)baseCell:(id)arg1;
- (id)newsCell:(id)arg1;
- (id)newsorig_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)shouldReloadWithCell:(id)arg1 forTableView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)cellModel:(id)arg1;
- (id)modelForCell:(id)arg1;
- (id)tableView:(id)arg1 modelForRowAtIndexPath:(id)arg2;
- (void)IMYRecommendWeiboCell:(id)arg1 didClickFollow:(id)arg2;
- (void)IMYRecommendWeiboCellDidClickSeeMore:(id)arg1;
- (void)IMYRecommendWeiboCellDidClickShare:(id)arg1;
- (void)IMYRecommendWeiboCellDidClickComment:(id)arg1;
- (void)IMYRecommendWeiboCell:(id)arg1 didClickPraise:(id)arg2;
- (void)IMYRecommendWeiboCellDidClickFeedBack:(id)arg1;
- (void)IMYRecommendWeiboCellDidClickUser:(id)arg1;
- (void)IMYNewsRecommendTTQCell:(id)arg1 didSelectedCardItemAction:(long long)arg2;
- (void)IMYNewsRecommendTTQCellUnlikeAction:(id)arg1;
- (void)IMYNewsRecommendTTQCellMoreAction:(id)arg1;
- (void)IMYNewsRootInterestTagsCellDidSelectedTagItemsAction:(id)arg1;
- (void)IMYNewsRootInterestTagsCellCloseAction:(id)arg1;
- (void)IMYNewsRootInterestTagsCellNextAction:(id)arg1;
- (void)IMYNewsRootInterestTagsCellChangeAction:(id)arg1;
- (void)IMYNewsRootAutoPlayVideoCellTapToPlay:(id)arg1;
- (void)IMYNewsRootAutoPlayVideoCellShareVideo:(id)arg1;
- (void)IMYNewsRootAutoPlayVideoCellDidFinishPlaying:(id)arg1;
- (void)IMYNewsRootAutoPlayVideoCellPause:(id)arg1;
- (void)IMYNewsRootAutoPlayVideoCellStartPlay:(id)arg1;
- (void)IMYNewsRootAutoPlayVideoCell:(id)arg1 toMute:(_Bool)arg2;
- (void)setupAllAutoPlayViewCellState;
- (void)setupAutoPlayVideoConfig;
- (void)continueAutoplayCurrentVideoCell:(id)arg1;
- (void)continuePlayAfterReloadData;
- (void)autoPlayNextVideoAction:(id)arg1;
- (void)IMYNewsRootVideoCellTapShareAction:(id)arg1 shareType:(unsigned long long)arg2;
- (void)IMYNewsRootVideoCellTapCommentAction:(id)arg1;
- (void)IMYNewsRootVideoCellPlayAction:(id)arg1 isFullScreen:(_Bool)arg2;
- (void)IMYNewsRootVideoCellExitFullScreenAction:(id)arg1 isPlayToEnd:(_Bool)arg2;
- (void)IMYNewsRootVideoCellEnterFullScreenAction:(id)arg1;
- (void)IMYNewsRootVideoCellAutoPlayNextVideoAction:(id)arg1;
- (void)IMYNewsRootUserRecommendCellFollowAction:(id)arg1 index:(unsigned long long)arg2;
- (void)IMYNewsRootUserRecommendCellClickUser:(id)arg1 index:(long long)arg2;
- (void)IMYNewsRootUserRecommendCellMoreAction:(id)arg1;
- (void)IMYNewsRootCellVoteClick:(id)arg1 index:(long long)arg2;
- (void)IMYNewsRootCellTopCommendClick:(id)arg1;
- (void)IMYNewsRootCellDidClickIcon:(id)arg1;
- (void)IMYNewsRootCellDidClickCellBtn:(id)arg1 btn:(id)arg2;
- (void)IMYNewsRootCellShareVideo:(id)arg1;
- (void)GAEventForInformationWithURL:(id)arg1 floor:(long long)arg2 action:(long long)arg3 params:(id)arg4;
- (void)setLastRefreshTime;
- (unsigned long long)lastRefreshTime;
- (void)initChaPingAdmanager:(_Bool)arg1;
- (void)initAdmanager;
- (void)showIndexTTQCardAction:(id)arg1;
- (void)hideIndexTTQCardAction:(id)arg1;
- (void)setupTableHeaderViewWithForums:(id)arg1;
- (void)goLoginWithText:(id)arg1;
- (void)shareNewsAction:(id)arg1 isVideoEnd:(_Bool)arg2;
- (void)modifyUserEage:(id)arg1;
- (void)clickReport:(id)arg1 indexPath:(id)arg2;
- (void)displayReportActionAtIndexPath:(id)arg1 onCell:(id)arg2 onModel:(id)arg3 utdict:(id)arg4;
- (void)displayReportAction:(id)arg1 onCell:(id)arg2 utdict:(id)arg3;
- (void)hiddenShareWeChatViewOfVideoCell;
- (void)stopVideoPlay;
- (void)readCellAtIndex:(id)arg1;
- (void)checkUser:(id)arg1 canFollowOrNot:(CDUnknownBlockType)arg2;
- (void)unlikeCell:(id)arg1;
- (void)setMXScrollViewOffset:(double)arg1 scrollView:(id)arg2;
- (void)setRefreshViwOffset:(double)arg1 scrollView:(id)arg2;
- (void)endRefresh:(_Bool)arg1 count:(unsigned long long)arg2;
- (void)firstRequestRefresh;
- (void)autoLoadMoreAction;
- (_Bool)subjectHeaderShowPadding:(unsigned long long)arg1;
- (_Bool)isLoationServicesEnabled;
- (_Bool)isTaTaQuanCategory;
- (_Bool)isLocalCategory;
- (id)currentCategoryName;
- (void)checkPublishButtonStatus;
- (void)currentMessageAction:(id)arg1;
- (void)prepareData;
- (void)registerTableViewCellClass;
- (void)prepareUI;
- (long long)tableViewStyle;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)ga_appendParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

