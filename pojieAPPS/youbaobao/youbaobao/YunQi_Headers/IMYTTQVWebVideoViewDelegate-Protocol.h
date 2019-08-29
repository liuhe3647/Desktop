//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYTTQVWebVideoView, NSDictionary;

@protocol IMYTTQVWebVideoViewDelegate <NSObject>

@optional
- (void)playerPlayDidStartAnimation:(IMYTTQVWebVideoView *)arg1;
- (void)playerPlayCancleAnimation:(IMYTTQVWebVideoView *)arg1;
- (void)playerPlayNextVideo:(IMYTTQVWebVideoView *)arg1;
- (void)playerViewWillNext:(IMYTTQVWebVideoView *)arg1;
- (void)playerView:(IMYTTQVWebVideoView *)arg1 breakInfo:(NSDictionary *)arg2;
- (void)playerViewPlay3G:(IMYTTQVWebVideoView *)arg1;
- (void)playerView:(IMYTTQVWebVideoView *)arg1 didPlayFrame:(double)arg2;
- (void)playerView:(IMYTTQVWebVideoView *)arg1 changeStateTo:(long long)arg2;
- (NSDictionary *)playerViewWillGetInfo:(IMYTTQVWebVideoView *)arg1;
- (void)playerViewWillToCollect:(IMYTTQVWebVideoView *)arg1;
- (void)playerViewWillToShare:(IMYTTQVWebVideoView *)arg1;
@end

