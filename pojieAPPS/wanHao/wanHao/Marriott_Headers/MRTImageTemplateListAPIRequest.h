//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIRequest.h"

@class NSString;

@interface MRTImageTemplateListAPIRequest : MRTAPIRequest
{
    NSString *_urlString;
}

@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)baseURL;
- (id)init;

@end

