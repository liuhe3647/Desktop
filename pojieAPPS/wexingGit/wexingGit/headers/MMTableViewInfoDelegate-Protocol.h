//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class NSIndexPath, WCTableViewCellManager;

@protocol MMTableViewInfoDelegate <NSObject, UIScrollViewDelegate, tableViewDelegate>

@optional
- (void)commitEditingForRowAtIndexPath:(NSIndexPath *)arg1 Cell:(WCTableViewCellManager *)arg2;
- (void)accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1 Cell:(WCTableViewCellManager *)arg2;
@end
