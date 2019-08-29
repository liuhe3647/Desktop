//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRTKeyManagerDelegate-Protocol.h"

@class NSOperationQueue, NSString;

@interface MRTKeyContainer : NSObject <MRTKeyManagerDelegate>
{
    long long _keyDownloadType;
    long long _registrationType;
    CDUnknownBlockType _activateVendorCompletionBlock;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType activateVendorCompletionBlock; // @synthesize activateVendorCompletionBlock=_activateVendorCompletionBlock;
@property(nonatomic) long long registrationType; // @synthesize registrationType=_registrationType;
@property(nonatomic) long long keyDownloadType; // @synthesize keyDownloadType=_keyDownloadType;
- (void).cxx_destruct;
- (void)registerAndBindDeviceForReservation:(id)arg1 registrationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bindDeviceToReservation:(id)arg1 registrationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportMobileKeyRegistrationForReservation:(id)arg1 registrationType:(long long)arg2 startTime:(id)arg3 error:(id)arg4;
- (void)registerDeviceForReservation:(id)arg1 registrationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateRoomInformationOnReservation:(id)arg1;
- (long long)keyStatusForReservation:(id)arg1;
- (_Bool)_verifyKeyForReservation:(id)arg1;
- (id)_roomInformationForReservation:(id)arg1;
- (_Bool)_isDigitalKeyDownloadedForReservation:(id)arg1;
- (_Bool)shouldRegisterDeviceForReservation:(id)arg1;
- (_Bool)shouldAutomaticallyRegisterDeviceForReservation:(id)arg1;
- (_Bool)shouldFetchKeyForReservation:(id)arg1;
- (_Bool)isExecutingForOperationType:(long long)arg1 reservation:(id)arg2;
- (void)reportMobileKeyDownloadForReservation:(id)arg1 startTime:(id)arg2 keyDownloadType:(long long)arg3 error:(id)arg4;
- (_Bool)isFetchingKeyForReservation:(id)arg1;
- (void)fetchKeyForReservation:(id)arg1 downloadTypeType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerDeviceDownloadKeyForReservation:(id)arg1 keyDownloadType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
