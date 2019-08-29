//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYTTQVPublisherModel, IMYTTQVShareBodyModel, IMYTTQVSingleCommentModel, NSArray;

@interface IMYTTQVDetailCommentModel : NSObject
{
    _Bool _is_show_praise;
    _Bool _is_praise;
    IMYTTQVPublisherModel *_user_info;
    IMYTTQVSingleCommentModel *_news_review;
    NSArray *_news_sub_review;
    IMYTTQVShareBodyModel *_share_body;
    long long _praise_count;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) _Bool is_praise; // @synthesize is_praise=_is_praise;
@property(nonatomic) long long praise_count; // @synthesize praise_count=_praise_count;
@property(retain, nonatomic) IMYTTQVShareBodyModel *share_body; // @synthesize share_body=_share_body;
@property(nonatomic) _Bool is_show_praise; // @synthesize is_show_praise=_is_show_praise;
@property(retain, nonatomic) NSArray *news_sub_review; // @synthesize news_sub_review=_news_sub_review;
@property(retain, nonatomic) IMYTTQVSingleCommentModel *news_review; // @synthesize news_review=_news_review;
@property(retain, nonatomic) IMYTTQVPublisherModel *user_info; // @synthesize user_info=_user_info;
- (void).cxx_destruct;

@end

