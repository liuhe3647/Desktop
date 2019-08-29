//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AGJSExports-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class AGNetworkManager, AGPE, AGTelemetryManager, AtomicInteger32, NSOperationQueue, NSString, NSTimer, NSURLSession;

@interface AGProofProvider : NSObject <NSURLSessionDelegate, AGJSExports>
{
    AGNetworkManager *_networkManager;
    AGTelemetryManager *_telemetryManager;
    NSTimer *_timer;
    NSURLSession *_urlSession;
    AGPE *_myAGPE;
    NSOperationQueue *_fetchURLQueue;
    NSOperationQueue *_collectSensorInfoQueue;
    AtomicInteger32 *_reentryLock;
}

@property(readonly, nonatomic) AtomicInteger32 *reentryLock; // @synthesize reentryLock=_reentryLock;
@property(readonly, nonatomic) NSOperationQueue *collectSensorInfoQueue; // @synthesize collectSensorInfoQueue=_collectSensorInfoQueue;
@property(readonly, nonatomic) NSOperationQueue *fetchURLQueue; // @synthesize fetchURLQueue=_fetchURLQueue;
@property(readonly, nonatomic) AGPE *myAGPE; // @synthesize myAGPE=_myAGPE;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) AGTelemetryManager *telemetryManager; // @synthesize telemetryManager=_telemetryManager;
@property(readonly, nonatomic) __weak AGNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setBundleKeySize:(int)arg1;
- (void)setShuffleSeed:(long long)arg1;
- (void)logStatus:(unsigned short)arg1;
- (void)logError:(unsigned short)arg1 error:(id)arg2;
- (void)logException:(id)arg1 source:(id)arg2;
- (void)postProof:(id)arg1:(id)arg2:(id)arg3:(_Bool)arg4;
- (id)executePoWProblem:(id)arg1;
- (void)fetchProof:(id)arg1;
- (void)startProofSequence:(unsigned short)arg1;
- (void)setStateblock:(id)arg1;
- (void)setTriggerType:(unsigned short)arg1;
- (void)setStatus:(unsigned short)arg1;
- (id)buildRequestBody:(id)arg1 key1:(id)arg2 uuidData:(id)arg3 collectSignal:(_Bool)arg4;
- (void)onTimer;
- (void)startTimer;
- (void)stopTimer;
- (void)onApplicationInactive;
- (void)onApplicationActive;
- (void)activate;
- (void)dealloc;
- (id)config;
- (id)initWithNetworkManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

