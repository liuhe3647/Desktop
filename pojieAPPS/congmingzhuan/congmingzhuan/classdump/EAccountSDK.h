//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAccountSDK : NSObject
{
}

+ (_Bool *)ipAddressWithIfaName:(id)arg1;
+ (void)requestWithBaseURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 bParamsEncrypto:(_Bool)arg4 tag:(id)arg5 appKey:(id)arg6 appSecret:(id)arg7 responsBlack:(CDUnknownBlockType)arg8;
+ (void)getServerTimeStampValue:(id)arg1 appSecret:(id)arg2;
+ (void)processTimeStamp:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3;
+ (void)processTimeStamp2:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3;
+ (void)mobileCode:(id)arg1 appSecret:(id)arg2 bussinessType:(id)arg3 apiTimeoutInterval:(double)arg4 block:(CDUnknownBlockType)arg5;
+ (void)preGetMobileRedirect:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)getVerificationCodeWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)getAccessCodeWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)getMobileCodeWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)gatewayAuthWithAccessCode:(id)arg1 withTimeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestPreVerification:(double)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestPreAuth:(double)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestPreLogin:(double)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestLogin:(id)arg1 withTimeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)setTestBundleId;
+ (void)initWithSelfKey:(id)arg1 appSecret:(id)arg2;

@end

