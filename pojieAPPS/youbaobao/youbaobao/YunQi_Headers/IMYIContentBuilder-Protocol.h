//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IMYIContent;

@protocol IMYIContentBuilder <NSObject>
+ (void)buildMessageContent:(id <IMYIContent>)arg1 shareType:(long long)arg2 withSuccess:(void (^)(id))arg3 fail:(void (^)(NSError *))arg4;
@end

