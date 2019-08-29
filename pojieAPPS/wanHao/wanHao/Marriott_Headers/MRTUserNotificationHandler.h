//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRTUserNotificationHandler-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MRTUserNotificationHandler : NSObject <MRTUserNotificationHandler>
{
    NSMutableDictionary *_notificationActionsDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *notificationActionsDictionary; // @synthesize notificationActionsDictionary=_notificationActionsDictionary;
- (void).cxx_destruct;
- (void)fetchDetailedStay:(id)arg1 notification:(id)arg2;
- (void)removeAlternateActionForNotificationType:(unsigned long long)arg1;
- (_Bool)hasAlternateActionForNotificationType:(unsigned long long)arg1;
- (void)addAlternateAction:(CDUnknownBlockType)arg1 forNotificationType:(unsigned long long)arg2;
- (CDUnknownBlockType)alternateActionForNotificationType:(unsigned long long)arg1;
- (void)handleInvalidNotification:(id)arg1;
- (void)presentView:(id)arg1 reservation:(id)arg2;
- (void)handleProactiveServiceRecoveryNotification:(id)arg1 reservation:(id)arg2;
- (void)handleChatNotification:(id)arg1 reservation:(id)arg2;
- (void)handleComplimentaryUpgradeAndPrintRoomReadyNotification:(id)arg1 reservation:(id)arg2;
- (void)handleComplimentaryUpgradeAndMobileRoomReadyNotification:(id)arg1 reservation:(id)arg2;
- (void)handleRoomReadyAndPrintKeyNotification:(id)arg1 reservation:(id)arg2;
- (void)handleRoomReadyAndMobileKeyNotification:(id)arg1 reservation:(id)arg2;
- (void)handleComplimentaryUpgradeNotification:(id)arg1 reservation:(id)arg2;
- (void)handleRoomReadyNotification:(id)arg1 reservation:(id)arg2;
- (void)handleCheckOutNotification:(id)arg1 reservation:(id)arg2;
- (void)handleCheckInNotification:(id)arg1 reservation:(id)arg2;
- (void)handleSuiteNightAwardNotification:(id)arg1 reservation:(id)arg2;
- (void)handleDeepLinkNotification:(id)arg1 reservation:(id)arg2;
- (void)handleNotification:(id)arg1 reservation:(id)arg2;
- (void)handleNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
