//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "TTQMovableTableViewDataSource-Protocol.h"
#import "TTQMovableTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, TTQMovableTableView;

@interface TTQPublishRichMovableViewController : IMYPublicBaseViewController <TTQMovableTableViewDelegate, TTQMovableTableViewDataSource, UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _endMovableBlock;
    TTQMovableTableView *_movableTableView;
    NSMutableArray *_movableDataSource;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSMutableArray *movableDataSource; // @synthesize movableDataSource=_movableDataSource;
@property(retain, nonatomic) TTQMovableTableView *movableTableView; // @synthesize movableTableView=_movableTableView;
@property(copy, nonatomic) CDUnknownBlockType endMovableBlock; // @synthesize endMovableBlock=_endMovableBlock;
- (void).cxx_destruct;
- (id)originalSelectedIndexPathIntableView:(id)arg1;
- (void)tableView:(id)arg1 didMoveCellFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 newDataSourceArrayAfterMove:(id)arg2;
- (id)dataSourceArrayInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 endMoveCellAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willMoveCellAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 preparatoryMoveCellAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupMovableTableView;
- (void)longPressedProcessGesture:(id)arg1;
- (void)dealloc;
- (id)modelAtIndexPath:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 selectedIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

