//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYGameRawModel, NSDictionary;

@protocol IMYIGameViewEventDelegate <NSObject>
- (void)clickWithModel:(IMYGameRawModel *)arg1 sender:(id)arg2 userInfo:(NSDictionary *)arg3;
- (void)displayWithModel:(IMYGameRawModel *)arg1 sender:(id)arg2 userInfo:(NSDictionary *)arg3;
@end

