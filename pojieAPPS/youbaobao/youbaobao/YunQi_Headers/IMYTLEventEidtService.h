//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYTLEidtEventService-Protocol.h"

@class NSString;

@interface IMYTLEventEidtService : NSObject <IMYTLEidtEventService>
{
}

+ (id)editEventWhithEventId:(long long)arg1 takenDate:(double)arg2 title:(id)arg3 rule:(long long)arg4 markId:(long long)arg5 markName:(id)arg6 deleteTimelines:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

