//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLListCache.h"

@class NSString;

@interface IMYTLTimeListCache : IMYTLListCache
{
    _Bool _isUpLoaded;
    double _day;
    NSString *_title;
    long long _event_id;
    double _created_at;
}

+ (id)getPrimaryKey;
+ (_Bool)isContainParent;
@property(nonatomic) _Bool isUpLoaded; // @synthesize isUpLoaded=_isUpLoaded;
@property(nonatomic) double created_at; // @synthesize created_at=_created_at;
@property(nonatomic) long long event_id; // @synthesize event_id=_event_id;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double day; // @synthesize day=_day;
- (void).cxx_destruct;

@end

