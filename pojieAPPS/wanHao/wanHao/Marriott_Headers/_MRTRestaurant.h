//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTManagedObject.h"

@class MRTContactInfo, MRTProperty, MRTRestaurantID, NSDate, NSNumber, NSString;

@interface _MRTRestaurant : MRTManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveSuggestedSortOrderValue:(long long)arg1;
- (long long)primitiveSuggestedSortOrderValue;
@property long long suggestedSortOrderValue;
- (void)setPrimitiveReservationRequiredValue:(_Bool)arg1;
- (_Bool)primitiveReservationRequiredValue;
@property _Bool reservationRequiredValue;
- (void)setPrimitiveLunchValue:(_Bool)arg1;
- (_Bool)primitiveLunchValue;
@property _Bool lunchValue;
- (void)setPrimitiveIsOnPropertyValue:(_Bool)arg1;
- (_Bool)primitiveIsOnPropertyValue;
@property _Bool isOnPropertyValue;
- (void)setPrimitiveDistanceFromSearchLocationValue:(long long)arg1;
- (long long)primitiveDistanceFromSearchLocationValue;
@property long long distanceFromSearchLocationValue;
- (void)setPrimitiveDinnerValue:(_Bool)arg1;
- (_Bool)primitiveDinnerValue;
@property _Bool dinnerValue;
- (void)setPrimitiveBreakfastValue:(_Bool)arg1;
- (_Bool)primitiveBreakfastValue;
@property _Bool breakfastValue;
@property(readonly, nonatomic) MRTRestaurantID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *attire; // @dynamic attire;
@property(retain, nonatomic) NSNumber *breakfast; // @dynamic breakfast;
@property(retain, nonatomic) MRTContactInfo *contactInfo; // @dynamic contactInfo;
@property(retain, nonatomic) NSString *cuisine; // @dynamic cuisine;
@property(retain, nonatomic) NSNumber *dinner; // @dynamic dinner;
@property(retain, nonatomic) NSNumber *distanceFromSearchLocation; // @dynamic distanceFromSearchLocation;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *isOnProperty; // @dynamic isOnProperty;
@property(retain, nonatomic) NSNumber *lunch; // @dynamic lunch;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) id operationHours; // @dynamic operationHours;
@property(retain, nonatomic) NSString *priceRange; // @dynamic priceRange;
@property(retain, nonatomic) MRTProperty *property; // @dynamic property;
@property(retain, nonatomic) NSNumber *reservationRequired; // @dynamic reservationRequired;
@property(retain, nonatomic) NSString *reservationURL; // @dynamic reservationURL;
@property(retain, nonatomic) NSString *restaurantDescription; // @dynamic restaurantDescription;
@property(retain, nonatomic) NSString *sittingServed; // @dynamic sittingServed;
@property(retain, nonatomic) NSNumber *suggestedSortOrder; // @dynamic suggestedSortOrder;
@property(retain, nonatomic) NSDate *timeCreated; // @dynamic timeCreated;
@property(retain, nonatomic) NSDate *timeUpdated; // @dynamic timeUpdated;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

