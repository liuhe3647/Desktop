//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LegicAppStatus, NSNumber, NSString;

@interface LegicWalletApplicationInfo : NSObject
{
    NSString *walletAppId;
    NSNumber *qualifier;
    NSString *metadataVersion;
    LegicAppStatus *appStatus;
}

- (void).cxx_destruct;
- (id)getAppStatus;
- (id)getMetadataVersion;
- (id)getQualifier;
- (id)getWalletAppId;
- (id)initWithWalletAppId:(id)arg1 Qualifier:(id)arg2 MetadataVersion:(id)arg3 AppStatus:(id)arg4;

@end

