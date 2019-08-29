//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYPublicIBaseService-Protocol.h"

@class NSString, RACDisposable, RACSignal;
@protocol RACSubscriber;

@interface IMYPublicBaseService : NSObject <IMYPublicIBaseService>
{
    RACDisposable *getDisposable;
    RACDisposable *postDisposable;
    RACDisposable *loadMoreDisposable;
    RACSignal *getFinishedSignal;
    RACSignal *getCacheFinishedSignal;
    RACSignal *postFinishedSignal;
    RACSignal *cancelGetFinishedSignal;
    RACSignal *cancelPostFinishedSignal;
    RACSignal *loadMoreFinishedSignal;
    RACSignal *saveToLocalFinishedSignal;
    id <RACSubscriber> getFinishedSubscriber;
    id <RACSubscriber> getCacheFinishedSubscriber;
    id <RACSubscriber> postFinishedSubscriber;
    id <RACSubscriber> cancelGetFinishedSubscriber;
    id <RACSubscriber> cancelPostFinishedSubscriber;
    id <RACSubscriber> loadMoreFinishedSubscriber;
    id <RACSubscriber> saveToLocalFinishedSubscriber;
    _Bool _getting;
    _Bool _posting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPosting;
@property(readonly, nonatomic) _Bool isGetting;
- (void)requestSuccessfully:(_Bool)arg1 responseData:(id)arg2 error:(id)arg3 result:(id)arg4 isArray:(_Bool)arg5;
- (void)cancelPost;
- (void)cancelGet;
- (id)postPath:(id)arg1 host:(id)arg2 params:(id)arg3 serviceResultProtocolName:(id)arg4 serviceResultClassName:(id)arg5 resultIsArray:(_Bool)arg6;
- (id)getPath:(id)arg1 host:(id)arg2 params:(id)arg3 serviceResultProtocolName:(id)arg4 serviceResultClassName:(id)arg5 resultIsArray:(_Bool)arg6 usingCache:(_Bool)arg7 before:(CDUnknownBlockType)arg8;
- (id)getPath:(id)arg1 host:(id)arg2 params:(id)arg3 serviceResultProtocolName:(id)arg4 serviceResultClassName:(id)arg5 resultIsArray:(_Bool)arg6 usingCache:(_Bool)arg7;
- (id)getPath:(id)arg1 host:(id)arg2 params:(id)arg3 serviceResultProtocolName:(id)arg4 serviceResultClassName:(id)arg5 resultIsArray:(_Bool)arg6;
- (id)saveToLocalFinishedSubscriber;
- (id)loadMoreFinishedSubscriber;
- (id)cancelGetFinishedSubscriber;
- (id)cancelPostFinishedSubscriber;
- (id)postFinishedSubscriber;
- (id)getCacheFinishedSubscriber;
- (id)getFinishedSubscriber;
- (id)saveToLocalFinishedSignal;
- (id)loadMoreFinishedSignal;
- (id)cancelPostFinishedSignal;
- (id)cancelGetFinishedSignal;
- (id)postFinishedSignal;
- (id)getCacheFinishedSignal;
- (id)getFinishedSignal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

