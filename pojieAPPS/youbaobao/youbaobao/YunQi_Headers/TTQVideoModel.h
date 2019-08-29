//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSString;

@interface TTQVideoModel : NSObject <YYModel>
{
    NSString *_thum_pic;
    NSString *_video_url;
    NSString *_time;
    NSString *_size;
    double _width;
    double _height;
    double _videoDuration;
}

@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(copy, nonatomic) NSString *thum_pic; // @synthesize thum_pic=_thum_pic;
- (void).cxx_destruct;
- (id)videoModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

