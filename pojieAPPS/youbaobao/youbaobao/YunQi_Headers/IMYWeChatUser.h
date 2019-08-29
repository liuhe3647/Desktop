//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYIPlatformUser-Protocol.h"

@class NSDictionary, NSString;

@interface IMYWeChatUser : NSObject <IMYIPlatformUser>
{
    NSDictionary *_rawResponse;
}

+ (id)userWithNickname:(id)arg1 uid:(id)arg2;
+ (id)userWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *rawResponse; // @synthesize rawResponse=_rawResponse;
- (void).cxx_destruct;
- (id)openId;
- (id)unionId;
- (id)rawDictionary;
- (_Bool)isMale;
- (_Bool)isFemale;
- (id)birthday;
- (id)avatarUrl;
- (id)location;
- (id)cityId;
- (id)city;
- (id)provinceId;
- (id)province;
- (_Bool)isVerified;
- (id)gender;
- (id)userDescription;
- (id)nickname;
- (id)name;
- (id)uid;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

