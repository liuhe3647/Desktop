//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IMYTAETradeLog : NSObject
{
    _Bool _hasResult;
    _Bool _paySuccess;
    NSString *_urlString;
    NSString *_pay_order_id;
    NSString *_tbNumId;
    NSDictionary *_queryParams;
    NSArray *_orderIds;
    NSDictionary *_payResult;
    NSString *_myuid;
    NSString *_mytdid;
    NSString *_tbuid;
    NSString *_utdid;
    long long _actionTime;
    long long _resultTime;
    long long _sendStatus;
}

+ (void)initialize;
@property(nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(nonatomic) long long resultTime; // @synthesize resultTime=_resultTime;
@property(nonatomic) long long actionTime; // @synthesize actionTime=_actionTime;
@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *tbuid; // @synthesize tbuid=_tbuid;
@property(copy, nonatomic) NSString *mytdid; // @synthesize mytdid=_mytdid;
@property(copy, nonatomic) NSString *myuid; // @synthesize myuid=_myuid;
@property(nonatomic) _Bool paySuccess; // @synthesize paySuccess=_paySuccess;
@property(copy, nonatomic) NSDictionary *payResult; // @synthesize payResult=_payResult;
@property(copy, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(nonatomic) _Bool hasResult; // @synthesize hasResult=_hasResult;
@property(copy, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(copy, nonatomic) NSString *tbNumId; // @synthesize tbNumId=_tbNumId;
@property(copy, nonatomic) NSString *pay_order_id; // @synthesize pay_order_id=_pay_order_id;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;

@end

