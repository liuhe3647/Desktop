//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYEBJumpManager : NSObject
{
}

+ (void)jumptoPageWithLinkModel:(id)arg1;
+ (_Bool)parserModel:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (void)jumptoPageWithType:(long long)arg1 userInfo:(id)arg2;
+ (void)jumptoPageWithType:(long long)arg1 varString:(id)arg2 varID:(long long)arg3 userInfo:(id)arg4;
+ (void)initialize;
+ (id)instanceNewEBJump;
- (_Bool)imy_shouldJumptoPageWithType:(long long)arg1 currentVC:(id)arg2 params:(id)arg3 map:(id)arg4;

@end

