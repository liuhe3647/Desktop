//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYEBBannerModel : NSObject
{
    long long _id;
    NSString *_name;
    NSString *_sub_name;
    NSString *_picture_url;
    long long _picture_type;
    long long _link_type;
    NSString *_link_value;
    long long _redirect_type;
    NSString *_redirect_url;
    long long _play_times;
}

@property(nonatomic) long long play_times; // @synthesize play_times=_play_times;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) long long redirect_type; // @synthesize redirect_type=_redirect_type;
@property(copy, nonatomic) NSString *link_value; // @synthesize link_value=_link_value;
@property(nonatomic) long long link_type; // @synthesize link_type=_link_type;
@property(nonatomic) long long picture_type; // @synthesize picture_type=_picture_type;
@property(copy, nonatomic) NSString *picture_url; // @synthesize picture_url=_picture_url;
@property(copy, nonatomic) NSString *sub_name; // @synthesize sub_name=_sub_name;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

