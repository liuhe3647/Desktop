//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSArray, NSMutableArray, NSString, UITableView, YBBToolsGCDetailViewModel;

@interface YBBToolsGravidityCheckListVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    long long _timeIndex;
    UITableView *_tableView;
    NSArray *_gcWeekRangeStr;
    NSArray *_gcWeekRangeEnd;
    long long _itemNum;
    NSMutableArray *_listArray;
    NSMutableArray *_listNewArray;
    long long _currentIndex;
    IMYCaptionView *_captionView;
    YBBToolsGCDetailViewModel *_viewModel;
}

@property(retain, nonatomic) YBBToolsGCDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *listNewArray; // @synthesize listNewArray=_listNewArray;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(nonatomic) long long itemNum; // @synthesize itemNum=_itemNum;
@property(retain, nonatomic) NSArray *gcWeekRangeEnd; // @synthesize gcWeekRangeEnd=_gcWeekRangeEnd;
@property(retain, nonatomic) NSArray *gcWeekRangeStr; // @synthesize gcWeekRangeStr=_gcWeekRangeStr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long timeIndex; // @synthesize timeIndex=_timeIndex;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)getMaxOffset:(double)arg1;
- (void)initData;
- (void)setupCaptionView;
- (void)viewWillLayoutSubviews;
- (void)addTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

