//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class MRTStyledButton, MRTStyledLabel, NSLayoutConstraint, NSString;

@interface MRTCreditCardOfferTermsAndConditionsCell : MRTReviewReservationTableCell
{
    MRTStyledLabel *_termsAndConditionsDescriptionLabel;
    MRTStyledButton *_termsAndConditionsButton;
    NSString *_termsAndConditionsURLString;
    NSLayoutConstraint *_termsAndConditionsButtonHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *termsAndConditionsButtonHeightConstraint; // @synthesize termsAndConditionsButtonHeightConstraint=_termsAndConditionsButtonHeightConstraint;
@property(copy, nonatomic) NSString *termsAndConditionsURLString; // @synthesize termsAndConditionsURLString=_termsAndConditionsURLString;
@property(nonatomic) __weak MRTStyledButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;
@property(nonatomic) __weak MRTStyledLabel *termsAndConditionsDescriptionLabel; // @synthesize termsAndConditionsDescriptionLabel=_termsAndConditionsDescriptionLabel;
- (void).cxx_destruct;
- (void)termsAndConditionsTapped:(id)arg1;

@end

