//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TCPMessage.h"

@class NSString;

@interface TCPPushMessage : TCPMessage
{
    NSString *_data;
    NSString *_messageID;
    NSString *_to;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end
