//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAbstractCallRewardsCell.h"

@class UILabel;

@interface MRTRewardsGlobalReservationSupportCell : MRTAbstractCallRewardsCell
{
    UILabel *_rewardsAboutLabel;
    UILabel *_rewardsNumberLabel;
}

+ (_Bool)isVisibleInController:(id)arg1;
+ (_Bool)isVisibleInUSOrCanada;
@property(nonatomic) __weak UILabel *rewardsNumberLabel; // @synthesize rewardsNumberLabel=_rewardsNumberLabel;
@property(nonatomic) __weak UILabel *rewardsAboutLabel; // @synthesize rewardsAboutLabel=_rewardsAboutLabel;
- (void).cxx_destruct;
- (id)phoneNumberString;
- (id)rewardsAboutLabelString;
- (void)cellWasSelectedInController:(id)arg1;
- (void)resetValuesWithConsumer:(id)arg1 inViewController:(id)arg2;

@end

