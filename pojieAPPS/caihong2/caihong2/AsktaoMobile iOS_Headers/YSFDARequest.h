//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSFApiProtocol-Protocol.h"

@class NSArray, NSString;

@interface YSFDARequest : NSObject <YSFApiProtocol>
{
    NSArray *_array;
}

@property(copy, nonatomic) NSArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (id)dataByJson:(id)arg1 error:(id *)arg2;
- (id)params;
- (id)apiPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
