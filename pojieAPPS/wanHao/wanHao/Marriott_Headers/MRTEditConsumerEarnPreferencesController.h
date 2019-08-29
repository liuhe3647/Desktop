//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTEditConsumerPreferencesController.h"

@class MRTLookupType, MRTRewardsCurrencyType, NSArray, NSString;

@interface MRTEditConsumerEarnPreferencesController : MRTEditConsumerPreferencesController
{
    NSArray *_partnerTypes;
    MRTLookupType *_selectedPartnerType;
    NSString *_selectedPartnerNumber;
    NSArray *_currencyTypes;
    NSArray *_partners;
    NSArray *_elements;
    MRTRewardsCurrencyType *_selectedCurrencyType;
}

@property(retain, nonatomic) MRTRewardsCurrencyType *selectedCurrencyType; // @synthesize selectedCurrencyType=_selectedCurrencyType;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSArray *partners; // @synthesize partners=_partners;
@property(copy, nonatomic) NSArray *currencyTypes; // @synthesize currencyTypes=_currencyTypes;
@property(copy, nonatomic) NSString *selectedPartnerNumber; // @synthesize selectedPartnerNumber=_selectedPartnerNumber;
@property(retain, nonatomic) MRTLookupType *selectedPartnerType; // @synthesize selectedPartnerType=_selectedPartnerType;
@property(copy, nonatomic) NSArray *partnerTypes; // @synthesize partnerTypes=_partnerTypes;
- (void).cxx_destruct;
- (void)_processEarnPreferencesWithOneButtonTitle:(id)arg1;
- (id)_partnerAccount;
- (void)_buildModel;
- (void)saveChanges;
- (id)dequeueCellInTableView:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setup:(CDUnknownBlockType)arg1;
- (_Bool)selectElementAtIndexPath:(id)arg1;
- (id)elementInSection:(long long)arg1 atIndex:(long long)arg2;
- (unsigned long long)elementCountInSection:(long long)arg1;
- (id)pageTitle;
- (id)analyticsPageName;
- (id)initWithConsumer:(id)arg1;

@end

