//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBHomeBabyFoodsModel : NSObject
{
    NSString *_age_text;
    NSString *_content;
    NSString *_material;
    NSString *_picture_url;
    NSString *_redirect_uri;
    NSString *_video_url;
    NSString *_title;
    long long _type;
    NSString *_introduction;
    NSString *_name;
    NSString *_effectText;
    NSString *_image_path;
    NSString *_video_path;
    long long _cookbookId;
    double _rowHight;
}

+ (void)initialize;
@property(nonatomic) double rowHight; // @synthesize rowHight=_rowHight;
@property(nonatomic) long long cookbookId; // @synthesize cookbookId=_cookbookId;
@property(copy, nonatomic) NSString *video_path; // @synthesize video_path=_video_path;
@property(copy, nonatomic) NSString *image_path; // @synthesize image_path=_image_path;
@property(copy, nonatomic) NSString *effectText; // @synthesize effectText=_effectText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(copy, nonatomic) NSString *redirect_uri; // @synthesize redirect_uri=_redirect_uri;
@property(copy, nonatomic) NSString *picture_url; // @synthesize picture_url=_picture_url;
@property(copy, nonatomic) NSString *material; // @synthesize material=_material;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *age_text; // @synthesize age_text=_age_text;
- (void).cxx_destruct;
- (double)getHeightWithStr:(id)arg1;

@end

