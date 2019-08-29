//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BVDelegate-Protocol.h"

@class MRTBookingParametersItem, MRTPropertiesRoomsSearchRequest, MRTRequestor, NSArray, NSString;

@interface MRTPropertySearchResultsController : NSObject <BVDelegate>
{
    MRTPropertiesRoomsSearchRequest *_currentRequest;
    _Bool _requesting;
    NSArray *_properties;
    NSArray *_allProperties;
    NSArray *_sectionTitles;
    MRTBookingParametersItem *_bookingParametersItem;
    MRTRequestor *_server;
    CDUnknownBlockType _bVCompletionBlock;
    NSArray *_sectionedProperties;
}

@property(copy, nonatomic) NSArray *sectionedProperties; // @synthesize sectionedProperties=_sectionedProperties;
@property(copy, nonatomic) CDUnknownBlockType bVCompletionBlock; // @synthesize bVCompletionBlock=_bVCompletionBlock;
@property(retain, nonatomic) MRTRequestor *server; // @synthesize server=_server;
@property(retain, nonatomic) MRTBookingParametersItem *bookingParametersItem; // @synthesize bookingParametersItem=_bookingParametersItem;
@property(copy, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(copy, nonatomic) NSArray *allProperties; // @synthesize allProperties=_allProperties;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic, getter=isRequesting) _Bool requesting; // @synthesize requesting=_requesting;
- (void).cxx_destruct;
- (void)populateStatisticsTaskWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllProperties;
- (id)titleForSection:(unsigned long long)arg1;
- (id)objectInPropertiesAtIndex:(unsigned long long)arg1;
- (id)objectInSectionedPropertiesAtIndexPath:(id)arg1;
- (unsigned long long)countOfTotalCurrentProperties;
- (unsigned long long)countOfPropertiesInSection:(unsigned long long)arg1;
- (unsigned long long)countOfSections;
- (void)performLowestAvailableRateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performPropertiesSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)propertiesSearchFailed:(id)arg1;
- (void)lowestAvailableRateFailed:(id)arg1;
- (void)filterPropertiesWithPredicate:(id)arg1;
- (void)sortProperties:(id)arg1 sortType:(unsigned long long)arg2;
- (id)propertiesPerAmenityFilterCode;
- (void)logAmenityFilterData;
- (void)filterProperties;
- (void)searchSucceeded:(id)arg1 sortType:(unsigned long long)arg2;
- (void)lowestAvailableRateSucceededWithResponse:(id)arg1 sortType:(unsigned long long)arg2;
- (void)propertiesSearchSucceeded:(id)arg1 sortType:(unsigned long long)arg2;
@property(readonly, nonatomic) MRTPropertiesRoomsSearchRequest *lastRequest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
