//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class LegicHttpsConnectionHandler, NSMutableArray, NSMutableURLRequest, NSOperationQueue, NSString, NSURLConnection;
@protocol TsmConnectionDelegate;

@interface TsmConnection : NSObject <NSURLSessionDelegate>
{
    struct SeConnection *seConnection;
    basic_string_a490aa4c aid;
    NSString *ipAddress;
    NSString *agentId;
    NSURLConnection *theConnection;
    LegicHttpsConnectionHandler *httpsListener;
    long long retriesLeft;
    NSMutableURLRequest *lastUrlRequest;
    _Bool retry;
    _Bool running;
    NSMutableArray *messageQueue;
    struct AdminSessionParams sessionParams;
    NSOperationQueue *queue;
    id <TsmConnectionDelegate> _delegate;
    long long _retries;
}

@property(nonatomic) long long retries; // @synthesize retries=_retries;
@property(nonatomic) __weak id <TsmConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setRetriesLeft:(long long)arg1;
- (void)setRunning:(_Bool)arg1;
- (void)sendAsyncRequest:(id)arg1;
- (void)connectionError:(id)arg1 response:(id)arg2 data:(id)arg3;
- (void)finish;
- (_Bool)checkUrl:(id)arg1;
- (_Bool)checkAid:(id)arg1 AidString:(basic_string_a490aa4c *)arg2;
- (_Bool)checkOutcome:(long long)arg1 response:(id)arg2 data:(id)arg3;
- (void)handleResponse:(id)arg1 data:(id)arg2;
- (void)initiateConnection:(id)arg1;
- (void)addMessageToQueue:(id)arg1;
- (id)initWithSeConnection:(struct SeConnection *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

