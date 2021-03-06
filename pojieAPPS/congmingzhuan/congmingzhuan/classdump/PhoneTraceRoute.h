//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol PhoneTraceRouteDelegate;

@interface PhoneTraceRoute : NSObject
{
    int socket_client;
    struct sockaddr_in remote_addr;
    _Bool _isStopTracert;
    int _lastRecTracertIcmpType;
    id <PhoneTraceRouteDelegate> _delegate;
    NSString *_host;
    NSDate *_sendDate;
}

@property(retain, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(nonatomic) int lastRecTracertIcmpType; // @synthesize lastRecTracertIcmpType=_lastRecTracertIcmpType;
@property(nonatomic) _Bool isStopTracert; // @synthesize isStopTracert=_isStopTracert;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) id <PhoneTraceRouteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)receiverRemoteIpTracertRes:(int)arg1 packetSeq:(int)arg2 record:(id)arg3;
- (void)startTracert:(int)arg1 andRemoteAddr:(struct sockaddr_in)arg2;
- (void)startTracerouteHost:(id)arg1;
- (_Bool)verificationHost:(id)arg1;
- (void)settingUHostSocketAddressWithHost:(id)arg1;
- (_Bool)isTracert;
- (void)stopTracert;
- (id)init;

@end

