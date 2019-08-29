//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AlibcNetError, AlibcNetPacket, MtopError, NSError, NSString;

@protocol AlibcMtopAdapter <NSObject>
- (void)setEnvironment:(long long)arg1;
- (void)setTTID:(NSString *)arg1;
- (_Bool)shouldRetry:(NSError *)arg1;
- (AlibcNetError *)proccessMtopError:(MtopError *)arg1;
- (_Bool)performSend:(AlibcNetPacket *)arg1;
- (void)initMtop;
- (void)openSDKSwitchLog:(_Bool)arg1;
@end

