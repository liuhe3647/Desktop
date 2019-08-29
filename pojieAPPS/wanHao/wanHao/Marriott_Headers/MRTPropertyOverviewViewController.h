//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTImageGalleryViewControllerDelegate-Protocol.h"
#import "MRTMapViewDelegate-Protocol.h"
#import "MRTMapWrapperViewDelegate-Protocol.h"

@class MRTBookingParametersItem, MRTImageGalleryViewController, MRTPropertyMapView, MRTPropertyRoom, MRTPropertyRoomsResultsViewController, MRTRatingsView, MRTStyledButton, MRTStyledLabel, NSArray, NSLayoutConstraint, NSString, UIImageView, UIView;

@interface MRTPropertyOverviewViewController : UIViewController <MRTMapWrapperViewDelegate, MRTMapViewDelegate, MRTImageGalleryViewControllerDelegate>
{
    NSArray *_marginConstraints;
    MRTBookingParametersItem *_searchParams;
    MRTPropertyRoomsResultsViewController *_propertyRoomsDelegate;
    MRTImageGalleryViewController *_galleryController;
    MRTPropertyRoom *_propertyRoom;
    UIView *_galleryContainerView;
    UIImageView *_brandImageView;
    MRTStyledLabel *_ratingValueLabel;
    MRTStyledLabel *_hotelNameLabel;
    MRTStyledLabel *_hotelAlertLabel;
    MRTStyledButton *_hotelAlertMoreButton;
    MRTPropertyMapView *_mapView;
    MRTRatingsView *_ratingsView;
    MRTStyledButton *_ratingButton;
    NSLayoutConstraint *_mapBottomConstraint;
    NSLayoutConstraint *_alertHeightConstraint;
    NSLayoutConstraint *_moreButtonTopConstraint;
    NSLayoutConstraint *_moreButtonHeightConstraint;
    MRTStyledButton *_categoryButton;
    NSLayoutConstraint *_categoryButtonTopConstraint;
    NSLayoutConstraint *_mapTopConstraint;
    double _mapBottomConstant;
    double _alertHeightConstant;
    double _moreButtonTopConstant;
    double _moreButtonHeightConstant;
}

@property(nonatomic) double moreButtonHeightConstant; // @synthesize moreButtonHeightConstant=_moreButtonHeightConstant;
@property(nonatomic) double moreButtonTopConstant; // @synthesize moreButtonTopConstant=_moreButtonTopConstant;
@property(nonatomic) double alertHeightConstant; // @synthesize alertHeightConstant=_alertHeightConstant;
@property(nonatomic) double mapBottomConstant; // @synthesize mapBottomConstant=_mapBottomConstant;
@property(nonatomic) __weak NSLayoutConstraint *mapTopConstraint; // @synthesize mapTopConstraint=_mapTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *categoryButtonTopConstraint; // @synthesize categoryButtonTopConstraint=_categoryButtonTopConstraint;
@property(nonatomic) __weak MRTStyledButton *categoryButton; // @synthesize categoryButton=_categoryButton;
@property(nonatomic) __weak NSLayoutConstraint *moreButtonHeightConstraint; // @synthesize moreButtonHeightConstraint=_moreButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *moreButtonTopConstraint; // @synthesize moreButtonTopConstraint=_moreButtonTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *alertHeightConstraint; // @synthesize alertHeightConstraint=_alertHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *mapBottomConstraint; // @synthesize mapBottomConstraint=_mapBottomConstraint;
@property(nonatomic) __weak MRTStyledButton *ratingButton; // @synthesize ratingButton=_ratingButton;
@property(nonatomic) __weak MRTRatingsView *ratingsView; // @synthesize ratingsView=_ratingsView;
@property(nonatomic) __weak MRTPropertyMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak MRTStyledButton *hotelAlertMoreButton; // @synthesize hotelAlertMoreButton=_hotelAlertMoreButton;
@property(nonatomic) __weak MRTStyledLabel *hotelAlertLabel; // @synthesize hotelAlertLabel=_hotelAlertLabel;
@property(nonatomic) __weak MRTStyledLabel *hotelNameLabel; // @synthesize hotelNameLabel=_hotelNameLabel;
@property(nonatomic) __weak MRTStyledLabel *ratingValueLabel; // @synthesize ratingValueLabel=_ratingValueLabel;
@property(nonatomic) __weak UIImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(nonatomic) __weak UIView *galleryContainerView; // @synthesize galleryContainerView=_galleryContainerView;
@property(retain, nonatomic) MRTPropertyRoom *propertyRoom; // @synthesize propertyRoom=_propertyRoom;
@property(retain, nonatomic) MRTImageGalleryViewController *galleryController; // @synthesize galleryController=_galleryController;
@property(nonatomic) __weak MRTPropertyRoomsResultsViewController *propertyRoomsDelegate; // @synthesize propertyRoomsDelegate=_propertyRoomsDelegate;
@property(retain, nonatomic) MRTBookingParametersItem *searchParams; // @synthesize searchParams=_searchParams;
@property(copy, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
- (void).cxx_destruct;
- (id)showMoreString;
- (id)showLessString;
- (void)mapViewTapped:(id)arg1 property:(id)arg2;
- (void)mapWrapperView:(id)arg1 willDisplayMapView:(id)arg2;
- (void)categoryButtonTapped:(id)arg1;
- (void)reviewsButtonPressed:(id)arg1;
- (void)hotelAlertLessButtonClicked;
- (void)hotelAlertMoreButtonClicked;
- (_Bool)willAlertTextFitLabel;
- (void)setRatingsWithInfo:(id)arg1;
- (void)updateUI;
- (struct CGRect)imageGalleryViewRect;
- (void)imageGalleryTappedAtIndex:(long long)arg1 afterSwipes:(long long)arg2;
- (id)analyticsPageName;
- (void)setProperty:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

