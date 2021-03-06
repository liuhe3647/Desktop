//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSRunLoop, NSString, NSThread, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CRWatchdogTimer : NSObject
{
    _Bool _usesDefaults;
    _Bool _isInstrumented;
    double _warnThreshold;
    double _hangThreshold;
    NSString *_name;
    double _targetTimerInterval;
    NSObject<OS_dispatch_queue> *_serialWatchdogTimerQueue;
    NSRunLoop *_runLoop;
    NSThread *_thread;
    NSTimer *_targetTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_queueTargetTimer;
    NSObject<OS_dispatch_source> *_queueHangTimer;
    CDUnknownBlockType _warnBlock;
    CDUnknownBlockType _hangBlock;
    NSDate *_lastQueuedDate;
    double _lastResponseTime;
}

@property(nonatomic) double lastResponseTime; // @synthesize lastResponseTime=_lastResponseTime;
@property(retain, nonatomic) NSDate *lastQueuedDate; // @synthesize lastQueuedDate=_lastQueuedDate;
@property(copy, nonatomic) CDUnknownBlockType hangBlock; // @synthesize hangBlock=_hangBlock;
@property(copy, nonatomic) CDUnknownBlockType warnBlock; // @synthesize warnBlock=_warnBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *queueHangTimer; // @synthesize queueHangTimer=_queueHangTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *queueTargetTimer; // @synthesize queueTargetTimer=_queueTargetTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialWatchdogTimerQueue; // @synthesize serialWatchdogTimerQueue=_serialWatchdogTimerQueue;
@property(nonatomic) double targetTimerInterval; // @synthesize targetTimerInterval=_targetTimerInterval;
@property(nonatomic) _Bool isInstrumented; // @synthesize isInstrumented=_isInstrumented;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool usesDefaults; // @synthesize usesDefaults=_usesDefaults;
@property(nonatomic) double hangThreshold; // @synthesize hangThreshold=_hangThreshold;
@property(nonatomic) double warnThreshold; // @synthesize warnThreshold=_warnThreshold;
- (void).cxx_destruct;
- (void)updateSettingsWithWarnThreshold:(double)arg1 hangThreshold:(double)arg2;
- (void)resumeWithWarnThreshold:(double)arg1 hangThreshold:(double)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)targetTimerFired;
- (void)startThreadTimer;
- (void)getCurrentRunLoop;
- (void)getNSThreadRunLoop;
- (id)initWithThread:(id)arg1 withName:(id)arg2 warnThreshold:(double)arg3 hangThreshold:(double)arg4 warnBlock:(CDUnknownBlockType)arg5 hangBlock:(CDUnknownBlockType)arg6;
- (void)startGCDTimer;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 warnThreshold:(double)arg3 hangThreshold:(double)arg4 warnBlock:(CDUnknownBlockType)arg5 hangBlock:(CDUnknownBlockType)arg6;

@end

