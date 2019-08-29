//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYMineContentViewModel, NSArray, NSMutableArray, NSString, UITableView, UIView, YBBHomeMessageButton, YQMineFriendVersinonVM, YQMineMainHeadView;
@protocol IMYITableViewAdManager;

@interface YQMineMainViewController : IMYPublicBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isFriendVerTable;
    _Bool _isOpenStatistics;
    YQMineMainHeadView *_mineHeadView;
    UITableView *_mainTableView;
    UIView *_navigationBarView;
    YBBHomeMessageButton *_topMessageButton;
    IMYMineContentViewModel *_viewModel;
    NSArray *_mainTableData;
    NSMutableArray *_statisticsArray;
    YQMineFriendVersinonVM *_friendVerTabVM;
    id <IMYITableViewAdManager> _adManager;
}

@property(nonatomic) _Bool isOpenStatistics; // @synthesize isOpenStatistics=_isOpenStatistics;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(nonatomic) _Bool isFriendVerTable; // @synthesize isFriendVerTable=_isFriendVerTable;
@property(retain, nonatomic) YQMineFriendVersinonVM *friendVerTabVM; // @synthesize friendVerTabVM=_friendVerTabVM;
@property(retain, nonatomic) NSMutableArray *statisticsArray; // @synthesize statisticsArray=_statisticsArray;
@property(retain, nonatomic) NSArray *mainTableData; // @synthesize mainTableData=_mainTableData;
@property(retain, nonatomic) IMYMineContentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YBBHomeMessageButton *topMessageButton; // @synthesize topMessageButton=_topMessageButton;
@property(retain, nonatomic) UIView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) YQMineMainHeadView *mineHeadView; // @synthesize mineHeadView=_mineHeadView;
- (void).cxx_destruct;
- (_Bool)userCamearIVHiddenState;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)selectActionDoWithAssoId:(long long)arg1 title:(id)arg2 withId:(long long)arg3 text:(id)arg4;
- (void)selectActionDo:(id)arg1 assoId:(long long)arg2 title:(id)arg3 withId:(long long)arg4 text:(id)arg5;
- (void)friendVerisonSetting;
- (double)hieghtOfMineCellWithIndexPath:(id)arg1;
- (id)tableviewCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)doublePicTableViewCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)listPicTableViewCellWithModel:(id)arg1 indexPath:(id)arg2;
- (id)contentTableViewCellWithModel:(id)arg1 indexPath:(id)arg2 realIndexPath:(id)arg3 openStatistics:(_Bool)arg4;
- (id)tableViewServer:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableViewLocal:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)userModeChanged;
- (id)localBadgeCountWithAssoid:(unsigned long long)arg1;
- (id)imageForAssoId:(long long)arg1;
- (void)setupUI;
- (void)initData;
- (unsigned long long)revertLocalMode:(int)arg1;
- (void)refreshBannerView;
- (void)requestMineViewData;
- (_Bool)showToolsHasTimeLine;
- (void)friendOrMotherVersionLoginHandle;
- (void)refreshToolsTimeLineRedPoint;
- (void)relaodTableview;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addObservers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

