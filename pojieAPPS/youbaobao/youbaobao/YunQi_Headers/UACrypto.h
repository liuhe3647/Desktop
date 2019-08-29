//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UACrypto : NSObject
{
}

+ (id)md5:(id)arg1;
+ (id)RSAEVPSignWithString:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)RSAEncryptWithString:(id)arg1;
+ (_Bool)checkNSStringisNULL:(id)arg1;
+ (char *)hexStringToChar:(id)arg1;
+ (id)hexStringToNSData:(id)arg1;
+ (id)charToNSHex:(char *)arg1 length:(int)arg2;
+ (id)AESEncrypt:(id)arg1 withKey:(id)arg2;
+ (id)AESDecrypt:(id)arg1 withKey:(id)arg2;
+ (id)base64EncodingWithData:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)AESDecryptWithKey:(id)arg1 andData:(id)arg2;
+ (id)AESEncryptWithKey:(id)arg1 andData:(id)arg2;
+ (id)AESDecryptWithKey:(id)arg1 andString:(id)arg2;
+ (id)AESEncryptWithKey:(id)arg1 andString:(id)arg2;

@end

