//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString;

@interface IMYNewsMPNRecommendUserModel : NSObject <YYJSONHelperProtocol>
{
    _Bool _isvip;
    _Bool _isfollow;
    long long _user_id;
    NSString *_screen_name;
    NSString *_avatar;
    long long _user_type;
    NSString *_user_description;
    long long _fans;
    long long _dynamic;
}

+ (void)initialize;
@property(nonatomic) _Bool isfollow; // @synthesize isfollow=_isfollow;
@property(nonatomic) _Bool isvip; // @synthesize isvip=_isvip;
@property(nonatomic) long long dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic) long long fans; // @synthesize fans=_fans;
@property(copy, nonatomic) NSString *user_description; // @synthesize user_description=_user_description;
@property(nonatomic) long long user_type; // @synthesize user_type=_user_type;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(nonatomic) long long user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;

@end

