//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRTConsumerActivityOption, NSArray;

@interface MRTActivityFilters : NSObject
{
    MRTConsumerActivityOption *_timeFilter;
    NSArray *_typeFilters;
}

@property(copy, nonatomic) NSArray *typeFilters; // @synthesize typeFilters=_typeFilters;
@property(retain, nonatomic) MRTConsumerActivityOption *timeFilter; // @synthesize timeFilter=_timeFilter;
- (void).cxx_destruct;
- (id)filterDescription;
- (id)fullPredicate;

@end

