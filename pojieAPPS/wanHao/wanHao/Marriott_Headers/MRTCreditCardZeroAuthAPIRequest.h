//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@interface MRTCreditCardZeroAuthAPIRequest : MRTAPIV2Request
{
}

- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)zeroAuthorizationFormatForExpiryDate:(id)arg1;
- (id)initWithCreditCard:(id)arg1 property:(id)arg2;

@end

