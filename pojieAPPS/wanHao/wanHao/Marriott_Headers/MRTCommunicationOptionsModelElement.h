//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTCommunicationSubscription, NSString;

@interface MRTCommunicationOptionsModelElement : MRTObject
{
    NSString *_headerString;
    NSString *_contentString;
    MRTCommunicationSubscription *_subscription;
}

@property(retain, nonatomic) MRTCommunicationSubscription *subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
- (void).cxx_destruct;

@end

