//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface SYBusinessMessageVC : SYBaseViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _bHiddenBottomView;
    _Bool _loadingPre;
    _Bool _noMore;
    _Bool _passFirst;
    int _notifyType;
    NSString *_youzijieNickName;
    UITableView *_tableView;
    NSMutableArray *_items;
    UIView *_bottomView;
}

@property(nonatomic) _Bool passFirst; // @synthesize passFirst=_passFirst;
@property(nonatomic) _Bool noMore; // @synthesize noMore=_noMore;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool loadingPre; // @synthesize loadingPre=_loadingPre;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int notifyType; // @synthesize notifyType=_notifyType;
@property(nonatomic) _Bool bHiddenBottomView; // @synthesize bHiddenBottomView=_bHiddenBottomView;
@property(retain, nonatomic) NSString *youzijieNickName; // @synthesize youzijieNickName=_youzijieNickName;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)bottomButtonAction:(id)arg1;
- (void)loadPreMessages;
- (void)loadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

