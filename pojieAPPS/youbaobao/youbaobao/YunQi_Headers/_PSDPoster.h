//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PSDPoster : NSObject
{
}

+ (void)API_notifyUploadForID:(id)arg1 url:(id)arg2 error:(id)arg3;
+ (void)API_dataWithParameters:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)API_initWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)POST:(id)arg1 headers:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)GET:(id)arg1 headers:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)method:(long long)arg1 path:(id)arg2 headers:(id)arg3 parameters:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (id)remoteHost;

@end

