//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTConsumerActivityPartner, MRTLookupType, MRTProperty, MRTRewardsCurrencyType, NSArray, NSDateComponents, NSString;

@interface MRTConsumerRewardsActivity : MRTObject
{
    _Bool _qualifying;
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
    NSDateComponents *_postDateComponents;
    NSString *_activityDescription;
    long long _baseEarning;
    long long _eliteEarning;
    long long _extraEarning;
    long long _totalEarning;
    long long _awardCount;
    MRTLookupType *_activityType;
    MRTLookupType *_awardType;
    MRTRewardsCurrencyType *_currencyType;
    MRTConsumerActivityPartner *_partner;
    NSArray *_actions;
    NSArray *_links;
    NSString *_propertyCode;
    MRTProperty *_property;
}

@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *propertyCode; // @synthesize propertyCode=_propertyCode;
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) MRTConsumerActivityPartner *partner; // @synthesize partner=_partner;
@property(retain, nonatomic) MRTRewardsCurrencyType *currencyType; // @synthesize currencyType=_currencyType;
@property(retain, nonatomic) MRTLookupType *awardType; // @synthesize awardType=_awardType;
@property(retain, nonatomic) MRTLookupType *activityType; // @synthesize activityType=_activityType;
@property(nonatomic, getter=isQualifying) _Bool qualifying; // @synthesize qualifying=_qualifying;
@property(nonatomic) long long awardCount; // @synthesize awardCount=_awardCount;
@property(nonatomic) long long totalEarning; // @synthesize totalEarning=_totalEarning;
@property(nonatomic) long long extraEarning; // @synthesize extraEarning=_extraEarning;
@property(nonatomic) long long eliteEarning; // @synthesize eliteEarning=_eliteEarning;
@property(nonatomic) long long baseEarning; // @synthesize baseEarning=_baseEarning;
@property(copy, nonatomic) NSString *activityDescription; // @synthesize activityDescription=_activityDescription;
@property(copy, nonatomic) NSDateComponents *postDateComponents; // @synthesize postDateComponents=_postDateComponents;
@property(copy, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property(copy, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
- (void).cxx_destruct;
- (id)stayAgainTitle;
- (id)dateRangeDisplayString;
- (id)startDateDisplayString;
- (id)postDateDisplayString;
- (id)nightsDisplayString;
- (id)actionBreakdownDisplayString;
- (id)pointsBreakdownDisplayString;
- (id)valueDisplayStringAnnotated;
- (id)awardCountDisplayString;
- (id)awardsDisplayStringAnnotated;
- (id)pointsDisplayStringAnnotated;
- (id)pointsDisplayString;
- (long long)lengthOfStay;
- (id)activitySubtitle;
- (id)activityTitle;
- (_Bool)isAward;
- (_Bool)isBonus;
- (_Bool)isRewardEvent;
- (_Bool)isStay;
- (id)endDate;
- (id)startDate;
- (id)postDate;
- (_Bool)isEqualToIdentifier:(id)arg1;
- (void)awakeFromJSONDeserialization;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)_isKnownType;

@end

