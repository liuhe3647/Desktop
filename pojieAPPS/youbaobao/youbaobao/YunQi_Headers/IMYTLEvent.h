//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLModel.h"

@class NSArray, NSString;

@interface IMYTLEvent : IMYTLModel
{
    long long _event_id;
    double _day;
    NSString *_title;
    long long _type;
    long long _timeline_count;
    long long _identity_id;
    NSString *_identity_name;
    long long _rule;
    double _created_at;
    NSArray *_comments;
    NSArray *_timelines;
}

+ (id)imy_yyjsonPropertyGenericClass;
@property(retain, nonatomic) NSArray *timelines; // @synthesize timelines=_timelines;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(nonatomic) double created_at; // @synthesize created_at=_created_at;
@property(nonatomic) long long rule; // @synthesize rule=_rule;
@property(copy, nonatomic) NSString *identity_name; // @synthesize identity_name=_identity_name;
@property(nonatomic) long long identity_id; // @synthesize identity_id=_identity_id;
@property(nonatomic) long long timeline_count; // @synthesize timeline_count=_timeline_count;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double day; // @synthesize day=_day;
@property(nonatomic) long long event_id; // @synthesize event_id=_event_id;
- (void).cxx_destruct;

@end

