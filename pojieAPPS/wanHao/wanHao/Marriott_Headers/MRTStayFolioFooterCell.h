//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTStyledButton, MRTStyledLabel;

@interface MRTStayFolioFooterCell : UITableViewCell
{
    MRTStyledLabel *_totalChargesTitleLabel;
    MRTStyledLabel *_totalChargesLabel;
    MRTStyledLabel *_totalBalanceTitleLabel;
    MRTStyledLabel *_totalBalanceLabel;
    MRTStyledLabel *_authenticityTitleLabel;
    MRTStyledLabel *_authenticityBodyLabel;
    MRTStyledLabel *_privacyTitleLabel;
    MRTStyledLabel *_privacyBodyLabel;
    MRTStyledLabel *_creditOfRewardsPointsTitle;
    MRTStyledLabel *_creditOfRewardsPointsBodyLabel;
    MRTStyledLabel *_contactTitleLabel;
    MRTStyledLabel *_contactBodyLabel;
    MRTStyledButton *_hotelPhoneButton;
}

@property(retain, nonatomic) MRTStyledButton *hotelPhoneButton; // @synthesize hotelPhoneButton=_hotelPhoneButton;
@property(nonatomic) __weak MRTStyledLabel *contactBodyLabel; // @synthesize contactBodyLabel=_contactBodyLabel;
@property(nonatomic) __weak MRTStyledLabel *contactTitleLabel; // @synthesize contactTitleLabel=_contactTitleLabel;
@property(nonatomic) __weak MRTStyledLabel *creditOfRewardsPointsBodyLabel; // @synthesize creditOfRewardsPointsBodyLabel=_creditOfRewardsPointsBodyLabel;
@property(nonatomic) __weak MRTStyledLabel *creditOfRewardsPointsTitle; // @synthesize creditOfRewardsPointsTitle=_creditOfRewardsPointsTitle;
@property(nonatomic) __weak MRTStyledLabel *privacyBodyLabel; // @synthesize privacyBodyLabel=_privacyBodyLabel;
@property(nonatomic) __weak MRTStyledLabel *privacyTitleLabel; // @synthesize privacyTitleLabel=_privacyTitleLabel;
@property(nonatomic) __weak MRTStyledLabel *authenticityBodyLabel; // @synthesize authenticityBodyLabel=_authenticityBodyLabel;
@property(nonatomic) __weak MRTStyledLabel *authenticityTitleLabel; // @synthesize authenticityTitleLabel=_authenticityTitleLabel;
@property(retain, nonatomic) MRTStyledLabel *totalBalanceLabel; // @synthesize totalBalanceLabel=_totalBalanceLabel;
@property(retain, nonatomic) MRTStyledLabel *totalBalanceTitleLabel; // @synthesize totalBalanceTitleLabel=_totalBalanceTitleLabel;
@property(retain, nonatomic) MRTStyledLabel *totalChargesLabel; // @synthesize totalChargesLabel=_totalChargesLabel;
@property(retain, nonatomic) MRTStyledLabel *totalChargesTitleLabel; // @synthesize totalChargesTitleLabel=_totalChargesTitleLabel;
- (void).cxx_destruct;
- (void)hotelPhoneButtonPressed:(id)arg1;

@end

