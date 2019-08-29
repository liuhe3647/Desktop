//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BVMessageInterceptor, NSMutableDictionary, NSString;

@interface BVQuestionsTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    BVMessageInterceptor *delegate_interceptor;
    BVMessageInterceptor *datasource_interceptor;
    _Bool hasSentScrollEvent;
    _Bool hasSentInViewEvent;
    _Bool hasEnteredView;
    NSMutableDictionary *cellToProductMap;
    NSString *productId;
}

- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)load:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)willMoveToWindow:(id)arg1;
- (void)tryToSendInViewEvent;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

