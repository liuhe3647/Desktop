//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTopicBaseViewController.h"

#import "IMYNewPageVideoViewDelegate-Protocol.h"
#import "IMYVideoViewDelegate-Protocol.h"
#import "TTQTopicRichWithParserViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAEmitterLayer, IMYTouchEXButton, IMYVideoView, NSArray, NSPointerArray, NSString, TTQTopicDetailForumView, TTQTopicDetailInputTipToolView, TTQTopicDetailPublisherTitleView, TTQTopicDetailScreenTipToolView, TTQTopicViewModel, UIView;
@protocol IMYITableViewAdManager;

@interface TTQTopicDetailViewController : TTQTopicBaseViewController <IMYVideoViewDelegate, TTQTopicRichWithParserViewDelegate, UIGestureRecognizerDelegate, IMYNewPageVideoViewDelegate>
{
    unsigned char _sendTCP;
    _Bool _isMute;
    _Bool _isMonitorADUrl;
    _Bool _firstEnterDetail;
    TTQTopicViewModel *_viewModel;
    TTQTopicDetailForumView *_forumView;
    id <IMYITableViewAdManager> _adManager;
    TTQTopicDetailInputTipToolView *_inputTipToolView;
    TTQTopicDetailScreenTipToolView *_screenTipToolView;
    TTQTopicDetailPublisherTitleView *_publisherInfoView;
    UIView *_scrollIndicator;
    NSArray *_segmentModels;
    UIView *_headView;
    long long _lastTimeNetState;
    IMYVideoView *_currentPlayVideoView;
    NSPointerArray *_weakVideoViews;
    CAEmitterLayer *_emitterLayer;
    IMYTouchEXButton *_topRightButton;
    double _bi_startDuration;
    double _bi_endDuration;
    long long _bi_startType;
    long long _bi_endType;
    NSString *_algorithm;
    NSString *_al_source;
    struct CGAffineTransform _transform;
}

@property(nonatomic) _Bool firstEnterDetail; // @synthesize firstEnterDetail=_firstEnterDetail;
@property(copy, nonatomic) NSString *al_source; // @synthesize al_source=_al_source;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) long long bi_endType; // @synthesize bi_endType=_bi_endType;
@property(nonatomic) long long bi_startType; // @synthesize bi_startType=_bi_startType;
@property(nonatomic) double bi_endDuration; // @synthesize bi_endDuration=_bi_endDuration;
@property(nonatomic) double bi_startDuration; // @synthesize bi_startDuration=_bi_startDuration;
@property(retain, nonatomic) IMYTouchEXButton *topRightButton; // @synthesize topRightButton=_topRightButton;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(retain, nonatomic) CAEmitterLayer *emitterLayer; // @synthesize emitterLayer=_emitterLayer;
@property(retain, nonatomic) NSPointerArray *weakVideoViews; // @synthesize weakVideoViews=_weakVideoViews;
@property(retain, nonatomic) IMYVideoView *currentPlayVideoView; // @synthesize currentPlayVideoView=_currentPlayVideoView;
@property(nonatomic) long long lastTimeNetState; // @synthesize lastTimeNetState=_lastTimeNetState;
@property(nonatomic) _Bool isMonitorADUrl; // @synthesize isMonitorADUrl=_isMonitorADUrl;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSArray *segmentModels; // @synthesize segmentModels=_segmentModels;
@property(retain, nonatomic) UIView *scrollIndicator; // @synthesize scrollIndicator=_scrollIndicator;
@property(retain, nonatomic) TTQTopicDetailPublisherTitleView *publisherInfoView; // @synthesize publisherInfoView=_publisherInfoView;
@property(retain, nonatomic) TTQTopicDetailScreenTipToolView *screenTipToolView; // @synthesize screenTipToolView=_screenTipToolView;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) TTQTopicDetailInputTipToolView *inputTipToolView; // @synthesize inputTipToolView=_inputTipToolView;
@property(nonatomic) unsigned char sendTCP; // @synthesize sendTCP=_sendTCP;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) TTQTopicDetailForumView *forumView; // @synthesize forumView=_forumView;
@property(retain, nonatomic) TTQTopicViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)showPlayInCelluarTipsWithVideoView:(id)arg1;
- (id)handleFindVideoToPaly:(id)arg1 visableFactor:(double)arg2 edgeInset:(struct UIEdgeInsets)arg3;
- (void)checkWhichVideoToPlay;
- (id)handleFindVideoToPause:(id)arg1 unvisableFactor:(double)arg2 edgeInset:(struct UIEdgeInsets)arg3;
- (void)checkWhichVideoToPause;
- (void)forceVideoToReplay;
- (void)addVideoViewToCheckList:(id)arg1;
- (_Bool)isArray:(long long)arg1;
- (void)sendTCPMessage:(unsigned char)arg1;
- (void)finishedRequest:(id)arg1;
- (void)requestGoto;
- (void)requestRefresh:(CDUnknownBlockType)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)requestOffsetCache;
- (void)saveOffsetCache:(id)arg1;
- (id)infoForTable;
- (void)followUserAction:(id)arg1;
- (void)longPressAction:(id)arg1;
- (void)doSelectAllCellsInSameSection:(id)arg1 isHighlighted:(_Bool)arg2;
- (void)postPlayCountStatistaics;
- (void)postBiVideoEventWithVideoView:(id)arg1;
- (void)GAEventForPOP:(id)arg1;
- (id)curFirstVisableIndexPath;
- (id)curLastVisableIndexPath;
- (void)monitorADUrl;
- (void)sto_autoPlayVideoCell:(id)arg1 toMute:(_Bool)arg2;
- (void)didAddVideoView:(id)arg1;
- (struct CGRect)attributedLabel:(id)arg1 selectedAreaChangedWithSelectedRects:(id)arg2;
- (void)attributedLabel:(id)arg1 selectorPanGestureDidChangedAtPoint:(struct CGPoint)arg2;
- (void)shutOffGestureRecognizer:(_Bool)arg1;
- (void)m80AttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)m80AttributedLabel:(id)arg1 longedOnLink:(id)arg2;
- (void)inputViewWillResignFirstResponder:(id)arg1 keyboardHeight:(double)arg2 animationDuration:(double)arg3 option:(unsigned long long)arg4;
- (void)inputViewOfTextViewDidChange:(id)arg1;
- (_Bool)inputViewShouldBeginEdit:(id)arg1;
- (void)finishedReplyRequest:(id)arg1 timestamp:(long long)arg2;
- (void)clearEmitterLayer;
- (void)inputViewDidChangeHeight:(id)arg1 changeHeight:(float)arg2;
- (_Bool)isVideoViewInPosition:(struct CGPoint)arg1;
- (_Bool)fullPopGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doHotPriaseWithModel:(id)arg1 andTopicModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doPriaseWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareForDetail;
- (void)setupTopRightButton;
- (void)setupInputViewWhenViewDidAppear;
- (void)setupInputView;
- (void)setupInputToolView;
- (double)offsetTopForHidenNav;
- (void)updateForumView;
- (void)bringScreenTipToolToFront;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setupTableHeader;
- (void)setupTableHeaderWithNil;
- (void)requestAdList;
- (void)checkNeedShowAD;
- (void)updateTopicDetailHeadView;
- (void)updatePublisherInfoView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateScreenTipToolView;
- (void)bringScrollIndicatorToFront;
- (void)setupTableViewForObserver;
- (void)changeCommentFilter:(long long)arg1 orderFilter:(long long)arg2 action:(_Bool)arg3;
- (void)changeOrderFilter:(long long)arg1;
- (void)updateTableViewContentOffsetWith:(id)arg1 lastSegmentModel:(id)arg2;
- (void)updateTableViewToMaxOffset:(_Bool)arg1;
- (void)updateTableViewToFirstOrTopContentWith:(double)arg1;
- (void)updateTableViewToFirstOrTopContent;
- (double)firstSectionHeaderY;
- (long long)orderByFilter:(long long)arg1 commentFilter:(long long)arg2;
- (long long)commentFilter:(long long)arg1;
- (void)setupScreenTipToolView;
- (id)orderTitles;
- (void)subViewInTurn;
- (void)setStatusBarStyle:(long long)arg1;
- (void)updateFooterWithMoreAction:(_Bool)arg1;
- (void)updateStatusBarStyle;
- (void)pauseBackgroundSoundWithError:(id *)arg1;
- (void)playerViewDidTapToPlay:(id)arg1;
- (void)playerView:(id)arg1 didControlByEvent:(long long)arg2 userInfo:(id)arg3;
- (void)playerView:(id)arg1 willChangeToOrientation:(long long)arg2;
- (void)playerViewDidFinishPlaying:(id)arg1;
- (void)playerView:(id)arg1 didChangeStateFrom:(long long)arg2;
- (void)playerView:(id)arg1 willChangeStateTo:(long long)arg2;
- (double)videoHeight;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)presetTableView:(id)arg1 cell:(id)arg2 model:(id)arg3 indexPath:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)forcedToReply;
- (void)delTopic;
- (void)normalNavBar;
- (long long)preferredStatusBarStyle;
- (void)forceScrollToTop;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (_Bool)onlyDefaultEmoticon;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initADManager;
- (void)viewWillLayoutSubviews;
- (_Bool)isWhiteNavigationBar;
- (void)viewDidLoad;
- (void)bindViewModel;
- (id)ga_appendParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

