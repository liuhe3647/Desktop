//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBPeripheralDelegate-Protocol.h"

@class CBCentralManager, CBCharacteristic, CBPeripheral, CBService, NSArray, NSData, NSDictionary, NSMutableArray, NSString;
@protocol MRTKeyStationDelegate;

@interface MRTKeyStation : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *_centralManager;
    CBPeripheral *_peripheral;
    CBService *_service;
    CBCharacteristic *_blobCharacteristic;
    CBCharacteristic *_commandCharacteristic;
    CBCharacteristic *_challengeCharacteristic;
    CBCharacteristic *_responseCharacteristic;
    CBCharacteristic *_statusCharacteristic;
    CBCharacteristic *_propertyIdCharacteristic;
    CBCharacteristic *_printerIdCharacteristic;
    long long _centralManagerState;
    NSArray *_serviceUUIDs;
    NSDictionary *_connectOptions;
    NSString *_propertyIdConstraint;
    NSString *_printerID;
    unsigned long long _keyStationStatus;
    NSString *_payloadData;
    NSMutableArray *_payloadArray;
    unsigned long long _expectedSegments;
    unsigned long long _blobSegmentWrites;
    _Bool _canAttemptPrint;
    NSData *_sessionTokenData;
    NSString *_printRequestStatus;
    NSString *_printerUniqueIdentifier;
    NSString *_status;
    double _epoch;
    id <MRTKeyStationDelegate> _delegate;
}

+ (id)characteristicArray;
+ (id)sharedManager;
@property(nonatomic) _Bool canAttemptPrint; // @synthesize canAttemptPrint=_canAttemptPrint;
@property(nonatomic) __weak id <MRTKeyStationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double epoch; // @synthesize epoch=_epoch;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *printerUniqueIdentifier; // @synthesize printerUniqueIdentifier=_printerUniqueIdentifier;
@property(retain, nonatomic) NSString *printRequestStatus; // @synthesize printRequestStatus=_printRequestStatus;
@property(retain, nonatomic) NSData *sessionTokenData; // @synthesize sessionTokenData=_sessionTokenData;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)setKeyStationStatusForTransactionStatus:(id)arg1 andPrinterStatus:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)everestLoggingDictionaryForAction:(id)arg1 actionStatus:(id)arg2 withStatusCode:(id)arg3;
- (void)logToEverestForType:(unsigned long long)arg1 additionalInfo:(id)arg2;
- (void)makeDataPayloadSegments:(id)arg1;
- (void)createKeyPayloadArray:(id)arg1;
- (void)printKey:(id)arg1 withSessionKey:(id)arg2;
- (_Bool)isCharacteristicReadable:(id)arg1;
- (_Bool)isCharacteristicWriteable:(id)arg1;
- (void)registerCharacteristicForNotify:(id)arg1;
- (void)bluetoothErrorWithType:(unsigned long long)arg1 error:(id)arg2;
- (void)log:(id)arg1;
- (void)reset;
- (void)stopScanning;
- (void)startScanningForPeripheralsWithServices:(id)arg1 propertyIdConstraint:(id)arg2 options:(id)arg3;
- (void)startScanningWithPropertyIdConstraint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

