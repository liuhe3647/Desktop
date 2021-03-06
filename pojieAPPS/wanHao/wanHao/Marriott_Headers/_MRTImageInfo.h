//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTManagedObject.h"

@class MRTBrand, MRTImageInfoID, MRTProperty, NSDate, NSNumber, NSSet, NSString;

@interface _MRTImageInfo : MRTManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)roomTypesSet;
- (id)imagesSet;
- (void)setPrimitiveOrderValue:(long long)arg1;
- (long long)primitiveOrderValue;
@property long long orderValue;
@property(readonly, nonatomic) MRTImageInfoID *objectID;

// Remaining properties
@property(retain, nonatomic) MRTBrand *brand; // @dynamic brand;
@property(retain, nonatomic) NSString *caption; // @dynamic caption;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSSet *images; // @dynamic images;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *order; // @dynamic order;
@property(retain, nonatomic) MRTProperty *parentProperty; // @dynamic parentProperty;
@property(retain, nonatomic) MRTProperty *property; // @dynamic property;
@property(retain, nonatomic) NSString *roomIdentifiers; // @dynamic roomIdentifiers;
@property(retain, nonatomic) NSSet *roomTypes; // @dynamic roomTypes;
@property(retain, nonatomic) NSDate *timeCreated; // @dynamic timeCreated;
@property(retain, nonatomic) NSDate *timeUpdated; // @dynamic timeUpdated;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

