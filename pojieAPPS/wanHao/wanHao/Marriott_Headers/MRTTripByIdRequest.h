//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@class NSString;

@interface MRTTripByIdRequest : MRTAPIV2Request
{
    _Bool _shouldIncludeTerms;
    NSString *_tripID;
}

@property(nonatomic) _Bool shouldIncludeTerms; // @synthesize shouldIncludeTerms=_shouldIncludeTerms;
@property(copy, nonatomic) NSString *tripID; // @synthesize tripID=_tripID;
- (void).cxx_destruct;
- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (void)willSendRequest:(id)arg1;
- (id)apiIncludes;
- (id)initWithTripId:(id)arg1 includingTerms:(_Bool)arg2;

@end

