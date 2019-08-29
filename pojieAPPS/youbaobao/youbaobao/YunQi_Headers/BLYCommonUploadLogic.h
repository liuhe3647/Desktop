//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYAbstractLogic.h"

@class BLYHttpRequest, BLYJceObjectV2, BLYResponsePkg, NSData;

@interface BLYCommonUploadLogic : BLYAbstractLogic
{
    _Bool _isExcuting;
    BLYJceObjectV2 *_jceModel;
    NSData *_requestData;
    BLYHttpRequest *_httpRequest;
    BLYResponsePkg *_responsePakage;
}

@property(nonatomic) _Bool isExcuting; // @synthesize isExcuting=_isExcuting;
@property(retain, nonatomic) BLYResponsePkg *responsePakage; // @synthesize responsePakage=_responsePakage;
@property(retain, nonatomic) BLYHttpRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) BLYJceObjectV2 *jceModel; // @synthesize jceModel=_jceModel;
- (void).cxx_destruct;
- (id)requestUrlString;
- (id)requestReservedInfo;
- (void)reportSuccessed:(_Bool)arg1;
- (void)persistentSuccessed:(_Bool)arg1;
- (void)main;
- (void)cancel;
- (id)jceCMDString;
- (_Bool)shouldUpload;
- (_Bool)shouldPersist;
- (id)httpHeaderField;
- (long long)persistType;
- (id)persistFileKey;
- (void)handleResponseData:(id)arg1;
- (CDUnknownBlockType)compeletionHandler;

@end

