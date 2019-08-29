//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQEditDelViewController.h"

#import "TTQCollectHeaderViewDelegate-Protocol.h"

@class IMYActionTab, NSString, TTQMyCollectViewModel, UIViewController;

@interface TTQMyCollectViewController : TTQEditDelViewController <TTQCollectHeaderViewDelegate>
{
    TTQMyCollectViewModel *_viewModel;
    IMYActionTab *_collectTab;
    UIViewController *_favouritsViewController;
    long long _ebIndex;
    long long _historyIndex;
    unsigned long long _pageTime;
}

@property(nonatomic) unsigned long long pageTime; // @synthesize pageTime=_pageTime;
@property(nonatomic) long long historyIndex; // @synthesize historyIndex=_historyIndex;
@property(nonatomic) long long ebIndex; // @synthesize ebIndex=_ebIndex;
@property(retain, nonatomic) UIViewController *favouritsViewController; // @synthesize favouritsViewController=_favouritsViewController;
@property(retain, nonatomic) IMYActionTab *collectTab; // @synthesize collectTab=_collectTab;
@property(retain, nonatomic) TTQMyCollectViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)GAEventForTip:(id)arg1 action:(long long)arg2 floor:(long long)arg3;
- (void)finishedRequest:(id)arg1;
- (void)deleteSelectData:(_Bool)arg1;
- (void)setupNavActionTab;
- (void)collectHeaderViewDidSelect:(id)arg1 atSection:(long long)arg2;
- (_Bool)fullPopGestureRecognizerShouldBegin:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)deleteAllHistoryAction;
- (void)deleteSelectAction;
- (_Bool)hasEditDeleteData;
- (_Bool)shoudShowEBCollectionTab;
- (void)bindViewModel;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

