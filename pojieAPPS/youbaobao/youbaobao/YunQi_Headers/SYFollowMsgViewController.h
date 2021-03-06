//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYMsgBaseVC.h"

#import "SYMsgVCEditDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSMutableArray, NSString, UIView;

@interface SYFollowMsgViewController : SYMsgBaseVC <UITableViewDelegate, UITableViewDataSource, SYMsgVCEditDelegate>
{
    NSMutableArray *_items;
    UIView *_footerView;
    UIView *_emptyView;
    IMYCaptionView *_caption;
}

@property(retain, nonatomic) IMYCaptionView *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)updateBottomDelBtnState;
- (void)deleteModelWithModel:(id)arg1;
- (void)deleteSelectedMsg;
- (void)delBtnDo;
- (void)selectAllBtnDo;
- (void)selectAllCell:(_Bool)arg1;
- (void)willSwipe:(id)arg1;
- (void)deleteSingleMsg:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateLocal:(id)arg1;
- (void)removeEmptyView;
- (void)bt_goto_add_friend:(id)arg1;
- (void)addEmptyView;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

