//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, YBBOldHomeDataConfig;

@protocol YBBOldHomeDataManagerProtocol <NSObject>
- (void)parseObjectWithData:(NSDictionary *)arg1 config:(YBBOldHomeDataConfig *)arg2 success:(void (^)(NSArray *, id, YBBOldHomeDataResult *))arg3;
- (_Bool)checkDataValidAndCache:(NSDictionary *)arg1;
@end

