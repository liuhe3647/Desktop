//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYAccountCodeService : NSObject
{
}

+ (id)getCodeForType:(long long)arg1 account:(id)arg2 nationCode:(long long)arg3;
+ (void)reqCodeForType:(long long)arg1 account:(id)arg2 nationCode:(long long)arg3 ext:(id)arg4 headers:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)reqCodeForType:(long long)arg1 account:(id)arg2 nationCode:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

