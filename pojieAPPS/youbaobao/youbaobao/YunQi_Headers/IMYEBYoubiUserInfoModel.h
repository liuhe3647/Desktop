//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEBSignRedirectModel, NSArray;

@interface IMYEBYoubiUserInfoModel : NSObject
{
    _Bool _today_check;
    long long _coins;
    long long _continuous;
    long long _continuous_check;
    long long _extra_coin;
    long long _normal_check_coin;
    long long _real_continuous;
    long long _total_currency;
    long long _user_id;
    NSArray *_earn_coin;
    IMYEBSignRedirectModel *_check_in_redirect;
}

@property(retain, nonatomic) IMYEBSignRedirectModel *check_in_redirect; // @synthesize check_in_redirect=_check_in_redirect;
@property(retain, nonatomic) NSArray *earn_coin; // @synthesize earn_coin=_earn_coin;
@property(nonatomic) long long user_id; // @synthesize user_id=_user_id;
@property(nonatomic) long long total_currency; // @synthesize total_currency=_total_currency;
@property(nonatomic) _Bool today_check; // @synthesize today_check=_today_check;
@property(nonatomic) long long real_continuous; // @synthesize real_continuous=_real_continuous;
@property(nonatomic) long long normal_check_coin; // @synthesize normal_check_coin=_normal_check_coin;
@property(nonatomic) long long extra_coin; // @synthesize extra_coin=_extra_coin;
@property(nonatomic) long long continuous_check; // @synthesize continuous_check=_continuous_check;
@property(nonatomic) long long continuous; // @synthesize continuous=_continuous;
@property(nonatomic) long long coins; // @synthesize coins=_coins;
- (void).cxx_destruct;

@end

