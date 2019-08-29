//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAccountCoding.h"

@class IMYAccountUserModel, NSDictionary, NSString;

@interface IMYAccountModel : IMYAccountCoding
{
    _Bool _isChangeUser;
    _Bool _isRegist;
    NSDictionary *_rawDictionary;
    long long _loginType;
    NSString *_account;
    NSString *_virtualToken;
    NSString *_userId;
    NSString *_authToken;
    IMYAccountUserModel *_user;
    NSString *_myid;
    NSString *_refreshToken;
    long long _expires_at;
}

+ (id)codingName;
+ (id)codingProperties;
@property(nonatomic) long long expires_at; // @synthesize expires_at=_expires_at;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *myid; // @synthesize myid=_myid;
@property(retain, nonatomic) IMYAccountUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool isRegist; // @synthesize isRegist=_isRegist;
@property(retain, nonatomic) NSString *virtualToken; // @synthesize virtualToken=_virtualToken;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) _Bool isChangeUser; // @synthesize isChangeUser=_isChangeUser;
@property(nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
- (void).cxx_destruct;
- (id)initWithRawDictionary:(id)arg1;
- (id)description;

@end

