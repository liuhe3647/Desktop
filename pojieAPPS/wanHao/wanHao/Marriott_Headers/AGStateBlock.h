//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSDate;

@interface AGStateBlock : NSObject <NSCoding>
{
    NSData *_uuid;
    NSData *_skey;
    NSDate *_lastSuccessTime;
}

@property(readonly, nonatomic) NSDate *lastSuccessTime; // @synthesize lastSuccessTime=_lastSuccessTime;
@property(readonly, nonatomic) NSData *skey; // @synthesize skey=_skey;
@property(readonly, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;
- (id)getLastSuccessTime;
- (id)getId;
- (id)getKey;
- (id)initWithProperties:(id)arg1 keyData:(id)arg2;
- (id)init;

@end

