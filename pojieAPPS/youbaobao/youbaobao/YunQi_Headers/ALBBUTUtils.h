//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALBBUTUtils : NSObject
{
    NSString *_diskSize;
    NSString *_memorySize;
    NSString *_deviceId;
    NSString *_osType;
    NSString *_osVersion;
    NSString *_sdkVersion;
    NSString *_sdkType;
    NSString *_appkey;
    NSString *_appId;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_uuid;
}

+ (id)sharedUtils;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *sdkType; // @synthesize sdkType=_sdkType;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *osType; // @synthesize osType=_osType;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *memorySize; // @synthesize memorySize=_memorySize;
@property(copy, nonatomic) NSString *diskSize; // @synthesize diskSize=_diskSize;
- (void).cxx_destruct;
- (id)getUUID;
- (void)setUUID:(id)arg1;
- (id)getAppVersion;
- (id)getAppName;
- (id)getAppId;
- (id)getAppkey;
- (id)getSdkType;
- (id)getSdkVersion;
- (id)getSdkName;
- (id)getOsVersion;
- (id)getOsType;
- (id)getDeviceId;
- (id)getMemorySize;
- (id)getDiskSize;

@end

