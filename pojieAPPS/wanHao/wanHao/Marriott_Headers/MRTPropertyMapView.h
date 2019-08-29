//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MKMapViewDelegate-Protocol.h"

@class MRTMapWrapperView, MRTProperty, MRTPropertyMapAnnotation, MRTStyledButton, MRTStyledLabel, NSString;
@protocol MRTMapViewDelegate;

@interface MRTPropertyMapView : UIView <MKMapViewDelegate>
{
    id <MRTMapViewDelegate> _delegate;
    MRTMapWrapperView *_mapWrapperView;
    MRTProperty *_property;
    MRTStyledButton *_propertyPhoneNumberButton;
    MRTStyledLabel *_propertyAddressLabel;
    MRTPropertyMapAnnotation *_annotation;
    UIView *_propertyMapView;
    UIView *_propertyInfoBackgroundView;
    double _neededHeightConstant;
}

@property(nonatomic) double neededHeightConstant; // @synthesize neededHeightConstant=_neededHeightConstant;
@property(nonatomic) __weak UIView *propertyInfoBackgroundView; // @synthesize propertyInfoBackgroundView=_propertyInfoBackgroundView;
@property(retain, nonatomic) UIView *propertyMapView; // @synthesize propertyMapView=_propertyMapView;
@property(retain, nonatomic) MRTPropertyMapAnnotation *annotation; // @synthesize annotation=_annotation;
@property(nonatomic) __weak MRTStyledLabel *propertyAddressLabel; // @synthesize propertyAddressLabel=_propertyAddressLabel;
@property(nonatomic) __weak MRTStyledButton *propertyPhoneNumberButton; // @synthesize propertyPhoneNumberButton=_propertyPhoneNumberButton;
@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(nonatomic) __weak MRTMapWrapperView *mapWrapperView; // @synthesize mapWrapperView=_mapWrapperView;
@property(nonatomic) __weak id <MRTMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callButtonPressed:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapTapped:(id)arg1;
- (void)addressLongPress:(id)arg1;
- (void)addPropertyAnnotation:(id)arg1 annotationsAnimated:(_Bool)arg2;
- (void)updateAccessibility;
- (void)configureMap;
- (void)addAddressGestureRecognizers;
- (void)updateMapViewWithProperty:(id)arg1 annotationsAnimated:(_Bool)arg2;
- (void)fadeMapInWithAnnotationsAnimated:(_Bool)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

