//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRTRoomInformation;

@interface MRTDigitalKeyFlowController : NSObject
{
    MRTRoomInformation *_roomInformation;
}

+ (id)openAttemptsKeyWithConfirmationNumber:(id)arg1;
+ (_Bool)hasAttemptedOpenForConfirmationNumber:(id)arg1;
+ (void)resetOpenAttemptsForConfirmationNumber:(id)arg1;
+ (void)addOpenAttemptForConfirmationNumber:(id)arg1;
+ (id)successfulOpenAttemptsKeyWithConfirmationNumber:(id)arg1;
+ (_Bool)shouldDisplayDigitalKeySectionForConfirmationNumber:(id)arg1;
+ (void)resetSuccessfulAttemptsForConfirmationNumber:(id)arg1;
+ (void)addSuccessfulAttemptForConfirmationNumber:(id)arg1;
@property(retain, nonatomic) MRTRoomInformation *roomInformation; // @synthesize roomInformation=_roomInformation;
- (void).cxx_destruct;
- (_Bool)containsKeyPrint;
- (_Bool)containsDigitalKey;
- (void)stopKeyPrint;
- (void)printDigitalKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopUnlockDoor;
- (void)reportMobileKeyUsedForReservation:(id)arg1 startTime:(id)arg2 lockInfo:(id)arg3 error:(id)arg4;
- (void)unlockDoor:(CDUnknownBlockType)arg1;
- (void)postKeyPrintWithPrintStatus:(id)arg1 andPrinterStatus:(id)arg2 printerUUID:(id)arg3;
- (void)postKeyUsedWithReservation:(id)arg1;
- (id)initWithRoomInformation:(id)arg1;

@end

