//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDate, NSString;

@interface YBBOldGlobalSearchTopicModel : NSObject
{
    NSAttributedString *_attributeTitle;
    NSAttributedString *_attributeContent;
    NSDate *_date;
    NSString *_mid;
    NSString *_title;
    NSString *_content;
    NSString *_forum_name;
    NSString *_forum_id;
    NSString *_published_date;
    double _cellHeight;
    long long _total_review;
}

+ (void)initialize;
@property(nonatomic) long long total_review; // @synthesize total_review=_total_review;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *published_date; // @synthesize published_date=_published_date;
@property(copy, nonatomic) NSString *forum_id; // @synthesize forum_id=_forum_id;
@property(copy, nonatomic) NSString *forum_name; // @synthesize forum_name=_forum_name;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (void)cacheCellHeight;
- (id)attributeContent;
- (id)attributeTitle;
- (id)timeString;
- (id)sourceString;

@end

