//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AppMonitorEvent, NSDictionary, NSString;

@protocol AppMonitorEventServiceDelegate <NSObject>
- (void)addLogInSdk:(NSDictionary *)arg1 rawPoint:(_Bool)arg2;
- (void)uploadEventForEventId:(NSString *)arg1;
- (void)parseRawEvent:(id)arg1;
- (void)sendRawEvent:(AppMonitorEvent *)arg1;
@end

