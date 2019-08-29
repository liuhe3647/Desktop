//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MRTHotelFitnessViewModel : NSObject
{
    _Bool _fitnessDescriptionHidden;
    _Bool _moreDetailsButtonHidden;
    _Bool _websitePhoneViewHidden;
    _Bool _websiteButtonHidden;
    _Bool _phoneButtonHidden;
    _Bool _websitePhoneDividerHidden;
    NSString *_name;
    NSString *_location;
    NSString *_fitnessDescription;
    NSString *_moreDetailsButtonTitle;
    NSArray *_details;
    NSURL *_websiteURL;
    NSString *_websiteButtonTitle;
    NSString *_phoneButtonTitle;
}

@property(copy, nonatomic) NSString *phoneButtonTitle; // @synthesize phoneButtonTitle=_phoneButtonTitle;
@property(copy, nonatomic) NSString *websiteButtonTitle; // @synthesize websiteButtonTitle=_websiteButtonTitle;
@property(nonatomic, getter=isWebsitePhoneDividerHidden) _Bool websitePhoneDividerHidden; // @synthesize websitePhoneDividerHidden=_websitePhoneDividerHidden;
@property(nonatomic, getter=isPhoneButtonHidden) _Bool phoneButtonHidden; // @synthesize phoneButtonHidden=_phoneButtonHidden;
@property(nonatomic, getter=isWebsiteButtonHidden) _Bool websiteButtonHidden; // @synthesize websiteButtonHidden=_websiteButtonHidden;
@property(nonatomic, getter=isWebsitePhoneViewHidden) _Bool websitePhoneViewHidden; // @synthesize websitePhoneViewHidden=_websitePhoneViewHidden;
@property(copy, nonatomic) NSURL *websiteURL; // @synthesize websiteURL=_websiteURL;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(copy, nonatomic) NSString *moreDetailsButtonTitle; // @synthesize moreDetailsButtonTitle=_moreDetailsButtonTitle;
@property(nonatomic, getter=isMoreDetailsButtonHidden) _Bool moreDetailsButtonHidden; // @synthesize moreDetailsButtonHidden=_moreDetailsButtonHidden;
@property(nonatomic, getter=isFitnessDescriptionHidden) _Bool fitnessDescriptionHidden; // @synthesize fitnessDescriptionHidden=_fitnessDescriptionHidden;
@property(copy, nonatomic) NSString *fitnessDescription; // @synthesize fitnessDescription=_fitnessDescription;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)locationFromOnProperty:(_Bool)arg1 distanceInMeters:(id)arg2;
- (id)featuresFromPool:(id)arg1;
- (id)detailsFromPool:(id)arg1;
- (id)featuresFromFitnessCenter:(id)arg1;
- (id)detailsFromFitnessCenter:(id)arg1;
- (id)initWithPool:(id)arg1;
- (id)initWithFitnessCenter:(id)arg1;

@end

