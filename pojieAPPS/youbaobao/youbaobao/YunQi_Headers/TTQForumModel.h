//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TTQTopicSubjectModel;

@interface TTQForumModel : NSObject
{
    _Bool _is_open_mood;
    _Bool _is_open_share;
    _Bool _is_aitao;
    _Bool _join_praise;
    _Bool _join_reply;
    _Bool _must_tag;
    _Bool _is_fixed;
    _Bool _is_bind_phone;
    _Bool _is_falls;
    _Bool _reply_image;
    _Bool _is_same_city;
    _Bool _has_checkin;
    _Bool _has_expert;
    _Bool _is_checkin;
    _Bool _is_show_image;
    _Bool _is_recommended;
    _Bool _is_new;
    _Bool _is_unable_quit;
    _Bool _is_joined;
    _Bool _is_anonymous;
    _Bool _open_pregnancy_album;
    _Bool _is_seek_help;
    long long _total_user;
    long long _total_post;
    long long _total_updates;
    long long _ordinal;
    NSString *_icon;
    long long _created_date;
    NSString *_city_name;
    long long _limit_image;
    NSString *_name;
    NSString *_home_name;
    NSString *_more_name;
    NSString *_icon3;
    long long _total_topic;
    NSString *_order_by;
    long long _forum_id;
    NSString *_icon2;
    NSString *_expected_date;
    long long _switchValue;
    NSString *_newest_topic_title;
    long long _newest_topic_id;
    NSString *_introduction;
    long long _expert_show_type;
    NSArray *_expert;
    NSArray *_special_topic;
    NSArray *_tags;
    unsigned long long _anonymous_level;
    long long _limit_reply_images;
    long long _vote_max_items;
    TTQTopicSubjectModel *_subject_recommend;
    NSArray *_activityTabs;
    NSString *_brand_image;
    unsigned long long _expert_space_type;
    NSString *_redirect_url;
}

+ (id)forumOfID:(long long)arg1;
+ (id)getPrimaryKey;
+ (void)initialize;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) unsigned long long expert_space_type; // @synthesize expert_space_type=_expert_space_type;
@property(copy, nonatomic) NSString *brand_image; // @synthesize brand_image=_brand_image;
@property(retain, nonatomic) NSArray *activityTabs; // @synthesize activityTabs=_activityTabs;
@property(retain, nonatomic) TTQTopicSubjectModel *subject_recommend; // @synthesize subject_recommend=_subject_recommend;
@property(nonatomic) long long vote_max_items; // @synthesize vote_max_items=_vote_max_items;
@property(nonatomic) _Bool is_seek_help; // @synthesize is_seek_help=_is_seek_help;
@property(nonatomic) long long limit_reply_images; // @synthesize limit_reply_images=_limit_reply_images;
@property(nonatomic) _Bool open_pregnancy_album; // @synthesize open_pregnancy_album=_open_pregnancy_album;
@property(nonatomic) unsigned long long anonymous_level; // @synthesize anonymous_level=_anonymous_level;
@property(nonatomic) _Bool is_anonymous; // @synthesize is_anonymous=_is_anonymous;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *special_topic; // @synthesize special_topic=_special_topic;
@property(retain, nonatomic) NSArray *expert; // @synthesize expert=_expert;
@property(nonatomic) long long expert_show_type; // @synthesize expert_show_type=_expert_show_type;
@property(nonatomic) _Bool is_joined; // @synthesize is_joined=_is_joined;
@property(nonatomic) _Bool is_unable_quit; // @synthesize is_unable_quit=_is_unable_quit;
@property(nonatomic) _Bool is_new; // @synthesize is_new=_is_new;
@property(nonatomic) _Bool is_recommended; // @synthesize is_recommended=_is_recommended;
@property(nonatomic) _Bool is_show_image; // @synthesize is_show_image=_is_show_image;
@property(nonatomic) _Bool is_checkin; // @synthesize is_checkin=_is_checkin;
@property(nonatomic) _Bool has_expert; // @synthesize has_expert=_has_expert;
@property(nonatomic) _Bool has_checkin; // @synthesize has_checkin=_has_checkin;
@property(nonatomic) _Bool is_same_city; // @synthesize is_same_city=_is_same_city;
@property(nonatomic) _Bool reply_image; // @synthesize reply_image=_reply_image;
@property(nonatomic) _Bool is_falls; // @synthesize is_falls=_is_falls;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(nonatomic) long long newest_topic_id; // @synthesize newest_topic_id=_newest_topic_id;
@property(retain, nonatomic) NSString *newest_topic_title; // @synthesize newest_topic_title=_newest_topic_title;
@property(nonatomic) long long switchValue; // @synthesize switchValue=_switchValue;
@property(retain, nonatomic) NSString *expected_date; // @synthesize expected_date=_expected_date;
@property(retain, nonatomic) NSString *icon2; // @synthesize icon2=_icon2;
@property(nonatomic) _Bool is_bind_phone; // @synthesize is_bind_phone=_is_bind_phone;
@property(nonatomic) _Bool is_fixed; // @synthesize is_fixed=_is_fixed;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(nonatomic) _Bool must_tag; // @synthesize must_tag=_must_tag;
@property(retain, nonatomic) NSString *order_by; // @synthesize order_by=_order_by;
@property(nonatomic) long long total_topic; // @synthesize total_topic=_total_topic;
@property(retain, nonatomic) NSString *icon3; // @synthesize icon3=_icon3;
@property(retain, nonatomic) NSString *more_name; // @synthesize more_name=_more_name;
@property(retain, nonatomic) NSString *home_name; // @synthesize home_name=_home_name;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long limit_image; // @synthesize limit_image=_limit_image;
@property(nonatomic) _Bool join_reply; // @synthesize join_reply=_join_reply;
@property(retain, nonatomic) NSString *city_name; // @synthesize city_name=_city_name;
@property(nonatomic) _Bool join_praise; // @synthesize join_praise=_join_praise;
@property(nonatomic) long long created_date; // @synthesize created_date=_created_date;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) _Bool is_aitao; // @synthesize is_aitao=_is_aitao;
@property(nonatomic) long long total_updates; // @synthesize total_updates=_total_updates;
@property(nonatomic) long long total_post; // @synthesize total_post=_total_post;
@property(nonatomic) long long total_user; // @synthesize total_user=_total_user;
@property(nonatomic) _Bool is_open_share; // @synthesize is_open_share=_is_open_share;
@property(nonatomic) _Bool is_open_mood; // @synthesize is_open_mood=_is_open_mood;
- (void).cxx_destruct;
- (void)gotoBindMobile;
- (_Bool)isEqual:(id)arg1;
- (_Bool)saveToDB;

@end

