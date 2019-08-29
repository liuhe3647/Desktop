//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BVResponse-Protocol.h"

@class BVStore, NSArray, NSNumber, NSString;

@interface BVStoreReviewsResponse : NSObject <BVResponse>
{
    NSNumber *_offset;
    NSString *_locale;
    NSArray *_results;
    BVStore *_store;
    NSNumber *_totalResults;
    NSNumber *_limit;
}

@property(retain) NSNumber *limit; // @synthesize limit=_limit;
@property(retain) NSNumber *totalResults; // @synthesize totalResults=_totalResults;
@property(retain) BVStore *store; // @synthesize store=_store;
@property(retain) NSArray *results; // @synthesize results=_results;
@property(retain) NSString *locale; // @synthesize locale=_locale;
@property(retain) NSNumber *offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)extractStoreFromIncludes:(id)arg1;
- (id)initWithApiResponse:(id)arg1;

@end

