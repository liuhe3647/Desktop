//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSArray, NSMutableArray, NSMutableSet, NSString, UITableView, UIView, YBBHomeKnowledgePageNavView, YBBHomeKnowledgePageVM;
@protocol IMYITableViewAdManager;

@interface YBBHomeKnowledgePageVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _didRequestToken;
    _Bool _haveRequestAD;
    CDUnknownBlockType _scrollViewDidScrollBlock;
    UITableView *_mainTableView;
    YBBHomeKnowledgePageVM *_vm;
    id <IMYITableViewAdManager> _adManager;
    CDUnknownBlockType _stopVidwoBlock;
    IMYCaptionView *_captionView;
    UIView *_toolsView;
    UIView *_hotWordsView;
    YBBHomeKnowledgePageNavView *_navView;
    NSMutableArray *_selectArray;
    NSArray *_videoArray;
    NSMutableSet *_indexPathSet;
}

@property(nonatomic) _Bool haveRequestAD; // @synthesize haveRequestAD=_haveRequestAD;
@property(nonatomic) _Bool didRequestToken; // @synthesize didRequestToken=_didRequestToken;
@property(retain, nonatomic) NSMutableSet *indexPathSet; // @synthesize indexPathSet=_indexPathSet;
@property(retain, nonatomic) NSArray *videoArray; // @synthesize videoArray=_videoArray;
@property(retain, nonatomic) NSMutableArray *selectArray; // @synthesize selectArray=_selectArray;
@property(retain, nonatomic) YBBHomeKnowledgePageNavView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) UIView *hotWordsView; // @synthesize hotWordsView=_hotWordsView;
@property(retain, nonatomic) UIView *toolsView; // @synthesize toolsView=_toolsView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(copy, nonatomic) CDUnknownBlockType stopVidwoBlock; // @synthesize stopVidwoBlock=_stopVidwoBlock;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) YBBHomeKnowledgePageVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
- (void).cxx_destruct;
- (void)requestAD;
- (void)videoAutoPlay:(_Bool)arg1;
- (void)initVideoArray;
- (_Bool)isSelect:(id)arg1;
- (void)backBtnAction;
- (void)reqData:(_Bool)arg1;
- (void)hotWordsAction:(id)arg1;
- (void)topBtnAction:(id)arg1;
- (void)initHotWordsView:(id)arg1;
- (void)initToolsView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableViewLesson:(id)arg1 cellForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (id)tableViewHotWords:(id)arg1 cellForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (id)tableViewTools:(id)arg1 cellForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableViewTips:(id)arg1 cellForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

