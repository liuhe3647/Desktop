//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YSF_NIMSessionDB;

@interface YSF_NIMStorageManager : NSObject
{
    YSF_NIMSessionDB *_sessionDB;
}

@property(retain, nonatomic) YSF_NIMSessionDB *sessionDB; // @synthesize sessionDB=_sessionDB;
- (void).cxx_destruct;
- (id)queryMessage:(id)arg1 forSession:(id)arg2;
- (id)messagesInSession:(id)arg1 message:(id)arg2 limit:(long long)arg3;
- (void)markAllMessageReadInSession:(id)arg1;
- (void)deleteAllmessages;
- (void)deleteAllmessagesInSession:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)searchMessages:(id)arg1 option:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)saveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessage:(id)arg1 attachment:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessage:(id)arg1 includeAttachment:(_Bool)arg2;
- (id)saveMessages:(id)arg1;
- (id)init;
- (void)ysf_migrateFrom:(id)arg1 sessionIds:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

