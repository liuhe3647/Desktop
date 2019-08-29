//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTServerMessage, NSArray, NSString;

@interface MRTServerStatus : MRTObject
{
    NSString *_identifier;
    long long _httpStatusCode;
    NSString *_errorCode;
    NSArray *_messages;
}

@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_errorMessageForType:(id)arg1;
@property(readonly, nonatomic) MRTServerMessage *userErrorMessage;
@property(readonly, nonatomic) MRTServerMessage *developerErrorMessage;
@property(readonly, nonatomic) _Bool isStatusMPGStayServiceNotAvailable;
@property(readonly, nonatomic) _Bool isStatusMPGOutsideRequestWindow;
@property(readonly, nonatomic) _Bool isStatusMPGStayServicesDisabled;
@property(readonly, nonatomic) _Bool isHttpStatusSuccess;

@end

