//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YBBHomeLamaTimelineModel, YBBLamaHeaderPhotoVideoPlayer;

@protocol YBBLamaHeaderPhotoVideoPlayerDelegate <NSObject>
- (void)videoPlayer:(YBBLamaHeaderPhotoVideoPlayer *)arg1 videoLoadTimeOut:(YBBHomeLamaTimelineModel *)arg2;
- (void)videoPlayer:(YBBLamaHeaderPhotoVideoPlayer *)arg1 playError:(YBBHomeLamaTimelineModel *)arg2;
- (void)videoPlayer:(YBBLamaHeaderPhotoVideoPlayer *)arg1 videoDidFinishPlay:(YBBHomeLamaTimelineModel *)arg2;
- (void)videoPlayer:(YBBLamaHeaderPhotoVideoPlayer *)arg1 didPlay:(YBBHomeLamaTimelineModel *)arg2;
@end

