//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@class NSObject, NSString, NSThread;
@protocol OS_dispatch_semaphore;

@interface BLYMainRunloopMonitorManager : BLYAbstractModule
{
    struct __CFRunLoopObserver *_runloopObserver;
    NSThread *_monitorThread;
    _Bool _monitorThreadCanceled;
    double _duration;
    NSString *_runloopTimeoutEvent;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _activity;
    double _runloopTimeoutThreshold;
    long long _runloopCPURatioThreshold;
    long long _runloopReportCountForWiFi;
    long long _runloopReportTrafficForWiFi;
    long long _runloopReportCountForCellular;
    long long _runloopReportTrafficForCellular;
}

+ (id)constructSelector;
+ (id)sharedManager;
@property(nonatomic) long long runloopReportTrafficForCellular; // @synthesize runloopReportTrafficForCellular=_runloopReportTrafficForCellular;
@property(nonatomic) long long runloopReportCountForCellular; // @synthesize runloopReportCountForCellular=_runloopReportCountForCellular;
@property(nonatomic) long long runloopReportTrafficForWiFi; // @synthesize runloopReportTrafficForWiFi=_runloopReportTrafficForWiFi;
@property(nonatomic) long long runloopReportCountForWiFi; // @synthesize runloopReportCountForWiFi=_runloopReportCountForWiFi;
@property(nonatomic) long long runloopCPURatioThreshold; // @synthesize runloopCPURatioThreshold=_runloopCPURatioThreshold;
@property(nonatomic) double runloopTimeoutThreshold; // @synthesize runloopTimeoutThreshold=_runloopTimeoutThreshold;
- (void).cxx_destruct;
- (void)sendPendingData;
- (id)packageModelFromCrashReport:(id)arg1;
- (void)dumpMainThreadCallStackSymbols;
- (void)monitorThreadRun;
- (void)stopMonitorThread;
- (void)startMonitorThread;
- (void)removeRunloopObserver;
- (void)addRunloopObserver;
- (void)stop;
- (void)start;
- (void)updateStrategy:(id)arg1;
- (void)dataManagerNotifyValue:(id)arg1 changedForKey:(id)arg2;
- (id)strategyValueMapKey;
- (id)strategyGetterSelector;
- (_Bool)disableModule;
- (_Bool)enableModule;
- (id)init;

@end
