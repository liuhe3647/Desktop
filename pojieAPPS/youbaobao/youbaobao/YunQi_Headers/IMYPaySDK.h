//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"
#import "WXApiDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WXApiDelegate;

@interface IMYPaySDK : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver, WXApiDelegate>
{
    _Bool _willGoStatePurchasing;
    NSMutableDictionary *_completedBlockMap;
    id <WXApiDelegate> _ebWXApiDelegate;
}

+ (void)registerURIAction;
+ (id)sharedInstance;
+ (void)load;
@property(nonatomic) _Bool willGoStatePurchasing; // @synthesize willGoStatePurchasing=_willGoStatePurchasing;
@property(nonatomic) __weak id <WXApiDelegate> ebWXApiDelegate; // @synthesize ebWXApiDelegate=_ebWXApiDelegate;
@property(retain, nonatomic) NSMutableDictionary *completedBlockMap; // @synthesize completedBlockMap=_completedBlockMap;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (_Bool)payWithWechatParams:(id)arg1;
- (void)postIAPLogWithState:(long long)arg1 product:(id)arg2 transaction:(id)arg3 error:(id)arg4 extends:(id)arg5;
- (void)paymentFailedWithTransaction:(id)arg1;
- (void)writeOutBoxWithReceipt:(id)arg1 forIdentifier:(id)arg2;
- (void)deleteOutBoxWithReceiptIdentifier:(id)arg1;
- (void)sendReceiptOutBox;
- (void)paymentPurchasedWithTransaction:(id)arg1;
- (void)tryReadLocalReceiptToServer;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)payWithIPAProductID:(id)arg1;
- (_Bool)hasIAPPaying;
- (_Bool)payWithAlipayInfo:(id)arg1;
- (void)payCompletedWithChannel:(unsigned long long)arg1 error:(id)arg2 result:(id)arg3;
- (void)asyncMainPayWithChannel:(unsigned long long)arg1 params:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (void)payWithChannel:(unsigned long long)arg1 params:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (_Bool)isPayingWithChannel:(unsigned long long)arg1;
- (_Bool)hasPayChannel:(unsigned long long)arg1;
- (id)init;
- (void)setEBPaymentWxApiDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

