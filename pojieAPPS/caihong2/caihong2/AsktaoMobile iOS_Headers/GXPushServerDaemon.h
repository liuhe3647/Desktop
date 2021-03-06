//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GXLbsManagerDelegate-Protocol.h"

@class GXBackgroundClient, GXPushServer, NSString;

@interface GXPushServerDaemon : NSObject <GXLbsManagerDelegate>
{
    NSString *appId_;
    NSString *appKey_;
    NSString *appSecret_;
    GXPushServer *server_;
    GXBackgroundClient *bgClient_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)sendMessageForPushServer:(id)arg1 andRdid:(id)arg2 andSaveDB:(_Bool)arg3;
- (id)sendLbsPayload:(id)arg1 andAppId:(id)arg2 andOccurError:(id *)arg3;
- (void)didAllClientsUnregistered;
- (_Bool)sendFeedbackMessage:(long long)arg1 taskId:(id)arg2 msgId:(id)arg3;
- (id)appUserSendMessage:(id)arg1 error:(id *)arg2;
- (void)setPushMode:(_Bool)arg1;
- (void)resumePushService;
- (void)stopPushService;
- (void)resumeBgClient;
- (void)shutdownBackgroundClient;
- (void)shutdownServer;
- (void)tryShutdown;
- (void)createBackgroundClient;
- (void)startPushServer;
- (void)startupPushServerWith:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3;
- (void)processSendLbsPayload:(id)arg1;
- (void)nofityFetchDyncConfigSuccess;
- (void)fetchDynamicConfigTask;
- (void)willEnterFroeground;
- (void)sdkDidRegisterClientNotification:(id)arg1;
- (long long)isSocketRunning;
- (id)isJSServerRunning;
- (id)isGXBackgroundServerRunning;
- (_Bool)isGXPushServerRunning;
- (void)dealloc;
- (void)shutdownDaemon;
- (void)loadGDB;
- (void)startup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

