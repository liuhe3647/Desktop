//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTRateCost, NSDateComponents, NSString;

@interface MRTStayFolioSplitItem : MRTObject
{
    NSDateComponents *_transactionDate;
    NSString *_itemType;
    NSString *_itemDescription;
    NSString *_reference;
    MRTRateCost *_amount;
}

@property(retain, nonatomic) MRTRateCost *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *reference; // @synthesize reference=_reference;
@property(copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSDateComponents *transactionDate; // @synthesize transactionDate=_transactionDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCharge;
@property(readonly, nonatomic) _Bool isCredit;
- (id)customDeserializationValueOfValue:(id)arg1 forJSONKey:(id)arg2;

@end

