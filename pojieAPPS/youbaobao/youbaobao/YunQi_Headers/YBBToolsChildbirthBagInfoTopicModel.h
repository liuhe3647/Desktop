//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBToolsChildbirthBagInfoTopicModel : NSObject
{
    long long _topicID;
    long long _forumId;
    NSString *_forumName;
    NSString *_icon;
    NSString *_title;
    NSString *_img;
    long long _totalView;
    NSString *_content;
    double _cellHeight;
    struct CGSize _titleSize;
}

+ (void)initialize;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long totalView; // @synthesize totalView=_totalView;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *forumName; // @synthesize forumName=_forumName;
@property(nonatomic) long long forumId; // @synthesize forumId=_forumId;
@property(nonatomic) long long topicID; // @synthesize topicID=_topicID;
- (void).cxx_destruct;
- (void)generateCellHeight;

@end

