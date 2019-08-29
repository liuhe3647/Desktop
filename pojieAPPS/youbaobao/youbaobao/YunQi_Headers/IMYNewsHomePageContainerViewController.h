//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsTableViewController.h"

@class IMYNewsHomePageViewModel;

@interface IMYNewsHomePageContainerViewController : IMYNewsTableViewController
{
    unsigned long long _userID;
    unsigned long long _type;
    long long _user_type;
    IMYNewsHomePageViewModel *_viewModel;
}

@property(retain, nonatomic) IMYNewsHomePageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long user_type; // @synthesize user_type=_user_type;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)biEventWithActionTypeClick:(_Bool)arg1 itemId:(long long)arg2 utdict:(id)arg3;
- (void)retryAction;
- (void)loadDataAction:(id)arg1;
- (id)cellModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)autoLoadMoreAction;
- (void)prepareData;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

