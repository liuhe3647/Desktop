//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBHomeHideNavigationViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "YBBGlobalSearchAssociateContainerVCDelegate-Protocol.h"

@class IMYCaptionView, NSArray, NSMutableArray, NSString, RACDisposable, UITableView, YBBHomeGlobalSearchAssociateContainerVC, YBBHomeGlobalSearchTopView;
@protocol IMYITableViewAdManager;

@interface YBBHomeGlobalSearchListVC : YBBHomeHideNavigationViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, YBBGlobalSearchAssociateContainerVCDelegate>
{
    _Bool _homeKeyWordSearch;
    NSString *_searchWord;
    long long _searchWordIndex;
    IMYCaptionView *_captionView;
    UITableView *_tableView;
    YBBHomeGlobalSearchTopView *_searchView;
    NSArray *_groupDatalist;
    NSMutableArray *_searchResultList;
    YBBHomeGlobalSearchAssociateContainerVC *_associateContainerVC;
    NSString *_placeholder;
    RACDisposable *_requestDisposable;
    id <IMYITableViewAdManager> _adManager;
    unsigned long long _lastFailedSearchFromType;
    unsigned long long _lastFaidIndexOfSearchFromType;
    unsigned long long _lastFaidIdOfSearchFromType;
    NSString *_searchKey;
}

@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(nonatomic) unsigned long long lastFaidIdOfSearchFromType; // @synthesize lastFaidIdOfSearchFromType=_lastFaidIdOfSearchFromType;
@property(nonatomic) unsigned long long lastFaidIndexOfSearchFromType; // @synthesize lastFaidIndexOfSearchFromType=_lastFaidIndexOfSearchFromType;
@property(nonatomic) unsigned long long lastFailedSearchFromType; // @synthesize lastFailedSearchFromType=_lastFailedSearchFromType;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(nonatomic) __weak RACDisposable *requestDisposable; // @synthesize requestDisposable=_requestDisposable;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) YBBHomeGlobalSearchAssociateContainerVC *associateContainerVC; // @synthesize associateContainerVC=_associateContainerVC;
@property(retain, nonatomic) NSMutableArray *searchResultList; // @synthesize searchResultList=_searchResultList;
@property(retain, nonatomic) NSArray *groupDatalist; // @synthesize groupDatalist=_groupDatalist;
@property(retain, nonatomic) YBBHomeGlobalSearchTopView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) _Bool homeKeyWordSearch; // @synthesize homeKeyWordSearch=_homeKeyWordSearch;
@property(nonatomic) long long searchWordIndex; // @synthesize searchWordIndex=_searchWordIndex;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
- (void).cxx_destruct;
- (void)trackSearchResultWithKeyword:(id)arg1 searchFromType:(unsigned long long)arg2 indexWithFromType:(unsigned long long)arg3 idWithFromType:(unsigned long long)arg4;
- (void)trackSearchClickWithContentType:(unsigned long long)arg1 andID:(id)arg2 subType:(unsigned long long)arg3 atIndex:(long long)arg4 moreInfo:(id)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)configCell:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)associateContainerVC:(id)arg1 dismiss:(_Bool)arg2;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldTextChange:(id)arg1;
- (void)showAssociateViewWithKeyWord:(id)arg1;
- (void)requestWithKeyword:(id)arg1 searchFromType:(unsigned long long)arg2 indexWithFromType:(unsigned long long)arg3 idWithFromType:(unsigned long long)arg4;
- (void)cancelSearchForbid;
- (void)setupTableView;
- (void)setupSearchBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

