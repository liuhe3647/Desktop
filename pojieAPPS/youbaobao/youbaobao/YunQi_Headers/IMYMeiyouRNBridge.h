//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol IMYRNModuleProtocol, OS_dispatch_queue;

@interface IMYMeiyouRNBridge : NSObject <RCTBridgeModule>
{
    id <IMYRNModuleProtocol> _delegate;
    RCTBridge *_bridge;
}

+ (id)resolverData:(id)arg1 withMsg:(id)arg2;
+ (const struct RCTMethodInfo *)__rct_export__hasLogin35514;
+ (const struct RCTMethodInfo *)__rct_export__31913;
+ (const struct RCTMethodInfo *)__rct_export__27212;
+ (const struct RCTMethodInfo *)__rct_export__24111;
+ (const struct RCTMethodInfo *)__rct_export__21010;
+ (const struct RCTMethodInfo *)__rct_export__1919;
+ (const struct RCTMethodInfo *)__rct_export__1768;
+ (const struct RCTMethodInfo *)__rct_export__1627;
+ (const struct RCTMethodInfo *)__rct_export__1496;
+ (const struct RCTMethodInfo *)__rct_export__1235;
+ (const struct RCTMethodInfo *)__rct_export__1084;
+ (const struct RCTMethodInfo *)__rct_export__963;
+ (const struct RCTMethodInfo *)__rct_export__832;
+ (const struct RCTMethodInfo *)__rct_export__onRenderStart681;
+ (const struct RCTMethodInfo *)__rct_export__onRenderFinish520;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)resolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)executeHttpRequest:(id)arg1 method:(id)arg2 headers:(id)arg3 params:(id)arg4 resolver:(CDUnknownBlockType)arg5 rejecter:(CDUnknownBlockType)arg6;
- (void)request:(id)arg1 method:(id)arg2 headers:(id)arg3 params:(id)arg4 resolver:(CDUnknownBlockType)arg5 rejecter:(CDUnknownBlockType)arg6;
- (void)runActionStr:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)runAction:(id)arg1 params:(id)arg2 info:(id)arg3 resolver:(CDUnknownBlockType)arg4 rejecter:(CDUnknownBlockType)arg5;
- (void)setStatusBar:(long long)arg1 animated:(_Bool)arg2;
- (void)showToast:(id)arg1;
- (void)getLoadingState:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)setLoadingState:(id)arg1;
- (void)setRightBtn:(id)arg1 imageUrl:(id)arg2 eventName:(id)arg3;
- (void)setRightBtnTextColor:(id)arg1;
- (void)setRightBtnEnable:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)onRenderStartresolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)onRenderFinishresolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (_Bool)isVaildDelegate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

