//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYYoubiStoreBannerModel : NSObject
{
    long long _m_id;
    NSString *_title;
    NSString *_short_title;
    NSString *_images;
    long long _type;
    NSString *_url;
    long long _topic_id;
    long long _skin_id;
}

+ (void)initialize;
@property(nonatomic) long long skin_id; // @synthesize skin_id=_skin_id;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *short_title; // @synthesize short_title=_short_title;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long m_id; // @synthesize m_id=_m_id;
- (void).cxx_destruct;

@end

