//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTLookupType, NSArray, NSString;

@interface MRTOneTimePasswordRiskAssessment : MRTObject
{
    NSString *_transactionId;
    unsigned long long _riskScore;
    MRTLookupType *_deviceStatus;
    MRTLookupType *_assuranceLevel;
    MRTLookupType *_actionCode;
    NSArray *_authenticationMethods;
}

@property(retain, nonatomic) NSArray *authenticationMethods; // @synthesize authenticationMethods=_authenticationMethods;
@property(retain, nonatomic) MRTLookupType *actionCode; // @synthesize actionCode=_actionCode;
@property(retain, nonatomic) MRTLookupType *assuranceLevel; // @synthesize assuranceLevel=_assuranceLevel;
@property(retain, nonatomic) MRTLookupType *deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(nonatomic) unsigned long long riskScore; // @synthesize riskScore=_riskScore;
@property(copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
- (void).cxx_destruct;

@end

