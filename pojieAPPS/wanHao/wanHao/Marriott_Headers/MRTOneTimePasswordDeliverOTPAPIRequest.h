//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAPIV2Request.h"

@interface MRTOneTimePasswordDeliverOTPAPIRequest : MRTAPIV2Request
{
}

- (id)maskedEmail:(id)arg1;
- (void)loginRequestFinished:(id)arg1;
- (id)initForSMSDeliveryWithConsumerID:(id)arg1 transactionID:(id)arg2 phoneNumber:(id)arg3;
- (id)initForEmailDeliveryWithConsumerID:(id)arg1 transactionID:(id)arg2 email:(id)arg3;
- (id)initWithDeliveryMethod:(id)arg1 customerID:(id)arg2 transactionID:(id)arg3 maskedValue:(id)arg4;

@end
