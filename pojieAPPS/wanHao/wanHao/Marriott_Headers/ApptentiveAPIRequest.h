//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApptentiveURLConnectionDelegate-Protocol.h"

@class ApptentiveURLConnection, NSString;
@protocol ApptentiveAPIRequestDelegate;

@interface ApptentiveAPIRequest : NSObject <ApptentiveURLConnectionDelegate>
{
    _Bool _failed;
    _Bool _shouldRetry;
    _Bool _cancelled;
    float _percentageComplete;
    int _returnType;
    NSString *_errorTitle;
    NSString *_errorMessage;
    NSString *_errorResponse;
    double _expiresMaxAge;
    double _timeoutInterval;
    NSObject<ApptentiveAPIRequestDelegate> *_delegate;
    ApptentiveURLConnection *_connection;
    NSString *_channelName;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) ApptentiveURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak NSObject<ApptentiveAPIRequestDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) int returnType; // @synthesize returnType=_returnType;
@property(readonly, nonatomic) double expiresMaxAge; // @synthesize expiresMaxAge=_expiresMaxAge;
@property(readonly, nonatomic) float percentageComplete; // @synthesize percentageComplete=_percentageComplete;
@property(readonly, nonatomic) NSString *errorResponse; // @synthesize errorResponse=_errorResponse;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(readonly, nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(readonly, nonatomic) _Bool failed; // @synthesize failed=_failed;
- (void).cxx_destruct;
- (void)connectionDidProgress:(id)arg1;
- (void)connectionFailed:(id)arg1;
- (void)connectionFinishedSuccessfully:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 channelName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
