//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class CRNetStatDispatch, CRNetworkStatistics, NSURLSessionTask;

@interface CRNSURLSessionTaskProxy : NSProxy
{
    NSURLSessionTask *_taskDelegate;
    CRNetStatDispatch *_dispatch;
    CRNetworkStatistics *_networkStatistics;
    unsigned long long _resumeDataSize;
}

@property(nonatomic) unsigned long long resumeDataSize; // @synthesize resumeDataSize=_resumeDataSize;
@property(retain, nonatomic) CRNetworkStatistics *networkStatistics; // @synthesize networkStatistics=_networkStatistics;
@property(readonly, nonatomic) CRNetStatDispatch *dispatch; // @synthesize dispatch=_dispatch;
@property(readonly, nonatomic) NSURLSessionTask *taskDelegate; // @synthesize taskDelegate=_taskDelegate;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)responseFinishedWithError:(id)arg1;
- (void)finishedDownloadingToURL:(id)arg1;
- (void)receivedResponse:(id)arg1;
- (void)receivedBytes:(unsigned long long)arg1;
- (void)suspend;
- (void)resume;
- (void)cancel;
- (id)initDownloadTaskWithSession:(id)arg1 resumeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (id)initDownloadTaskWithSession:(id)arg1 url:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (id)initDownloadTaskWithSession:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (CDUnknownBlockType)wrapDownloadCompletionHandler:(CDUnknownBlockType)arg1 forSession:(id)arg2;
- (id)initDataTaskWithSession:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (id)initDataTaskWithSession:(id)arg1 URL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (CDUnknownBlockType)wrapDataCompletionHandler:(CDUnknownBlockType)arg1 forSession:(id)arg2;
- (id)initWithTaskDelegate:(id)arg1 dispatch:(id)arg2;

@end

