//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTCheckinFeatures, MRTMarketingPageTemplate, MRTReservation, NSError, UITableView;
@protocol _TtP8Marriott44MRTCheckinConfirmationViewControllerDelegate_;

@interface _TtC8Marriott33CheckinConfirmationViewController : UIViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: cellTypes.storage
    // Error parsing type: , name: promotionalOfferTemplate
    // Error parsing type: , name: promotionalOfferTileItem
    // Error parsing type: , name: checkInFeaturesViewController.storage
    // Error parsing type: , name: reservation
    // Error parsing type: , name: features
    // Error parsing type: , name: optOutHousekeepingError
    // Error parsing type: , name: optOutHousekeepingErrorHasBeenPresented
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)marketingTileTapped:(id)arg1;
- (void)hotelDirectionsTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)promotionItemFetched:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak id <_TtP8Marriott44MRTCheckinConfirmationViewControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) NSError *optOutHousekeepingError; // @synthesize optOutHousekeepingError;
@property(nonatomic, retain) MRTCheckinFeatures *features; // @synthesize features;
@property(nonatomic, retain) MRTReservation *reservation; // @synthesize reservation;
@property(nonatomic, retain) MRTMarketingPageTemplate *promotionalOfferTemplate; // @synthesize promotionalOfferTemplate;
@property(nonatomic, retain) UITableView *tableView; // @synthesize tableView;

@end

