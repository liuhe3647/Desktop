//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@class IMYCaptionView, IMYLineView, IMYYoubiUserInfoView, NSMutableArray, RACDisposable, UILabel, UITableView, UIView;

@interface IMYYoubiTableViewVC : IMYPublicBaseViewController
{
    _Bool _isTableViewEnd;
    int _vcType;
    UITableView *_tableView;
    IMYCaptionView *_captionView;
    UIView *_v_tvhead;
    UILabel *_l_left;
    UILabel *_l_middle;
    UILabel *_l_right;
    IMYLineView *_iv_noMoreBottomLine;
    UIView *_v_tvNoMoreBottom;
    UILabel *_l_noMore;
    IMYYoubiUserInfoView *_userInfoView;
    NSMutableArray *_dataList;
    NSMutableArray *_contentModelArray;
    RACDisposable *_youbiRequestOp;
}

+ (void)mobClickWithTitle:(id)arg1;
@property(retain, nonatomic) RACDisposable *youbiRequestOp; // @synthesize youbiRequestOp=_youbiRequestOp;
@property(retain, nonatomic) NSMutableArray *contentModelArray; // @synthesize contentModelArray=_contentModelArray;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) __weak IMYYoubiUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(nonatomic) __weak UILabel *l_noMore; // @synthesize l_noMore=_l_noMore;
@property(retain, nonatomic) UIView *v_tvNoMoreBottom; // @synthesize v_tvNoMoreBottom=_v_tvNoMoreBottom;
@property(nonatomic) __weak IMYLineView *iv_noMoreBottomLine; // @synthesize iv_noMoreBottomLine=_iv_noMoreBottomLine;
@property(nonatomic) __weak UILabel *l_right; // @synthesize l_right=_l_right;
@property(nonatomic) __weak UILabel *l_middle; // @synthesize l_middle=_l_middle;
@property(nonatomic) __weak UILabel *l_left; // @synthesize l_left=_l_left;
@property(nonatomic) __weak UIView *v_tvhead; // @synthesize v_tvhead=_v_tvhead;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int vcType; // @synthesize vcType=_vcType;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pushWithType:(unsigned long long)arg1 withId:(long long)arg2 text:(id)arg3 path:(id)arg4;
- (void)reportBtDo:(id)arg1;
- (void)tableViewTask:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)hieghtOfMineCellWithIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableViewExchange:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableViewDetail:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)doublePicTableViewCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)listPicTableViewCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)contentTableViewCellWithModel:(id)arg1 indexPath:(id)arg2 realIndexPath:(id)arg3;
- (id)tableviewCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)mineTableViewCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)tableViewTask:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)checkTask:(id)arg1;
- (void)refreshFinishFriend:(id)arg1;
- (void)setTableViewBottom:(_Bool)arg1;
- (void)reqMoreYoubiExchangeData;
- (void)reqYoubiExchangeData;
- (void)reqMoreYoubiDetailData;
- (void)reqYoubiDetailData;
- (void)reqYoubiTaskData;
- (void)initCaptionView;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initTextXib;
- (void)viewDidLoad;

@end

