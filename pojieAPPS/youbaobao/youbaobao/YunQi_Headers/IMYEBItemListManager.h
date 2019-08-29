//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYEBBaseViewController, IMYEBHomeListModel, IMYEBHomeListUpdateVM, IMYEBHomeSignEntryModel, NSArray, NSMutableArray, NSString, UITableView;
@protocol IMYEBBrandItemListModel;

@interface IMYEBItemListManager : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasNeedTopSpace;
    NSArray<IMYEBBrandItemListModel> *_item_list;
    long long _allItemCount;
    NSString *_showOldItemTitle;
    IMYEBBaseViewController *_viewController;
    UITableView *_tableView;
    IMYEBHomeListUpdateVM *_homeListUpdateVM;
    IMYEBHomeListModel *_homeListModel;
    long long _list_style;
    IMYEBHomeSignEntryModel *_signEntryModel;
    long long _oldItemIndex;
    NSMutableArray *_exposureList;
}

@property(retain, nonatomic) NSMutableArray *exposureList; // @synthesize exposureList=_exposureList;
@property(nonatomic) long long oldItemIndex; // @synthesize oldItemIndex=_oldItemIndex;
@property(nonatomic) _Bool hasNeedTopSpace; // @synthesize hasNeedTopSpace=_hasNeedTopSpace;
@property(retain, nonatomic) IMYEBHomeSignEntryModel *signEntryModel; // @synthesize signEntryModel=_signEntryModel;
@property(nonatomic) long long list_style; // @synthesize list_style=_list_style;
@property(retain, nonatomic) IMYEBHomeListModel *homeListModel; // @synthesize homeListModel=_homeListModel;
@property(retain, nonatomic) IMYEBHomeListUpdateVM *homeListUpdateVM; // @synthesize homeListUpdateVM=_homeListUpdateVM;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak IMYEBBaseViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *showOldItemTitle; // @synthesize showOldItemTitle=_showOldItemTitle;
@property(nonatomic) long long allItemCount; // @synthesize allItemCount=_allItemCount;
@property(retain, nonatomic) NSArray<IMYEBBrandItemListModel> *item_list; // @synthesize item_list=_item_list;
- (void).cxx_destruct;
- (_Bool)haveSignEntry:(id)arg1;
- (void)recordSignEntryTime;
- (_Bool)showSignEntry;
- (long long)getRowWithList:(id)arg1;
- (long long)getTwoItemOldIndex;
- (long long)getOldIndex;
- (id)indexPathForItemID:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)clickTWoCellWithModel:(id)arg1 indexPath:(id)arg2 position:(long long)arg3 type:(id)arg4;
- (void)clickOneCellWithModel:(id)arg1 indexPath:(id)arg2 position:(long long)arg3 type:(id)arg4;
- (id)itemCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)goodCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)itemHeadCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)redEnvelopeCellWithTableView:(id)arg1 identifier:(id)arg2;
- (id)itemUpdateMsgHeadCellWithTableView:(id)arg1 itemListModel:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createSpaceItemListModel;
- (id)insertMessageObjectForItemList:(id)arg1;
- (void)setGoodList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

