//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAFNetworkingRequestGateway.h"

@interface MRTSalesforceRequestGateway : MRTAFNetworkingRequestGateway
{
}

- (id)additionalInfoForError:(id)arg1 operation:(id)arg2 request:(id)arg3;
- (void)startSalesforceTokenGetWithFlush:(_Bool)arg1 request:(id)arg2;
- (_Bool)operationResponseIndicatesInvalidSalesforceToken:(id)arg1;
- (void)requestDidFail:(id)arg1 operation:(id)arg2 error:(id)arg3;
- (void)processAPIRequest:(id)arg1;
- (_Bool)canHandleAPIRequest:(id)arg1;

@end

