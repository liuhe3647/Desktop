//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYAnalyzeLineChartPrepareItemData, UIView;

@protocol IMYAnalyzeChartWrapper <NSObject>
@property(copy, nonatomic) CDUnknownBlockType didShowStatusTypes;
@property(copy, nonatomic) CDUnknownBlockType didClickItem;
@property(copy, nonatomic) CDUnknownBlockType didSelectedItem;
@property(nonatomic) _Bool needRefresh;
@property(readonly, nonatomic) UIView *view;
- (id)copy;
- (void)disableShowActionButton;
- (void)refreshView;
- (void)startLoading;
- (void)selectToShowItem:(IMYAnalyzeLineChartPrepareItemData *)arg1;
- (void)scrollToShowItem:(IMYAnalyzeLineChartPrepareItemData *)arg1 animated:(_Bool)arg2;
@end
