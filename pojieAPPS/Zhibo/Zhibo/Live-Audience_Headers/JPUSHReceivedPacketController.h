//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHNetElement.h"

@interface JPUSHReceivedPacketController : JPUSHNetElement
{
}

+ (id)packetWithBuffer:(const char *)arg1 length:(unsigned short)arg2;
+ (unsigned short)expectedBufferLen:(const char *)arg1 length:(unsigned short)arg2;
- (void)dealloc;
- (void)handleReceipt;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned short)arg2;

@end
