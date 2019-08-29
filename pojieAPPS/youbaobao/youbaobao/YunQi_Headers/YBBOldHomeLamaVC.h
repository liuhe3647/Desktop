//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBOldHomeBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YBBOldHomeCellActionPerformer-Protocol.h"

@class IMYActionSheet, NSArray, NSMutableDictionary, NSString, YBBOldEducationCell, YBBOldHomeLamaBabyModel, YBBOldHomeLamaPageDataSource;
@protocol IMYITableViewAdManager;

@interface YBBOldHomeLamaVC : YBBOldHomeBaseVC <UITableViewDataSource, UITableViewDelegate, YBBOldHomeCellActionPerformer>
{
    _Bool _requestByUploadPhoto;
    _Bool _isUploadConverPhoto;
    NSArray *_dataList;
    YBBOldHomeLamaBabyModel *_headerData;
    unsigned long long _todayIndex;
    CDUnknownBlockType _fetchURLHandler;
    id <IMYITableViewAdManager> _adManager;
    IMYActionSheet *_actionSheet;
    NSArray *_todayWeeklys;
    NSMutableDictionary *_weeklyDic;
    YBBOldHomeLamaPageDataSource *_dataSource;
    YBBOldEducationCell *_educationCell4_5;
}

@property(nonatomic) _Bool isUploadConverPhoto; // @synthesize isUploadConverPhoto=_isUploadConverPhoto;
@property(retain, nonatomic) YBBOldEducationCell *educationCell4_5; // @synthesize educationCell4_5=_educationCell4_5;
@property(nonatomic) _Bool requestByUploadPhoto; // @synthesize requestByUploadPhoto=_requestByUploadPhoto;
@property(retain, nonatomic) YBBOldHomeLamaPageDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableDictionary *weeklyDic; // @synthesize weeklyDic=_weeklyDic;
@property(retain, nonatomic) NSArray *todayWeeklys; // @synthesize todayWeeklys=_todayWeeklys;
@property(nonatomic) __weak IMYActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(copy, nonatomic) CDUnknownBlockType fetchURLHandler; // @synthesize fetchURLHandler=_fetchURLHandler;
@property(nonatomic) unsigned long long todayIndex; // @synthesize todayIndex=_todayIndex;
@property(retain, nonatomic) YBBOldHomeLamaBabyModel *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)backToToday;
- (void)updateNavButtonsAtIndex:(long long)arg1;
- (void)scrollToLeft:(_Bool)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)lama_pickImage;
- (void)uploadCoverPhoto;
- (void)saveUnloginWeekRemind;
- (id)path;
- (long long)week;
- (void)trackEventWithPlant:(unsigned long long)arg1 code:(unsigned long long)arg2;
- (void)homeCell:(id)arg1 reloadTabelView:(_Bool)arg2 targetHandling:(id)arg3 info:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)prefetchContentDataWithModel:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)uploadTimelinePhotoWithTrackPlant:(unsigned long long)arg1 trackCode:(unsigned long long)arg2 needTrack:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_requestPageDataWithReload:(_Bool)arg1 pageIndex:(long long)arg2 source:(unsigned long long)arg3;
- (void)requestPageDataWithReload:(_Bool)arg1 pageIndex:(long long)arg2 source:(unsigned long long)arg3;
- (void)requestData;
- (void)backTodayWithReload:(_Bool)arg1;
- (void)_scrollToTopAndReloadData;
- (void)scrollToTopAndReloadData;
- (void)biHomepageGAEvent:(long long)arg1;
- (_Bool)isToday;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startWave;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initMainView;
- (void)initDefaultData;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
