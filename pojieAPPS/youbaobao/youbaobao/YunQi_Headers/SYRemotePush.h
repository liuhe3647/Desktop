//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SYRemotePush : NSObject
{
    int _targetID;
    int _push_type;
    NSString *_title;
    NSString *_urlString;
    NSString *_text;
    long long _youbi;
    long long _data_type;
    long long _forum_id;
    long long _topic_id;
    long long _user_id;
}

+ (void)initialize;
@property(nonatomic) int push_type; // @synthesize push_type=_push_type;
@property(nonatomic) long long user_id; // @synthesize user_id=_user_id;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(nonatomic) long long data_type; // @synthesize data_type=_data_type;
@property(nonatomic) long long youbi; // @synthesize youbi=_youbi;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int targetID; // @synthesize targetID=_targetID;
- (void).cxx_destruct;

@end

