//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYTTQVCommentNewsDetailModel, IMYTTQVPublisherModel, NSArray, NSString;

@interface IMYTTQVSingleCommentModel : NSObject
{
    _Bool _is_deleted;
    _Bool _is_author;
    _Bool _is_praise;
    long long _comment_id;
    NSString *_content;
    NSString *_created_at;
    long long _review_count;
    long long _praise_count;
    long long _remain_review_count;
    IMYTTQVCommentNewsDetailModel *_news_detail;
    IMYTTQVPublisherModel *_publisher;
    IMYTTQVSingleCommentModel *_reference;
    NSArray *_sub_review;
}

+ (id)modelContainerPropertyGenericClass;
+ (void)initialize;
@property(retain, nonatomic) NSArray *sub_review; // @synthesize sub_review=_sub_review;
@property(retain, nonatomic) IMYTTQVSingleCommentModel *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) IMYTTQVPublisherModel *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) IMYTTQVCommentNewsDetailModel *news_detail; // @synthesize news_detail=_news_detail;
@property(nonatomic) _Bool is_praise; // @synthesize is_praise=_is_praise;
@property(nonatomic) long long remain_review_count; // @synthesize remain_review_count=_remain_review_count;
@property(nonatomic) long long praise_count; // @synthesize praise_count=_praise_count;
@property(nonatomic) long long review_count; // @synthesize review_count=_review_count;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool is_author; // @synthesize is_author=_is_author;
@property(nonatomic) _Bool is_deleted; // @synthesize is_deleted=_is_deleted;
@property(nonatomic) long long comment_id; // @synthesize comment_id=_comment_id;
- (void).cxx_destruct;

@end

