//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext;

@interface MRTTouchIDController : NSObject
{
    LAContext *_context;
}

+ (void)setHasSeenTouchIDInformationScreen:(_Bool)arg1;
+ (_Bool)hasSeenTouchIDInformationScreen;
+ (_Bool)isUsingTouchID;
+ (void)setUsingTouchID:(_Bool)arg1;
+ (id)loginPromptReason;
+ (id)validationReason;
+ (id)settingsEnableTitle;
+ (id)loginEnableTitle;
+ (id)_fixTitle:(id)arg1;
+ (id)savedRewardsNumber;
+ (id)savedPassword;
+ (void)removePasswordFromKeychain;
+ (void)removeRewardsNumberAndPasswordFromKeychain;
+ (void)setKeychainPassword:(id)arg1;
+ (void)setKeychainRewardsNumber:(id)arg1;
+ (void)setKeychainRewardsNumber:(id)arg1 password:(id)arg2;
+ (_Bool)deviceUsesFaceID;
+ (_Bool)canAuthenticateWithTouchIDInContext:(id)arg1 error:(id *)arg2;
+ (_Bool)canAuthenticateWithTouchID:(id *)arg1;
+ (_Bool)canAuthenticateWithTouchID;
@property(retain, nonatomic) LAContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)authenticateWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canAuthenticateWithTouchID:(id *)arg1;
- (id)init;

@end
