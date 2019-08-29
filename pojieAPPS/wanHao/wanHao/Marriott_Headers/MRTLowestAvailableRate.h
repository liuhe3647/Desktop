//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTLookupType, MRTRateCategory, NSArray;

@interface MRTLowestAvailableRate : MRTObject
{
    MRTRateCategory *_rateCategory;
    MRTLookupType *_status;
    NSArray *_rateAmounts;
}

@property(retain, nonatomic) NSArray *rateAmounts; // @synthesize rateAmounts=_rateAmounts;
@property(retain, nonatomic) MRTLookupType *status; // @synthesize status=_status;
@property(retain, nonatomic) MRTRateCategory *rateCategory; // @synthesize rateCategory=_rateCategory;
- (void).cxx_destruct;
- (_Bool)areOtherRatesAvailable;
- (_Bool)isUnavailable;
- (_Bool)isAvailable;

@end

