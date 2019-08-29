//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LegicBleLibDelegate-Protocol.h"

@class BleLib, LegicBlePluginBLECommandProcessor, NSMutableDictionary, NSString, NSTimer, NSUUID;

@interface LegicBlePluginBluetoothManager : NSObject <LegicBleLibDelegate>
{
    int bleCommandCounter;
    LegicBlePluginBLECommandProcessor *bleCommandProcessor;
    NSMutableDictionary *bleConnectionState;
    NSMutableDictionary *bleReadRequests;
    NSTimer *bleConnectionTimer;
    NSUUID *currentSender;
    _Bool activeConnection;
    _Bool allowNewConnection;
    BleLib *_bleLib;
    unsigned long long _usedProjectNr;
}

+ (id)shared;
@property(nonatomic) unsigned long long usedProjectNr; // @synthesize usedProjectNr=_usedProjectNr;
@property(retain, nonatomic) BleLib *bleLib; // @synthesize bleLib=_bleLib;
- (void).cxx_destruct;
- (void)releaseBle;
- (void)disableFileCache:(id)arg1;
- (_Bool)isBleSupported;
- (_Bool)disableProjectWithNumber:(unsigned long long)arg1;
- (_Bool)enableProjectWithNumber:(unsigned long long)arg1;
- (_Bool)removeProjectWithNumber:(unsigned long long)arg1;
- (_Bool)addProjectWithNumber:(unsigned long long)arg1;
- (id)getBLECommandProcessor;
- (void)bleLibDidFailWithError:(id)arg1;
- (void)bleLibDidReceiveData:(id)arg1 projectNr:(unsigned long long)arg2 sender:(id)arg3;
- (void)bleLibDidSendData:(id)arg1 projectNr:(unsigned long long)arg2 receiver:(id)arg3;
- (_Bool)bleLibDidReceiveReadRequestToProject:(unsigned long long)arg1 sender:(id)arg2;
- (void)bleLibDidDisableProjectWithProjectNr:(unsigned long long)arg1;
- (void)bleLibDidEnableProjectWithProjectNr:(unsigned long long)arg1;
- (void)bleLibDidUpdateState:(unsigned long long)arg1;
- (void)setConnectionState:(int)arg1 forProjectNr:(unsigned long long)arg2;
- (int)getConnectionState:(unsigned long long)arg1;
- (_Bool)isCommunicationDone:(unsigned long long)arg1;
- (void)sendData:(id)arg1;
- (void)startBLECommunication;
- (void)connectionTimerFired;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
