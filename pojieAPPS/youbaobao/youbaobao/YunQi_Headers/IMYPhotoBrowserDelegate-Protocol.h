//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYPhotoBrowser;

@protocol IMYPhotoBrowserDelegate <NSObject>

@optional
- (void)photoBrowserWillSavePhoto:(IMYPhotoBrowser *)arg1;
- (void)photoBrowser:(IMYPhotoBrowser *)arg1 didFinishedLoad:(unsigned long long)arg2;
- (void)photoBrowserWillHide:(IMYPhotoBrowser *)arg1;
- (void)photoBrowser:(IMYPhotoBrowser *)arg1 didChangedToPageAtIndex:(unsigned long long)arg2;
@end

