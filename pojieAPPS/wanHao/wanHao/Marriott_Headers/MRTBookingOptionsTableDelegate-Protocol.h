//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UITableView;

@protocol MRTBookingOptionsTableDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 bookOptionBrandCellWillExpand:(_Bool)arg2;
- (void)tableView:(UITableView *)arg1 didUpdateSelectedBrands:(NSArray *)arg2;
- (void)tableView:(UITableView *)arg1 requestToAddRateCode:(NSString *)arg2 indexPath:(NSIndexPath *)arg3;
@end

