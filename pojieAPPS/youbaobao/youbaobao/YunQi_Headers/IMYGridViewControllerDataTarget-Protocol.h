//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYAsset, NSMutableArray;

@protocol IMYGridViewControllerDataTarget <NSObject>
- (void)previewAlbumVideo:(IMYAsset *)arg1;
- (void)qpCameraAction;
- (NSMutableArray *)sortAssets:(NSMutableArray *)arg1;
- (_Bool)containsAsset:(IMYAsset *)arg1;
- (_Bool)addAsset:(IMYAsset *)arg1;
- (void)removeAllAsset;
- (void)removeAsset:(IMYAsset *)arg1;
- (long long)assetsCount;
@end

