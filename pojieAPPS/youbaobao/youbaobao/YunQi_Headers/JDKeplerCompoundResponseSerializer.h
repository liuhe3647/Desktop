//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDKeplerHTTPResponseSerializer.h"

@class NSArray;

@interface JDKeplerCompoundResponseSerializer : JDKeplerHTTPResponseSerializer
{
    NSArray *_responseSerializers;
}

+ (id)compoundSerializerWithResponseSerializers:(id)arg1;
@property(copy, nonatomic) NSArray *responseSerializers; // @synthesize responseSerializers=_responseSerializers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end

