//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALBBAuthLoginResult, NSDictionary, NSString;

@interface ALBBAuthReturnInfoData : NSObject
{
    NSString *_rpcClass;
    ALBBAuthLoginResult *_data;
    NSString *_hid;
    NSString *_mobile;
    NSString *_showLoginId;
    NSString *_taobaoNick;
    NSString *_deviceTokenKey;
    NSString *_deviceTokenNick;
    NSString *_deviceTokenSalt;
    NSDictionary *_extMap;
}

@property(copy, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(copy, nonatomic) NSString *deviceTokenSalt; // @synthesize deviceTokenSalt=_deviceTokenSalt;
@property(copy, nonatomic) NSString *deviceTokenNick; // @synthesize deviceTokenNick=_deviceTokenNick;
@property(copy, nonatomic) NSString *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
@property(copy, nonatomic) NSString *taobaoNick; // @synthesize taobaoNick=_taobaoNick;
@property(copy, nonatomic) NSString *showLoginId; // @synthesize showLoginId=_showLoginId;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(retain, nonatomic) ALBBAuthLoginResult *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *rpcClass; // @synthesize rpcClass=_rpcClass;
- (void).cxx_destruct;
- (id)init:(id)arg1;

@end

