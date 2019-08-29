//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IMYIPlatformUser <NSObject, NSCoding>
- (NSDictionary *)rawDictionary;
- (_Bool)isMale;
- (_Bool)isFemale;
- (NSString *)birthday;
- (NSString *)avatarUrl;
- (NSString *)location;
- (NSString *)cityId;
- (NSString *)city;
- (NSString *)provinceId;
- (NSString *)province;
- (_Bool)isVerified;
- (NSString *)userDescription;
- (NSString *)nickname;
- (NSString *)name;
- (NSString *)uid;

@optional
- (NSString *)openId;
- (NSString *)unionId;
@end

