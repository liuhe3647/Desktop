//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKeyboardAvoidingTableView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;
@protocol UITableViewDataSource, UITableViewDelegate;

@interface IMYTableView : TPKeyboardAvoidingTableView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool isDeallocCalled;
    id <UITableViewDelegate> _realDelegate;
    id <UITableViewDataSource> _realDatasource;
    struct UIEdgeInsets _visibleBoxInsets;
}

@property(nonatomic) struct UIEdgeInsets visibleBoxInsets; // @synthesize visibleBoxInsets=_visibleBoxInsets;
@property(nonatomic) __weak id <UITableViewDataSource> realDatasource; // @synthesize realDatasource=_realDatasource;
@property(nonatomic) __weak id <UITableViewDelegate> realDelegate; // @synthesize realDelegate=_realDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)_initMyself;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

