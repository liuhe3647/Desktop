//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTRemoteImage, NSDate, NSString, NSURL, UIColor;

@interface MRTMarketingPageTemplate : MRTObject
{
    _Bool _defaultTemplate;
    _Bool _isGuardrailsOffer;
    _Bool _shouldShowServiceRequestBadge;
    MRTRemoteImage *_image;
    NSString *_baseImagePropertyIdentifier;
    NSString *_imageName;
    UIColor *_keyColor;
    NSString *_keyColorHexString;
    UIColor *_secondaryKeyColor;
    NSString *_secondaryKeyColorHexString;
    UIColor *_gradientColor;
    NSString *_gradientColorHexString;
    double _gradientOpacity;
    NSString *_promoBoxPositionLandscape;
    NSString *_promoBoxPositionPortrait;
    double _promoBoxWidthRatioLandscape;
    double _promoBoxWidthRatioPortrait;
    NSString *_headlineText;
    NSString *_bodyText;
    NSString *_callToActionImageName;
    NSString *_callToActionText;
    NSURL *_callToActionDestinationURL;
    NSString *_callToActionDestinationURLTemplate;
    NSString *_metaTags;
    NSString *_guardrailsEventInfo;
    NSString *_analyticsName;
    NSString *_category;
    NSString *_domainName;
    NSString *_creditAmountString;
    unsigned long long _formatHint;
    NSDate *_usageRightsExpirationDate;
    NSDate *_offerExpirationDate;
}

@property(nonatomic) _Bool shouldShowServiceRequestBadge; // @synthesize shouldShowServiceRequestBadge=_shouldShowServiceRequestBadge;
@property(nonatomic) _Bool isGuardrailsOffer; // @synthesize isGuardrailsOffer=_isGuardrailsOffer;
@property(retain, nonatomic) NSDate *offerExpirationDate; // @synthesize offerExpirationDate=_offerExpirationDate;
@property(retain, nonatomic) NSDate *usageRightsExpirationDate; // @synthesize usageRightsExpirationDate=_usageRightsExpirationDate;
@property(nonatomic) unsigned long long formatHint; // @synthesize formatHint=_formatHint;
@property(copy, nonatomic) NSString *creditAmountString; // @synthesize creditAmountString=_creditAmountString;
@property(copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *analyticsName; // @synthesize analyticsName=_analyticsName;
@property(copy, nonatomic) NSString *guardrailsEventInfo; // @synthesize guardrailsEventInfo=_guardrailsEventInfo;
@property(copy, nonatomic) NSString *metaTags; // @synthesize metaTags=_metaTags;
@property(copy, nonatomic) NSString *callToActionDestinationURLTemplate; // @synthesize callToActionDestinationURLTemplate=_callToActionDestinationURLTemplate;
@property(retain, nonatomic) NSURL *callToActionDestinationURL; // @synthesize callToActionDestinationURL=_callToActionDestinationURL;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *callToActionImageName; // @synthesize callToActionImageName=_callToActionImageName;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(copy, nonatomic) NSString *headlineText; // @synthesize headlineText=_headlineText;
@property(nonatomic) double promoBoxWidthRatioPortrait; // @synthesize promoBoxWidthRatioPortrait=_promoBoxWidthRatioPortrait;
@property(nonatomic) double promoBoxWidthRatioLandscape; // @synthesize promoBoxWidthRatioLandscape=_promoBoxWidthRatioLandscape;
@property(copy, nonatomic) NSString *promoBoxPositionPortrait; // @synthesize promoBoxPositionPortrait=_promoBoxPositionPortrait;
@property(copy, nonatomic) NSString *promoBoxPositionLandscape; // @synthesize promoBoxPositionLandscape=_promoBoxPositionLandscape;
@property(nonatomic) double gradientOpacity; // @synthesize gradientOpacity=_gradientOpacity;
@property(copy, nonatomic) NSString *gradientColorHexString; // @synthesize gradientColorHexString=_gradientColorHexString;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
@property(copy, nonatomic) NSString *secondaryKeyColorHexString; // @synthesize secondaryKeyColorHexString=_secondaryKeyColorHexString;
@property(retain, nonatomic) UIColor *secondaryKeyColor; // @synthesize secondaryKeyColor=_secondaryKeyColor;
@property(copy, nonatomic) NSString *keyColorHexString; // @synthesize keyColorHexString=_keyColorHexString;
@property(retain, nonatomic) UIColor *keyColor; // @synthesize keyColor=_keyColor;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *baseImagePropertyIdentifier; // @synthesize baseImagePropertyIdentifier=_baseImagePropertyIdentifier;
@property(retain, nonatomic) MRTRemoteImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isDefaultTemplate) _Bool defaultTemplate; // @synthesize defaultTemplate=_defaultTemplate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *baseImageURLString;
@property(nonatomic) struct CGSize baseImageSize;
- (void)setBaseImageHeight:(double)arg1;
- (void)setBaseImageWidth:(double)arg1;
@property(nonatomic) struct CGPoint baseImageFocalPoint;
- (void)setBaseImageFocalPointY:(double)arg1;
- (void)setBaseImageFocalPointX:(double)arg1;
- (_Bool)isKeyDeserializationWarningIgnored:(id)arg1;
- (id)init;

@end

