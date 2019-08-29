//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSArray, NSString;

@interface TTQRecommendTopicModel : NSObject <YYModel>
{
    NSArray *_list;
    long long _is_hot_topic;
    long long _num;
    long long _position;
    NSString *_forum_name;
    NSString *_forum_icon;
    NSString *_redirect_url;
    NSString *_redirect_title;
}

+ (id)objectWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *redirect_title; // @synthesize redirect_title=_redirect_title;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(copy, nonatomic) NSString *forum_icon; // @synthesize forum_icon=_forum_icon;
@property(copy, nonatomic) NSString *forum_name; // @synthesize forum_name=_forum_name;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(nonatomic) long long is_hot_topic; // @synthesize is_hot_topic=_is_hot_topic;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

