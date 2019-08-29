//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecommendBaseModel.h"

@class NSString;

@interface IMYRecommendTopicModel : IMYRecommendBaseModel
{
    unsigned long long _user_id;
    unsigned long long _forum_id;
    unsigned long long _topic_id;
    long long _total_user;
    NSString *_circle_name;
    NSString *_circle_icon;
    NSString *_type_icon;
    NSString *_published_date;
}

@property(retain, nonatomic) NSString *published_date; // @synthesize published_date=_published_date;
@property(retain, nonatomic) NSString *type_icon; // @synthesize type_icon=_type_icon;
@property(retain, nonatomic) NSString *circle_icon; // @synthesize circle_icon=_circle_icon;
@property(retain, nonatomic) NSString *circle_name; // @synthesize circle_name=_circle_name;
@property(nonatomic) long long total_user; // @synthesize total_user=_total_user;
@property(nonatomic) unsigned long long topic_id; // @synthesize topic_id=_topic_id;
@property(nonatomic) unsigned long long forum_id; // @synthesize forum_id=_forum_id;
@property(nonatomic) unsigned long long user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;

@end

