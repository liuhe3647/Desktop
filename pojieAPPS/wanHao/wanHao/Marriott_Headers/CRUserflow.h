//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRReportableEvent.h"

#import "CRGarbageCollection-Protocol.h"

@class CRSession, NSDate, NSNumber, NSSet, NSString;

@interface CRUserflow : CRReportableEvent <CRGarbageCollection>
{
}

+ (id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2;
+ (id)reportableEventProtocolType;
+ (void)cancelUserflowsInSession:(id)arg1;
+ (double)userflowTimeoutForName:(id)arg1 sdkSettings:(id)arg2;
+ (id)fetchObjectsReadyToSendInContext:(id)arg1 sdkSettings:(id)arg2;
+ (id)fetchActiveScreenNamesFromContext:(id)arg1;
+ (id)fetchRunningUserflowFromContext:(id)arg1 withName:(id)arg2;
+ (unsigned long long)fetchNumberOfUserflowsInContext:(id)arg1 withType:(unsigned long long)arg2;
+ (unsigned long long)fetchNumberOfUserflowsInContext:(id)arg1;
+ (id)fetchRunningUserflowsInContext:(id)arg1 withType:(unsigned long long)arg2;
+ (id)fetchRunningUserflowsInContext:(id)arg1;
+ (id)fetchRequestForActiveUserflowsWithType:(unsigned long long)arg1;
+ (id)fetchRequestForActiveUserflows;
+ (id)garbageCollectionSortDescriptor;
+ (unsigned long long)garbageCollectionLowWaterMark;
+ (unsigned long long)garbageCollectionHighWaterMark;
- (void)prepareForDeletion;
- (id)stateString;
- (void)collectBreadcrumbs;
- (void)cancel;
- (void)crashAtDate:(id)arg1;
- (void)timedoutAtDate:(id)arg1;
- (void)failAtDate:(id)arg1;
- (void)endAtDate:(id)arg1;
- (double)elapsedTime;
- (double)foregroundTime;
- (double)activeTime;
- (id)initWithContext:(id)arg1 startTime:(id)arg2 name:(id)arg3 value:(id)arg4 timeout:(double)arg5 type:(unsigned long long)arg6;
- (id)eventCollectorJson;
- (id)json;

// Remaining properties
@property(retain, nonatomic) NSSet *appVisibilityLog; // @dynamic appVisibilityLog;
@property(retain, nonatomic) id breadcrumbs; // @dynamic breadcrumbs;
@property(retain, nonatomic) NSDate *endTime; // @dynamic endTime;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) CRSession *session; // @dynamic session;
@property(retain, nonatomic) NSDate *startTime; // @dynamic startTime;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSNumber *timeout; // @dynamic timeout;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSNumber *value; // @dynamic value;

@end

