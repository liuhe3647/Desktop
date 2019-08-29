//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAccountCoding.h"

@class NSDictionary, NSString;

@interface IMYAccountUserModel : IMYAccountCoding
{
    _Bool _is_married;
    _Bool _skip_quick_setting;
    _Bool _in_gestation;
    _Bool _isvip;
    NSDictionary *_rawDictionary;
    long long _platform;
    NSString *_id;
    NSString *_nickname;
    NSString *_username;
    NSString *_avatar;
    long long _userrank;
    NSString *_birthday;
    NSString *_baby_birthday;
    NSString *_hospital;
    long long _hospital_city_id;
    long long _actdays;
    NSString *_qq;
    NSString *_location;
    long long _mode;
}

+ (id)codingProperties;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) _Bool isvip; // @synthesize isvip=_isvip;
@property(nonatomic) _Bool in_gestation; // @synthesize in_gestation=_in_gestation;
@property(retain, nonatomic) NSString *qq; // @synthesize qq=_qq;
@property(nonatomic) _Bool skip_quick_setting; // @synthesize skip_quick_setting=_skip_quick_setting;
@property(nonatomic) _Bool is_married; // @synthesize is_married=_is_married;
@property(nonatomic) long long actdays; // @synthesize actdays=_actdays;
@property(nonatomic) long long hospital_city_id; // @synthesize hospital_city_id=_hospital_city_id;
@property(retain, nonatomic) NSString *hospital; // @synthesize hospital=_hospital;
@property(retain, nonatomic) NSString *baby_birthday; // @synthesize baby_birthday=_baby_birthday;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) long long userrank; // @synthesize userrank=_userrank;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
- (void).cxx_destruct;
- (id)initWithRawDictionay:(id)arg1;

@end

