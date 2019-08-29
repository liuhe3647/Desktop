//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYNewsContentDetailViewDelegate-Protocol.h"
#import "IMYXiaoShiPinPlayViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMYNewsCommentVC, IMYNewsDetailCommentVC, IMYNewsRecommendViewModel, IMYNewsSVRecommendView, IMYNewsXiaoShiPinCommentView, IMYXiaoShiPinPlayView, NSArray, NSMutableArray, NSNumber, NSString, UIImage, UILabel, UIProgressView, UIView;
@protocol IMYNewsXiaoShiPinPlayViewControllerDelegate;

@interface IMYNewsXiaoShiPinPlayViewController : IMYPublicBaseViewController <IMYXiaoShiPinPlayViewDelegate, IMYNewsContentDetailViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _showPlayTips;
    _Bool _needRecommend;
    _Bool _forceRecommend;
    _Bool _show_comment;
    _Bool _showRecommend;
    _Bool _isForVideoPlayHome;
    _Bool _lastVCStatusBarHidden;
    id <IMYNewsXiaoShiPinPlayViewControllerDelegate> _delegate;
    NSMutableArray *_dataSource;
    UIView *_oriView;
    NSArray *_oriRectArr;
    UIImage *_oriImage;
    NSNumber *_selectedIndexNum;
    long long _selectedIndex;
    long long _newsId;
    long long _channel;
    long long _tab_id;
    NSString *_al_source;
    NSString *_algorithm;
    long long _fromPageType;
    long long _fromUserId;
    long long _position;
    long long _recommendStyle;
    double _initTime;
    IMYNewsCommentVC *_commentViewController;
    IMYXiaoShiPinPlayView *_browser;
    IMYNewsDetailCommentVC *_commentDetailViewController;
    UILabel *_reviewCountLabel;
    IMYNewsXiaoShiPinCommentView *_commentView;
    long long _review_count;
    IMYNewsSVRecommendView *_recommendView;
    unsigned long long _gestureDirection;
    UIProgressView *_volumeProgress;
    IMYNewsXiaoShiPinCommentView *_recommendNavView;
    IMYNewsRecommendViewModel *_recommendViewModel;
    struct CGRect _oriRect;
}

@property(retain, nonatomic) IMYNewsRecommendViewModel *recommendViewModel; // @synthesize recommendViewModel=_recommendViewModel;
@property(retain, nonatomic) IMYNewsXiaoShiPinCommentView *recommendNavView; // @synthesize recommendNavView=_recommendNavView;
@property(retain, nonatomic) UIProgressView *volumeProgress; // @synthesize volumeProgress=_volumeProgress;
@property(nonatomic) unsigned long long gestureDirection; // @synthesize gestureDirection=_gestureDirection;
@property(nonatomic) _Bool lastVCStatusBarHidden; // @synthesize lastVCStatusBarHidden=_lastVCStatusBarHidden;
@property(retain, nonatomic) IMYNewsSVRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(nonatomic) long long review_count; // @synthesize review_count=_review_count;
@property(retain, nonatomic) IMYNewsXiaoShiPinCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UILabel *reviewCountLabel; // @synthesize reviewCountLabel=_reviewCountLabel;
@property(retain, nonatomic) IMYNewsDetailCommentVC *commentDetailViewController; // @synthesize commentDetailViewController=_commentDetailViewController;
@property(retain, nonatomic) IMYXiaoShiPinPlayView *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) IMYNewsCommentVC *commentViewController; // @synthesize commentViewController=_commentViewController;
@property(nonatomic) _Bool isForVideoPlayHome; // @synthesize isForVideoPlayHome=_isForVideoPlayHome;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(nonatomic) _Bool showRecommend; // @synthesize showRecommend=_showRecommend;
@property(nonatomic) long long recommendStyle; // @synthesize recommendStyle=_recommendStyle;
@property(nonatomic) _Bool show_comment; // @synthesize show_comment=_show_comment;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long fromUserId; // @synthesize fromUserId=_fromUserId;
@property(nonatomic) long long fromPageType; // @synthesize fromPageType=_fromPageType;
@property(nonatomic) _Bool forceRecommend; // @synthesize forceRecommend=_forceRecommend;
@property(nonatomic) _Bool needRecommend; // @synthesize needRecommend=_needRecommend;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(copy, nonatomic) NSString *al_source; // @synthesize al_source=_al_source;
@property(nonatomic) _Bool showPlayTips; // @synthesize showPlayTips=_showPlayTips;
@property(nonatomic) long long tab_id; // @synthesize tab_id=_tab_id;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSNumber *selectedIndexNum; // @synthesize selectedIndexNum=_selectedIndexNum;
@property(retain, nonatomic) UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(nonatomic) struct CGRect oriRect; // @synthesize oriRect=_oriRect;
@property(retain, nonatomic) NSArray *oriRectArr; // @synthesize oriRectArr=_oriRectArr;
@property(retain, nonatomic) UIView *oriView; // @synthesize oriView=_oriView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IMYNewsXiaoShiPinPlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)loadMoreEnd;
- (void)upAnimationView:(id)arg1;
- (void)animationView:(id)arg1;
- (void)showPraiseTip;
- (void)appWillTerminateActive:(id)arg1;
- (void)appDidEnterBackgroundActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addSystemVolumnMonitor;
- (void)pauseBackgroundSoundWithCategoryRecord;
- (void)pauseBackgroundSoundWithError:(id *)arg1;
- (void)resumeBackgroundSoundWithError:(id *)arg1;
- (void)xiaoshipinRetry;
- (void)scrollToIndex:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)reloadControllerWithModel:(id)arg1;
- (void)initRecommendStyle;
- (void)requestRecommendDataAction:(_Bool)arg1 refresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRecommendDataAction:(_Bool)arg1;
- (void)commitSuccess;
- (void)commitCount:(long long)arg1;
- (void)IMYNewsSuccess:(id)arg1 isAdd:(_Bool)arg2 count:(long long)arg3;
- (void)IMYNewsContenDetailDataDidLoad:(id)arg1;
- (void)showNewsCommentDetailView:(long long)arg1 cellModel:(id)arg2 gotoId:(long long)arg3 referenceName:(id)arg4 showKeyboard:(_Bool)arg5;
- (id)commentTableView;
- (void)showCommentView;
- (void)xiaoshipinShowKeyBoard;
- (void)xiaoshipinShowCommentView;
- (void)xiaoshipinDismissVideoPlayView;
- (void)preparePlayData;
- (void)createBrowserPlayView;
- (void)reloadPalyData;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)statusBarStyle;
- (id)ga_appendParams;
- (double)playerViewHeight;
- (void)panCommentBlockAction:(double)arg1;
- (void)expandVideoView;
- (void)shrinkVideoView;
- (void)handleRecommendViewShowPan:(id)arg1;
- (void)downDismissGesureHandle:(id)arg1;
- (void)rightPopDismiss:(id)arg1;
- (void)pushGestureHanlde:(id)arg1;
- (void)handleGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

