//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRTProperty, NSArray, NSString;

@interface MRTPropertyImageDataController : NSObject
{
    _Bool _fetching;
    NSString *_propertyID;
    NSArray *_mediaItems;
    MRTProperty *_property;
}

@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(nonatomic, getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
@property(copy, nonatomic) NSString *propertyID; // @synthesize propertyID=_propertyID;
- (void).cxx_destruct;
- (id)objectInMediaItemsAtIndex:(long long)arg1;
- (long long)countOfMediaItems;
- (void)performMediaRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)primaryImageMediaItems;
- (id)init;
- (id)initWithProperty:(id)arg1;

@end
