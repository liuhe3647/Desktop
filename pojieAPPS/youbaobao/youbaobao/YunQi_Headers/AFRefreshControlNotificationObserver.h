//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIRefreshControl;

@interface AFRefreshControlNotificationObserver : NSObject
{
    UIRefreshControl *_refreshControl;
}

@property(readonly, nonatomic) __weak UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)af_endRefreshing;
- (void)af_beginRefreshing;
- (void)setRefreshingWithStateOfTask:(id)arg1;
- (id)initWithActivityRefreshControl:(id)arg1;

@end

