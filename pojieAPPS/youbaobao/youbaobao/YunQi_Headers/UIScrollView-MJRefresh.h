//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class MJRefreshFooter, MJRefreshHeader;

@interface UIScrollView (MJRefresh)
- (long long)mj_totalDataCount;
@property(retain, nonatomic) MJRefreshHeader *header;
@property(retain, nonatomic) MJRefreshFooter *footer;
@property(retain, nonatomic) MJRefreshFooter *mj_footer;
@property(retain, nonatomic) MJRefreshHeader *mj_header;
@end

