//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRTPropertySort : NSObject
{
}

- (void)groupPropertyRooms:(id)arg1 sortType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)titleForPropertyRoom:(id)arg1 sortType:(unsigned long long)arg2;
- (id)analyticsKeyForSortType:(unsigned long long)arg1;
- (unsigned long long)sortTypeForBookingItem:(id)arg1;
- (id)allowableSortTypesForBookingItem:(id)arg1;
- (unsigned long long)propertySearchLimit;
- (id)parameterForSortType:(unsigned long long)arg1;
- (id)titleForSortType:(unsigned long long)arg1;
- (id)sortOptionsTitle;
- (id)sortOptionsCloseTitle;
- (id)sortByRatingTitle;
- (id)sortByCityTitle;
- (id)sortByBrandTitle;
- (id)sortByPointsTitle;
- (id)sortByPriceTitle;
- (id)sortByDistanceTitle;

@end

