//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYIAnalysisModelPoolFactory-Protocol.h"

@interface IMYAnalysisModelPoolFactory : NSObject <IMYIAnalysisModelPoolFactory>
{
}

+ (id)shareInstance;
- (id)getAnalysisModelPoolWithType:(unsigned long long)arg1 handelBlock:(CDUnknownBlockType)arg2 localFileName:(id)arg3 maxCacheCount:(long long)arg4 maxCacheTimeInterval:(double)arg5;

@end

