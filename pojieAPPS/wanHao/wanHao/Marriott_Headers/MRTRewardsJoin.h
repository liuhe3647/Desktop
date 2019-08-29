//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTName, NSArray, NSString;

@interface MRTRewardsJoin : MRTObject
{
    _Bool _usesPinyin;
    MRTName *_name;
    NSString *_password;
    NSArray *_addresses;
    NSArray *_emailAddresses;
    NSArray *_phones;
    NSArray *_communicationPreferences;
    NSString *_rewardsProgramCode;
    NSString *_enrollmentSource;
}

@property(nonatomic) _Bool usesPinyin; // @synthesize usesPinyin=_usesPinyin;
@property(copy, nonatomic) NSString *enrollmentSource; // @synthesize enrollmentSource=_enrollmentSource;
@property(copy, nonatomic) NSString *rewardsProgramCode; // @synthesize rewardsProgramCode=_rewardsProgramCode;
@property(copy, nonatomic) NSArray *communicationPreferences; // @synthesize communicationPreferences=_communicationPreferences;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) MRTName *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isValid;
- (_Bool)validatePassword:(id *)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

