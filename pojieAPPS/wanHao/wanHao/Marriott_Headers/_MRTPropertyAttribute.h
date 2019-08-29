//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTManagedObject.h"

@class MRTProperty, MRTPropertyAttributeID, NSDate, NSNumber, NSString;

@interface _MRTPropertyAttribute : MRTManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveSortValue:(short)arg1;
- (short)primitiveSortValue;
@property short sortValue;
- (void)setPrimitiveFeeNonRefundableValue:(_Bool)arg1;
- (_Bool)primitiveFeeNonRefundableValue;
@property _Bool feeNonRefundableValue;
- (void)setPrimitiveFeeValue:(double)arg1;
- (double)primitiveFeeValue;
@property double feeValue;
@property(readonly, nonatomic) MRTPropertyAttributeID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *attribute; // @dynamic attribute;
@property(retain, nonatomic) NSString *attributeDescription; // @dynamic attributeDescription;
@property(retain, nonatomic) NSNumber *fee; // @dynamic fee;
@property(retain, nonatomic) NSNumber *feeNonRefundable; // @dynamic feeNonRefundable;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) MRTProperty *property; // @dynamic property;
@property(retain, nonatomic) NSNumber *sort; // @dynamic sort;
@property(retain, nonatomic) NSDate *timeCreated; // @dynamic timeCreated;
@property(retain, nonatomic) NSDate *timeUpdated; // @dynamic timeUpdated;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

