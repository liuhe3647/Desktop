//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TTQTopicCache : NSObject
{
    _Bool _hasTableHead;
    _Bool _hasTableFoot;
    long long _topic_id;
    double _offset_y;
    long long _menu_index;
    double _cacheTime;
    long long _gotoID;
    long long _orderByFilter;
    NSString *_commentids;
    NSArray *_recommend_topic;
}

+ (id)getPrimaryKey;
+ (id)getUsingLKDBHelper;
+ (id)getTableName;
+ (id)arrayWithTopicID:(long long)arg1;
+ (void)cacheTopicArray:(id)arg1 topicid:(long long)arg2;
+ (void)cacheTopicArray:(id)arg1 topicid:(id)arg2 topicCache:(id)arg3;
+ (_Bool)dbWillInsert:(id)arg1;
+ (void)checkCacheTimeOutOrSizeOut;
+ (id)getCacheDictionary;
+ (void)initialize;
@property(nonatomic) _Bool hasTableFoot; // @synthesize hasTableFoot=_hasTableFoot;
@property(retain, nonatomic) NSArray *recommend_topic; // @synthesize recommend_topic=_recommend_topic;
@property(copy, nonatomic) NSString *commentids; // @synthesize commentids=_commentids;
@property(nonatomic) _Bool hasTableHead; // @synthesize hasTableHead=_hasTableHead;
@property(nonatomic) long long orderByFilter; // @synthesize orderByFilter=_orderByFilter;
@property(nonatomic) long long gotoID; // @synthesize gotoID=_gotoID;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) long long menu_index; // @synthesize menu_index=_menu_index;
@property(nonatomic) double offset_y; // @synthesize offset_y=_offset_y;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
- (void).cxx_destruct;

@end

