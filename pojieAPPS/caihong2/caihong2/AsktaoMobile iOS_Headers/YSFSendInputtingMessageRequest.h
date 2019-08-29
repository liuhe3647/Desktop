//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSFIMCustomSystemMessageApiProtocol-Protocol.h"

@class NSString;

@interface YSFSendInputtingMessageRequest : NSObject <YSFIMCustomSystemMessageApiProtocol>
{
    long long _sessionId;
    NSString *_content;
    long long _endTime;
    double _sendingRate;
}

@property(nonatomic) double sendingRate; // @synthesize sendingRate=_sendingRate;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)toDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
