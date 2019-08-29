//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AGNetworkManager;
@protocol APIGuardDelegate;

@interface APIGuard : NSObject
{
    id <APIGuardDelegate> _delegate;
    AGNetworkManager *_networkManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) AGNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) __weak id <APIGuardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)getIntegrityCheckStatus;
- (void)setIntegrityCheckRetryInterval:(int)arg1;
- (void)setIntegrityCheckInterval:(int)arg1;
- (void)setIntegrityCheckUrl:(id)arg1;
- (void)setReauthHttpStatusCode:(int)arg1;
- (void)setGuardDomains:(id)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)parseTransformedResponseHeader:(int)arg1 headerValue:(id)arg2;
- (id)getTransformedRequestHeader:(unsigned long long)arg1 url:(id)arg2 data:(id)arg3;
- (void)transformResponse:(id)arg1;
- (void)transformRequest:(id)arg1;
- (void)initializeWithProperties:(id)arg1 delegate:(id)arg2;
- (void)initializeWithProperties:(id)arg1;
- (id)init;

@end

