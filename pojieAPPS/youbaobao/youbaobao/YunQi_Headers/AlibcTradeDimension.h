//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlibcTradeBenchmarkable-Protocol.h"

@class NSString;

@interface AlibcTradeDimension : NSObject <AlibcTradeBenchmarkable>
{
    NSString *_name;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)toDictionary;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

