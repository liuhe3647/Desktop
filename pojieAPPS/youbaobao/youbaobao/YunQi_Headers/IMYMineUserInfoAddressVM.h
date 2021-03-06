//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface IMYMineUserInfoAddressVM : NSObject
{
    _Bool _isBrandNew;
    NSMutableArray *_dataArray;
    NSString *_consignee;
    NSString *_provinceID;
    NSString *_cityID;
    NSString *_areaID;
    NSString *_city;
    NSString *_detailAddress;
    NSString *_postCode;
    NSString *_phoneNumber;
    CDUnknownBlockType _vcCallBack;
    CDUnknownBlockType _webCallBack;
}

@property(nonatomic) _Bool isBrandNew; // @synthesize isBrandNew=_isBrandNew;
@property(copy, nonatomic) CDUnknownBlockType webCallBack; // @synthesize webCallBack=_webCallBack;
@property(copy, nonatomic) CDUnknownBlockType vcCallBack; // @synthesize vcCallBack=_vcCallBack;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *postCode; // @synthesize postCode=_postCode;
@property(copy, nonatomic) NSString *detailAddress; // @synthesize detailAddress=_detailAddress;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *areaID; // @synthesize areaID=_areaID;
@property(copy, nonatomic) NSString *cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSString *provinceID; // @synthesize provinceID=_provinceID;
@property(copy, nonatomic) NSString *consignee; // @synthesize consignee=_consignee;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (_Bool)checkSameAsOld;
- (void)saveAddressClick;
- (id)stringWithInteger:(long long)arg1;
- (_Bool)checkInput;
- (void)checkIsNew;
- (void)updateToServerSuccess:(id)arg1;
- (void)updateAddressToServer;
- (void)initData;
- (id)init;

@end

