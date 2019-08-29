//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYTimerRuningProtocol-Protocol.h"

@class NSString;

@interface IMYYBActivityListModel : NSObject <IMYTimerRuningProtocol>
{
    NSString *_name;
    NSString *_title;
    NSString *_sub_title;
    NSString *_picture_url;
    long long _link_type;
    NSString *_link_value;
    NSString *_link_param;
    long long _position;
    NSString *_start_at;
    NSString *_end_at;
    long long _timer_type;
    long long _down_count;
    long long _shop_type;
    long long _redirect_type;
    NSString *_redirect_url;
}

@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) long long redirect_type; // @synthesize redirect_type=_redirect_type;
@property(nonatomic) long long shop_type; // @synthesize shop_type=_shop_type;
@property(nonatomic) long long down_count; // @synthesize down_count=_down_count;
@property(nonatomic) long long timer_type; // @synthesize timer_type=_timer_type;
@property(copy, nonatomic) NSString *end_at; // @synthesize end_at=_end_at;
@property(copy, nonatomic) NSString *start_at; // @synthesize start_at=_start_at;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *link_param; // @synthesize link_param=_link_param;
@property(copy, nonatomic) NSString *link_value; // @synthesize link_value=_link_value;
@property(nonatomic) long long link_type; // @synthesize link_type=_link_type;
@property(copy, nonatomic) NSString *picture_url; // @synthesize picture_url=_picture_url;
@property(copy, nonatomic) NSString *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)imy_timerRuning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

