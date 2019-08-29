//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface ApptentiveInteractionUsageData : NSObject
{
    NSDate *_timeAtInstallTotal;
    NSDate *_timeAtInstallVersion;
    NSString *_applicationCFBundleShortVersionString;
    NSString *_applicationCFBundleVersion;
    NSString *_sdkVersion;
    NSString *_sdkDistribution;
    NSString *_sdkDistributionVersion;
    NSNumber *_currentTime;
    NSNumber *_isUpdateVersion;
    NSNumber *_isUpdateBuild;
    NSNumber *_isDebugBuild;
    NSDictionary *_codePointInvokesTotal;
    NSDictionary *_codePointInvokesVersion;
    NSDictionary *_codePointInvokesBuild;
    NSDictionary *_codePointInvokesTimeAgo;
    NSDictionary *_interactionInvokesTotal;
    NSDictionary *_interactionInvokesVersion;
    NSDictionary *_interactionInvokesBuild;
    NSDictionary *_interactionInvokesTimeAgo;
}

+ (void)keyPathWasSeen:(id)arg1;
+ (id)usageData;
@property(copy, nonatomic) NSDictionary *interactionInvokesTimeAgo; // @synthesize interactionInvokesTimeAgo=_interactionInvokesTimeAgo;
@property(copy, nonatomic) NSDictionary *interactionInvokesBuild; // @synthesize interactionInvokesBuild=_interactionInvokesBuild;
@property(copy, nonatomic) NSDictionary *interactionInvokesVersion; // @synthesize interactionInvokesVersion=_interactionInvokesVersion;
@property(copy, nonatomic) NSDictionary *interactionInvokesTotal; // @synthesize interactionInvokesTotal=_interactionInvokesTotal;
@property(copy, nonatomic) NSDictionary *codePointInvokesTimeAgo; // @synthesize codePointInvokesTimeAgo=_codePointInvokesTimeAgo;
@property(copy, nonatomic) NSDictionary *codePointInvokesBuild; // @synthesize codePointInvokesBuild=_codePointInvokesBuild;
@property(copy, nonatomic) NSDictionary *codePointInvokesVersion; // @synthesize codePointInvokesVersion=_codePointInvokesVersion;
@property(copy, nonatomic) NSDictionary *codePointInvokesTotal; // @synthesize codePointInvokesTotal=_codePointInvokesTotal;
@property(retain, nonatomic) NSNumber *isDebugBuild; // @synthesize isDebugBuild=_isDebugBuild;
@property(retain, nonatomic) NSNumber *isUpdateBuild; // @synthesize isUpdateBuild=_isUpdateBuild;
@property(retain, nonatomic) NSNumber *isUpdateVersion; // @synthesize isUpdateVersion=_isUpdateVersion;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSString *sdkDistributionVersion; // @synthesize sdkDistributionVersion=_sdkDistributionVersion;
@property(copy, nonatomic) NSString *sdkDistribution; // @synthesize sdkDistribution=_sdkDistribution;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *applicationCFBundleVersion; // @synthesize applicationCFBundleVersion=_applicationCFBundleVersion;
@property(copy, nonatomic) NSString *applicationCFBundleShortVersionString; // @synthesize applicationCFBundleShortVersionString=_applicationCFBundleShortVersionString;
@property(retain, nonatomic) NSDate *timeAtInstallVersion; // @synthesize timeAtInstallVersion=_timeAtInstallVersion;
@property(retain, nonatomic) NSDate *timeAtInstallTotal; // @synthesize timeAtInstallTotal=_timeAtInstallTotal;
- (void).cxx_destruct;
- (id)predicateEvaluationDictionary;
- (id)description;

@end

