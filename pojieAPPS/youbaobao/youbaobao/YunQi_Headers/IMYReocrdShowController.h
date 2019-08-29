//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface IMYReocrdShowController : IMYPublicBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isJumpAnimation;
    _Bool _isNeedRefresh;
    long long _refreshCount;
    _Bool _isLoading;
    UITableView *_tableView;
    NSMutableArray *_models;
    NSMutableArray *_showItems;
    NSMutableDictionary *_cellHeights;
    IMYCaptionView *_captionView;
}

@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) NSMutableDictionary *cellHeights; // @synthesize cellHeights=_cellHeights;
@property(retain, nonatomic) NSMutableArray *showItems; // @synthesize showItems=_showItems;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)godoRecord;
- (void)dealloc;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)emptyDiary:(id)arg1;
- (void)viewDidLoad;
- (void)backButtonClicked:(id)arg1;
- (void)sortShowItems:(id)arg1;
- (void)loadDBData;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)diaryRecordDidChanged;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

