//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTServiceCategoryPresenter-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MRTConsumer, MRTRequestedService, MRTReservation, MRTServiceCategory, MRTStyledLabel, MRTStyledTextField, NSString, UIView;

@interface MRTStayServicesValetViewController : UIViewController <UITextFieldDelegate, MRTServiceCategoryPresenter>
{
    MRTConsumer *_consumer;
    MRTServiceCategory *_serviceCategory;
    MRTReservation *_reservation;
    MRTRequestedService *_valetService;
    UIView *_headerView;
    MRTStyledLabel *_valetTitleLabel;
    MRTStyledLabel *_valetDescriptionLabel;
    MRTStyledLabel *_valetTicketNumberLabel;
    MRTStyledTextField *_ticketNumberTextField;
}

@property(retain, nonatomic) MRTStyledTextField *ticketNumberTextField; // @synthesize ticketNumberTextField=_ticketNumberTextField;
@property(retain, nonatomic) MRTStyledLabel *valetTicketNumberLabel; // @synthesize valetTicketNumberLabel=_valetTicketNumberLabel;
@property(retain, nonatomic) MRTStyledLabel *valetDescriptionLabel; // @synthesize valetDescriptionLabel=_valetDescriptionLabel;
@property(retain, nonatomic) MRTStyledLabel *valetTitleLabel; // @synthesize valetTitleLabel=_valetTitleLabel;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MRTRequestedService *valetService; // @synthesize valetService=_valetService;
@property(retain, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
@property(copy, nonatomic) MRTServiceCategory *serviceCategory; // @synthesize serviceCategory=_serviceCategory;
@property(retain, nonatomic) MRTConsumer *consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (void)submitButtonPressed:(id)arg1;
- (void)updateConfirmationButtonAttributes;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)appNavigationIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

