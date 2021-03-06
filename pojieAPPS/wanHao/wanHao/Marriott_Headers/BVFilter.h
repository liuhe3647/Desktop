//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BVFilter : NSObject
{
    NSString *_type;
    long long _filterOperator;
    NSArray *_values;
}

@property(retain) NSArray *values; // @synthesize values=_values;
@property long long filterOperator; // @synthesize filterOperator=_filterOperator;
@property(retain) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toParameterString;
- (id)initWithString:(id)arg1 filterOperator:(long long)arg2 values:(id)arg3;
- (id)initWithType:(long long)arg1 filterOperator:(long long)arg2 value:(id)arg3;
- (id)initWithType:(long long)arg1 filterOperator:(long long)arg2 values:(id)arg3;

@end

