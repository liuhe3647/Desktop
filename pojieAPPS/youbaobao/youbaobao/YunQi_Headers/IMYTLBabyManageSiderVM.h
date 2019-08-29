//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RACSubject;

@interface IMYTLBabyManageSiderVM : NSObject
{
    _Bool _showHucaiPrint;
    long long _status;
    NSString *_hucaiPrintUrlString;
    NSString *_hucaiPrintText;
    NSMutableArray *_datas;
    RACSubject *_dataChangeInnerSignal;
}

@property(retain, nonatomic) RACSubject *dataChangeInnerSignal; // @synthesize dataChangeInnerSignal=_dataChangeInnerSignal;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) NSString *hucaiPrintText; // @synthesize hucaiPrintText=_hucaiPrintText;
@property(retain, nonatomic) NSString *hucaiPrintUrlString; // @synthesize hucaiPrintUrlString=_hucaiPrintUrlString;
@property(nonatomic) _Bool showHucaiPrint; // @synthesize showHucaiPrint=_showHucaiPrint;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)clearUnreadMsg:(id)arg1;
- (long long)myTotalBabyCount;
- (id)modelForIndexpath:(id)arg1;
- (long long)numberOfRowsInSection;
- (id)dataChangeSignal;
- (_Bool)checkHucaiPrint;
- (void)resetStatus;
- (void)loadNetDatas;
- (void)loadLocalDatas;
- (void)loadDatas;

@end

