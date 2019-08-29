//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BVLocationEventsHelper : NSObject
{
}

+ (void)didUpdateLocation:(id)arg1;
+ (void)didRangeBeacon:(id)arg1 inRegion:(id)arg2 location:(id)arg3;
+ (void)didVisit:(id)arg1 location:(id)arg2;
+ (void)didExitRegion:(id)arg1 location:(id)arg2;
+ (void)didEnterRegion:(id)arg1 location:(id)arg2;
+ (id)getBeaconParams:(id)arg1 forRegion:(id)arg2;
+ (id)getVisitParams:(id)arg1;
+ (id)getGeofenceParams:(id)arg1;
+ (id)getLocationParams:(id)arg1;
+ (void)gimbalPlaceVisit:(id)arg1 isBegin:(_Bool)arg2;
+ (void)gimbalPlaceEndVisit:(id)arg1;
+ (void)gimbalPlaceBeginVisit:(id)arg1;
+ (void)gimbalSighting:(id)arg1 forVisit:(id)arg2;
+ (void)gimbalSighting:(id)arg1;
+ (id)dictForSighting:(id)arg1;
+ (id)dictForVisit:(id)arg1;
+ (void)gimbalBeaconSightingForVisits:(long long)arg1 date:(id)arg2 beaconIdentifier:(id)arg3 beaconName:(id)arg4 arrivalDate:(id)arg5 dwellTime:(double)arg6 departureDate:(id)arg7 visitIdentifier:(id)arg8 visitName:(id)arg9 contextualTier1:(struct NSString *)arg10 contextualTier2:(struct NSString *)arg11;
+ (void)gimbalPlaceEndVisit:(id)arg1 dwellTime:(double)arg2 departureDate:(id)arg3 identifier:(id)arg4 name:(id)arg5 contextualTier1:(struct NSString *)arg6 contextualTier2:(struct NSString *)arg7;
+ (void)gimbalPlaceBeginVisit:(id)arg1 dwellTime:(double)arg2 departureDate:(id)arg3 identifier:(id)arg4 name:(id)arg5 contextualTier1:(struct NSString *)arg6 contextualTier2:(struct NSString *)arg7;
+ (void)gimbalBeaconSighting:(long long)arg1 date:(id)arg2 identifier:(id)arg3 name:(id)arg4 contextualTier1:(struct NSString *)arg5 contextualTier2:(struct NSString *)arg6;
+ (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2 contextualTier1:(struct NSString *)arg3 contextualTier2:(struct NSString *)arg4;
+ (void)locationManager:(id)arg1 didRangeBeacon:(id)arg2 inRegion:(id)arg3 contextualTier1:(struct NSString *)arg4 contextualTier2:(struct NSString *)arg5;
+ (void)locationManager:(id)arg1 didVisit:(id)arg2 contextualTier1:(struct NSString *)arg3 contextualTier2:(struct NSString *)arg4;
+ (void)locationManager:(id)arg1 didExitRegion:(id)arg2 contextualTier1:(struct NSString *)arg3 contextualTier2:(struct NSString *)arg4;
+ (void)locationManager:(id)arg1 didEnterRegion:(id)arg2 contextualTier1:(struct NSString *)arg3 contextualTier2:(struct NSString *)arg4;

@end

