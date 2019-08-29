//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class MRTBrand, MRTPlacemark, NSArray, NSString;

@interface MRTSearchLocation : NSObject <NSSecureCoding>
{
    _Bool _currentLocation;
    NSString *_type;
    NSString *_text;
    NSString *_identifier;
    MRTBrand *_brand;
    MRTPlacemark *_placemark;
    NSArray *_propertyIdentifiers;
    NSString *_completionIdentifier;
}

+ (id)locationWithCountry:(id)arg1;
+ (id)locationForSavedProperty:(id)arg1;
+ (id)locationForStubProperty:(id)arg1;
+ (id)locationForProperty:(id)arg1;
+ (id)locationWithPropertyIdentifiers:(id)arg1 name:(id)arg2;
+ (id)currentLocationSearchLocation;
+ (id)currentLocationString;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *completionIdentifier; // @synthesize completionIdentifier=_completionIdentifier;
@property(retain, nonatomic) NSArray *propertyIdentifiers; // @synthesize propertyIdentifiers=_propertyIdentifiers;
@property(retain, nonatomic) MRTPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) MRTBrand *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic, getter=isCurrentLocation) _Bool currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (_Bool)isRecentlyViewedSearch;
- (_Bool)needsDetailFetch;
- (_Bool)isSingleSavedPropertySearch;
- (_Bool)isUnupdatedCurrentLocationSearch;
- (_Bool)isEqualToType:(id)arg1;
- (_Bool)isPointOfInterestSearch;
- (_Bool)isSavedPropertiesSearch;
- (_Bool)isPropertiesSearch;
- (_Bool)isHotelSearch;
- (_Bool)isCountrySearch;
- (_Bool)hasOnlyCountryAndState;
- (_Bool)isCitySearch;
- (_Bool)isAirportSearch;
- (_Bool)isNearbyForTonightSearch;
- (id)description;
- (void)pauseLocationFetching;
- (void)restartLocationFetching;
- (id)iconForType;
- (_Bool)isSameCoordinatesAsLocation:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentLocation:(_Bool)arg1;
- (id)init;
- (void)updateWithLocation:(id)arg1;

@end

