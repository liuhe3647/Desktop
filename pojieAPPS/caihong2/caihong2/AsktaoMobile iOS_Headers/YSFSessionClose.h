//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMCustomAttachment-Protocol.h"

@class NSString;

@interface YSFSessionClose : NSObject <YSF_NIMCustomAttachment>
{
    long long _command;
    long long _sessionId;
    long long _closeType;
    NSString *_message;
}

+ (id)objectByDict:(id)arg1;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long closeType; // @synthesize closeType=_closeType;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)encodeAttachment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
