//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRNView.h"

#import "IMYRNModuleProtocol-Protocol.h"
#import "RCTBridgeDelegate-Protocol.h"
#import "RCTExceptionsManagerDelegate-Protocol.h"

@class NSString;

@interface IMYRNPrivateBridgeView : IMYRNView <RCTBridgeDelegate, RCTExceptionsManagerDelegate, IMYRNModuleProtocol>
{
}

- (void)sendEventWithName:(id)arg1 body:(id)arg2;
- (id)sourceURLForBridge:(id)arg1;
- (id)extraModulesForBridge:(id)arg1;
- (id)viewControllForBridge;
- (id)viewForBridge;
- (void)handleFatalJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)handleSoftJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)updateJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (id)bridgeWithBundleUrl:(id)arg1 launchOptions:(id)arg2 delegate:(id)arg3;
- (id)bridgeWithBundlePath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

