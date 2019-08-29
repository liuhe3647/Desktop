//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface MRTRewardsSummary : MRTObject <NSCopying>
{
    unsigned long long _year;
    unsigned long long _totalNightsCount;
    unsigned long long _stayNightsCount;
    unsigned long long _nonStayNightsCount;
    unsigned long long _paidNightsCount;
    unsigned long long _redemptionNightsCount;
    NSArray *_nonStayNights;
}

@property(retain, nonatomic) NSArray *nonStayNights; // @synthesize nonStayNights=_nonStayNights;
@property(nonatomic) unsigned long long redemptionNightsCount; // @synthesize redemptionNightsCount=_redemptionNightsCount;
@property(nonatomic) unsigned long long paidNightsCount; // @synthesize paidNightsCount=_paidNightsCount;
@property(nonatomic) unsigned long long nonStayNightsCount; // @synthesize nonStayNightsCount=_nonStayNightsCount;
@property(nonatomic) unsigned long long stayNightsCount; // @synthesize stayNightsCount=_stayNightsCount;
@property(nonatomic) unsigned long long totalNightsCount; // @synthesize totalNightsCount=_totalNightsCount;
@property(nonatomic) unsigned long long year; // @synthesize year=_year;
- (void).cxx_destruct;
- (id)nonStayNightDetailForCode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

