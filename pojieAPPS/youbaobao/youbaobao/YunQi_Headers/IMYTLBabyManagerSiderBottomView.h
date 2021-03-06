//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface IMYTLBabyManagerSiderBottomView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showHuCaiPrint;
    long long _status;
    NSString *_hucaiPrintText;
    CDUnknownBlockType _cellDidSelected;
    NSArray *_datas;
    UITableView *_tableview;
}

@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(copy, nonatomic) CDUnknownBlockType cellDidSelected; // @synthesize cellDidSelected=_cellDidSelected;
@property(retain, nonatomic) NSString *hucaiPrintText; // @synthesize hucaiPrintText=_hucaiPrintText;
@property(nonatomic) _Bool showHuCaiPrint; // @synthesize showHuCaiPrint=_showHuCaiPrint;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (double)fitHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupTableview;
- (id)getHuCaiPrintModel;
- (id)getInviteFaimlyModel;
- (id)getCreateBabyModel;
- (id)getInviteCodeModel;
- (id)getScanModel;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

