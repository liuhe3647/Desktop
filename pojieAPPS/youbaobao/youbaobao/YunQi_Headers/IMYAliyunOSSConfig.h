//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYOSSConfig-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString;

@interface IMYAliyunOSSConfig : NSObject <IMYOSSConfig>
{
    NSArray *_uploadNames;
    NSString *_endpoint;
    NSString *_bucketName;
    NSString *_accessKeyId;
    NSString *_accessKeySecret;
    NSString *_expiration;
    NSString *_securityToken;
    NSString *_ossCallback;
    NSString *_avatarCallback;
    NSString *_domain;
    NSArray *_existedFiles;
    NSDictionary *_rawToken;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *rawToken; // @synthesize rawToken=_rawToken;
@property(retain, nonatomic) NSArray *existedFiles; // @synthesize existedFiles=_existedFiles;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *avatarCallback; // @synthesize avatarCallback=_avatarCallback;
@property(copy, nonatomic) NSString *ossCallback; // @synthesize ossCallback=_ossCallback;
@property(copy, nonatomic) NSString *securityToken; // @synthesize securityToken=_securityToken;
@property(copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *accessKeySecret; // @synthesize accessKeySecret=_accessKeySecret;
@property(copy, nonatomic) NSString *accessKeyId; // @synthesize accessKeyId=_accessKeyId;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSArray *uploadNames; // @synthesize uploadNames=_uploadNames;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)requestTokenWithNames:(id)arg1 uploadType:(unsigned long long)arg2 complated:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *serverName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

