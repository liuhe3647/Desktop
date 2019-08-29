//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYDayRecordModel, IMYDaySleepRecordModel, NSArray, NSMutableArray, NSString, UITableView;

@interface IMYRecordSleepViewController : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _edit;
    NSArray *_items;
    IMYDayRecordModel *_dayModel;
    CDUnknownBlockType _loveRecordBlock;
    CDUnknownBlockType _recordChangeBlock;
    UITableView *_tableView;
    NSMutableArray *_records;
    IMYDaySleepRecordModel *_record;
}

@property(retain, nonatomic) IMYDaySleepRecordModel *record; // @synthesize record=_record;
@property(nonatomic, getter=isEditing) _Bool edit; // @synthesize edit=_edit;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType recordChangeBlock; // @synthesize recordChangeBlock=_recordChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType loveRecordBlock; // @synthesize loveRecordBlock=_loveRecordBlock;
@property(retain, nonatomic) IMYDayRecordModel *dayModel; // @synthesize dayModel=_dayModel;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)deleteRecord:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sortRecords;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

