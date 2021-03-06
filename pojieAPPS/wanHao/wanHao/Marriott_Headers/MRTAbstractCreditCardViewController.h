//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CardIOPaymentViewControllerDelegate-Protocol.h"
#import "MRTStyledTextFieldDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class MRTCreditCard, MRTPickListField, MRTProperty, MRTStyledButton, MRTStyledLabel, MRTStyledTextField, NSArray, NSDictionary, NSMutableSet, NSString, UIButton, UIScrollView, UIStackView, UISwitch, UIView;

@interface MRTAbstractCreditCardViewController : UIViewController <CardIOPaymentViewControllerDelegate, UINavigationControllerDelegate, MRTStyledTextFieldDelegate>
{
    _Bool _didChangeCardNumberByScanning;
    MRTPickListField *_creditCardPurposePickListField;
    MRTPickListField *_creditCardTypePickListField;
    MRTStyledLabel *_choosePreferredStatusLabel;
    MRTStyledLabel *_creditCardInformationLabel;
    MRTStyledLabel *_creditCardInfoSummaryLabel;
    MRTStyledTextField *_cardExpirationTextField;
    MRTStyledTextField *_cardNumberTextField;
    MRTStyledTextField *_creditCardNickNameTextField;
    MRTStyledTextField *_nameOnCardTextField;
    MRTStyledTextField *_cardVerificationValueTextField;
    UIButton *_cancelButton;
    UIStackView *_mainStackView;
    UIStackView *_saveToProfileStackView;
    UISwitch *_choosePreferredSwitch;
    UISwitch *_creditCardSaveToProfileSwitch;
    UIView *_aliasView;
    UIView *_choosePreferredHeaderView;
    UIView *_purposeView;
    UIView *_saveToProfileFormView;
    UIView *_saveToProfileHeaderView;
    UIView *_removeCardHeaderView;
    UIView *_cardVerificationValueView;
    UIButton *_scanButton;
    UIView *_nameOnCardView;
    UIView *_cardTypeView;
    UIView *_cardNumberView;
    NSArray *_acceptedCreditCardTypes;
    NSArray *_creditCardPurposeTypes;
    MRTCreditCard *_creditCard;
    MRTProperty *_property;
    MRTCreditCard *_previousCreditCard;
    UIScrollView *_scrollView;
    MRTStyledLabel *_cardExpirationLabel;
    MRTStyledLabel *_cardNicknameLabel;
    MRTStyledLabel *_cardNumberLabel;
    MRTStyledLabel *_cardTypeLabel;
    MRTStyledLabel *_creditCardPurpose;
    MRTStyledLabel *_nameOnCardLabel;
    MRTStyledLabel *_saveCardToMyProfileLabel;
    MRTStyledLabel *_cardVerificationValueLabel;
    MRTStyledButton *_removeCardButton;
    UIView *_headerView;
    NSMutableSet *_unsaveableTypeCodes;
    NSDictionary *_errorFieldsDictionary;
}

@property(retain, nonatomic) NSDictionary *errorFieldsDictionary; // @synthesize errorFieldsDictionary=_errorFieldsDictionary;
@property(retain, nonatomic) NSMutableSet *unsaveableTypeCodes; // @synthesize unsaveableTypeCodes=_unsaveableTypeCodes;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak MRTStyledButton *removeCardButton; // @synthesize removeCardButton=_removeCardButton;
@property(nonatomic) __weak MRTStyledLabel *cardVerificationValueLabel; // @synthesize cardVerificationValueLabel=_cardVerificationValueLabel;
@property(nonatomic) __weak MRTStyledLabel *saveCardToMyProfileLabel; // @synthesize saveCardToMyProfileLabel=_saveCardToMyProfileLabel;
@property(nonatomic) __weak MRTStyledLabel *nameOnCardLabel; // @synthesize nameOnCardLabel=_nameOnCardLabel;
@property(nonatomic) __weak MRTStyledLabel *creditCardPurpose; // @synthesize creditCardPurpose=_creditCardPurpose;
@property(nonatomic) __weak MRTStyledLabel *cardTypeLabel; // @synthesize cardTypeLabel=_cardTypeLabel;
@property(nonatomic) __weak MRTStyledLabel *cardNumberLabel; // @synthesize cardNumberLabel=_cardNumberLabel;
@property(nonatomic) __weak MRTStyledLabel *cardNicknameLabel; // @synthesize cardNicknameLabel=_cardNicknameLabel;
@property(nonatomic) __weak MRTStyledLabel *cardExpirationLabel; // @synthesize cardExpirationLabel=_cardExpirationLabel;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MRTCreditCard *previousCreditCard; // @synthesize previousCreditCard=_previousCreditCard;
@property(nonatomic) _Bool didChangeCardNumberByScanning; // @synthesize didChangeCardNumberByScanning=_didChangeCardNumberByScanning;
@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) MRTCreditCard *creditCard; // @synthesize creditCard=_creditCard;
@property(copy, nonatomic) NSArray *creditCardPurposeTypes; // @synthesize creditCardPurposeTypes=_creditCardPurposeTypes;
@property(copy, nonatomic) NSArray *acceptedCreditCardTypes; // @synthesize acceptedCreditCardTypes=_acceptedCreditCardTypes;
@property(retain, nonatomic) UIView *cardNumberView; // @synthesize cardNumberView=_cardNumberView;
@property(retain, nonatomic) UIView *cardTypeView; // @synthesize cardTypeView=_cardTypeView;
@property(retain, nonatomic) UIView *nameOnCardView; // @synthesize nameOnCardView=_nameOnCardView;
@property(nonatomic) __weak UIButton *scanButton; // @synthesize scanButton=_scanButton;
@property(nonatomic) __weak UIView *cardVerificationValueView; // @synthesize cardVerificationValueView=_cardVerificationValueView;
@property(nonatomic) __weak UIView *removeCardHeaderView; // @synthesize removeCardHeaderView=_removeCardHeaderView;
@property(nonatomic) __weak UIView *saveToProfileHeaderView; // @synthesize saveToProfileHeaderView=_saveToProfileHeaderView;
@property(nonatomic) __weak UIView *saveToProfileFormView; // @synthesize saveToProfileFormView=_saveToProfileFormView;
@property(nonatomic) __weak UIView *purposeView; // @synthesize purposeView=_purposeView;
@property(nonatomic) __weak UIView *choosePreferredHeaderView; // @synthesize choosePreferredHeaderView=_choosePreferredHeaderView;
@property(nonatomic) __weak UIView *aliasView; // @synthesize aliasView=_aliasView;
@property(nonatomic) __weak UISwitch *creditCardSaveToProfileSwitch; // @synthesize creditCardSaveToProfileSwitch=_creditCardSaveToProfileSwitch;
@property(nonatomic) __weak UISwitch *choosePreferredSwitch; // @synthesize choosePreferredSwitch=_choosePreferredSwitch;
@property(nonatomic) __weak UIStackView *saveToProfileStackView; // @synthesize saveToProfileStackView=_saveToProfileStackView;
@property(nonatomic) __weak UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak MRTStyledTextField *cardVerificationValueTextField; // @synthesize cardVerificationValueTextField=_cardVerificationValueTextField;
@property(nonatomic) __weak MRTStyledTextField *nameOnCardTextField; // @synthesize nameOnCardTextField=_nameOnCardTextField;
@property(nonatomic) __weak MRTStyledTextField *creditCardNickNameTextField; // @synthesize creditCardNickNameTextField=_creditCardNickNameTextField;
@property(nonatomic) __weak MRTStyledTextField *cardNumberTextField; // @synthesize cardNumberTextField=_cardNumberTextField;
@property(nonatomic) __weak MRTStyledTextField *cardExpirationTextField; // @synthesize cardExpirationTextField=_cardExpirationTextField;
@property(nonatomic) __weak MRTStyledLabel *creditCardInfoSummaryLabel; // @synthesize creditCardInfoSummaryLabel=_creditCardInfoSummaryLabel;
@property(nonatomic) __weak MRTStyledLabel *creditCardInformationLabel; // @synthesize creditCardInformationLabel=_creditCardInformationLabel;
@property(nonatomic) __weak MRTStyledLabel *choosePreferredStatusLabel; // @synthesize choosePreferredStatusLabel=_choosePreferredStatusLabel;
@property(nonatomic) __weak MRTPickListField *creditCardTypePickListField; // @synthesize creditCardTypePickListField=_creditCardTypePickListField;
@property(nonatomic) __weak MRTPickListField *creditCardPurposePickListField; // @synthesize creditCardPurposePickListField=_creditCardPurposePickListField;
- (void).cxx_destruct;
- (_Bool)canCreditCardTypeBeSavedToProfile:(id)arg1;
- (void)createCreditCardLookup:(id)arg1;
- (void)disableDoneAction;
- (void)enableDoneAction;
- (void)_setupErrorHandling;
- (void)handleCreditCardError:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textField:(id)arg1 didSetObjectValue:(id)arg2;
- (void)updateCVVTextFieldPlaceholder;
- (void)creditCardPickListFieldValueChanged:(id)arg1;
- (_Bool)isSaveToProfileFeatureAllowed;
- (void)registerInteractionWithTextFields;
- (void)_ensureDefaultCreditCardPurposeIsSet;
- (void)tapSaveCardToProfileSwitch:(id)arg1;
- (void)tapRemoveCard:(id)arg1;
- (void)cancel:(id)arg1;
- (void)endEditing:(id)arg1;
- (id)mappingCardIOCardType:(long long)arg1;
- (void)userDidProvideCreditCardInfo:(id)arg1 inPaymentViewController:(id)arg2;
- (void)userDidCancelPaymentViewController:(id)arg1;
- (void)tapScanButton:(id)arg1;
- (void)removeCard;
- (void)doneButtonTapped;
- (_Bool)isDoneEnabled;
- (id)textFieldsTriggeringDoneButton;
- (void)updateUIElements;
- (void)updateCreditCardPurposeTypes:(id)arg1;
- (void)_fetchCreditCardTypesAllowedInProfile;
- (void)_fetchCreditCardPurposeTypes;
- (_Bool)shouldDisplayCVVField;
- (void)oneButtonOverlayLayoutMarginsDidChange:(struct UIEdgeInsets)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)pageTitle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

