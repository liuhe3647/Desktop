//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTQTopicInfoViewConfiguration : NSObject
{
    _Bool _showTime;
    _Bool _useRealTime;
    _Bool _showFeedback;
    long long _publisherType;
    long long _showDirection;
    NSString *_replies;
    NSString *_nameColorKey;
    unsigned long long _userInfoType;
    unsigned long long _page;
}

+ (id)defaultQuanTopicPublisherConfiguration;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) unsigned long long userInfoType; // @synthesize userInfoType=_userInfoType;
@property(copy, nonatomic) NSString *nameColorKey; // @synthesize nameColorKey=_nameColorKey;
@property(copy, nonatomic) NSString *replies; // @synthesize replies=_replies;
@property(nonatomic) long long showDirection; // @synthesize showDirection=_showDirection;
@property(nonatomic) long long publisherType; // @synthesize publisherType=_publisherType;
@property(nonatomic) _Bool showFeedback; // @synthesize showFeedback=_showFeedback;
@property(nonatomic) _Bool useRealTime; // @synthesize useRealTime=_useRealTime;
@property(nonatomic) _Bool showTime; // @synthesize showTime=_showTime;
- (void).cxx_destruct;

@end
