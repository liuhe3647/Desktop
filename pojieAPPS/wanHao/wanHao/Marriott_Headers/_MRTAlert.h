//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTManagedObject.h"

@class MRTAlertID, MRTProperty, NSDate, NSString;

@interface _MRTAlert : MRTManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) MRTAlertID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *endDate; // @dynamic endDate;
@property(retain, nonatomic) MRTProperty *property; // @dynamic property;
@property(retain, nonatomic) NSString *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSDate *timeCreated; // @dynamic timeCreated;
@property(retain, nonatomic) NSDate *timeUpdated; // @dynamic timeUpdated;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

