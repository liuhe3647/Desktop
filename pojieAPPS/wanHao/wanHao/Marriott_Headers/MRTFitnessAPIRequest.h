//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@class MRTProperty;

@interface MRTFitnessAPIRequest : MRTAPIV2Request
{
    MRTProperty *_property;
}

+ (id)spaIncludePrefix;
+ (id)swimmingIncludePrefix;
+ (id)fitnessCentersIncludePrefix;
@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)includes;
- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)initWithProperty:(id)arg1;

@end

