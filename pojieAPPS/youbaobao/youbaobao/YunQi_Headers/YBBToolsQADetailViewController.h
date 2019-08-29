//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITableView, UIView, YBBToolsAudioPlayView, YBBToolsBottomBar, YBBToolsBottomItem, YBBToolsQAModel, YBBToolsXRTagListView, YBBToolsZanInfoView;

@interface YBBToolsQADetailViewController : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    _Bool _isLogin;
    _Bool _isShowKeywords;
    CDUnknownBlockType _viewCountChange;
    NSString *_qaId;
    IMYCaptionView *_captionView;
    UIButton *_shareBtn;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_questionView;
    UILabel *_questionContentLabel;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UILabel *_poQuestionDateLabel;
    UIView *_expertsAnswerView;
    UIImageView *_expertsImageView;
    UILabel *_experNameLabel;
    UILabel *_experDetailLabel;
    YBBToolsAudioPlayView *_audioView;
    UILabel *_answerContentLabel;
    UIImageView *_viewImageIcon;
    UILabel *_readCountLabel;
    UIView *_keyWordsView;
    YBBToolsXRTagListView *_hiTagList;
    UIButton *_zanBtn;
    UIButton *_userfulBtn;
    UILabel *_statementLabel;
    YBBToolsZanInfoView *_zanInfoView;
    UITableView *_tableView;
    YBBToolsBottomItem *_collectItem;
    YBBToolsBottomBar *_bottomBar;
    YBBToolsQAModel *_detailModel;
    long long _showFloor;
    unsigned long long _pageTime;
    NSString *_payOrderNo;
}

@property(copy, nonatomic) NSString *payOrderNo; // @synthesize payOrderNo=_payOrderNo;
@property(nonatomic) _Bool isShowKeywords; // @synthesize isShowKeywords=_isShowKeywords;
@property(nonatomic) unsigned long long pageTime; // @synthesize pageTime=_pageTime;
@property(nonatomic) long long showFloor; // @synthesize showFloor=_showFloor;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) YBBToolsQAModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) YBBToolsBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) YBBToolsBottomItem *collectItem; // @synthesize collectItem=_collectItem;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YBBToolsZanInfoView *zanInfoView; // @synthesize zanInfoView=_zanInfoView;
@property(retain, nonatomic) UILabel *statementLabel; // @synthesize statementLabel=_statementLabel;
@property(retain, nonatomic) UIButton *userfulBtn; // @synthesize userfulBtn=_userfulBtn;
@property(retain, nonatomic) UIButton *zanBtn; // @synthesize zanBtn=_zanBtn;
@property(retain, nonatomic) YBBToolsXRTagListView *hiTagList; // @synthesize hiTagList=_hiTagList;
@property(retain, nonatomic) UIView *keyWordsView; // @synthesize keyWordsView=_keyWordsView;
@property(retain, nonatomic) UILabel *readCountLabel; // @synthesize readCountLabel=_readCountLabel;
@property(retain, nonatomic) UIImageView *viewImageIcon; // @synthesize viewImageIcon=_viewImageIcon;
@property(retain, nonatomic) UILabel *answerContentLabel; // @synthesize answerContentLabel=_answerContentLabel;
@property(retain, nonatomic) YBBToolsAudioPlayView *audioView; // @synthesize audioView=_audioView;
@property(retain, nonatomic) UILabel *experDetailLabel; // @synthesize experDetailLabel=_experDetailLabel;
@property(retain, nonatomic) UILabel *experNameLabel; // @synthesize experNameLabel=_experNameLabel;
@property(retain, nonatomic) UIImageView *expertsImageView; // @synthesize expertsImageView=_expertsImageView;
@property(retain, nonatomic) UIView *expertsAnswerView; // @synthesize expertsAnswerView=_expertsAnswerView;
@property(retain, nonatomic) UILabel *poQuestionDateLabel; // @synthesize poQuestionDateLabel=_poQuestionDateLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) UILabel *questionContentLabel; // @synthesize questionContentLabel=_questionContentLabel;
@property(retain, nonatomic) UIView *questionView; // @synthesize questionView=_questionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(copy, nonatomic) NSString *qaId; // @synthesize qaId=_qaId;
@property(copy, nonatomic) CDUnknownBlockType viewCountChange; // @synthesize viewCountChange=_viewCountChange;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)goDoctorInfo;
- (void)keywordClick:(long long)arg1;
- (void)zanAction;
- (void)userfulBtnAction;
- (void)rightBarButtonItemTouchUpInside:(id)arg1;
- (void)requestZanStatus:(id)arg1;
- (void)pay:(unsigned long long)arg1 params:(id)arg2;
- (id)converPoQuestionString:(id)arg1;
- (void)zanQustion:(id)arg1 zan:(id)arg2;
- (void)collectQustion:(id)arg1;
- (void)requestDataWithQAId:(id)arg1 isRefresh:(_Bool)arg2;
- (void)createOrder;
- (void)configAudioView:(id)arg1;
- (void)configUserAvatar:(id)arg1;
- (void)refreshZanInfo:(id)arg1;
- (void)refreshUsefulBtn:(id)arg1;
- (void)configKeywordUI:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

