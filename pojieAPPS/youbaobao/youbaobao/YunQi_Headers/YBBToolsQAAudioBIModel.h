//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBToolsQAAudioBIModel : NSObject
{
    NSString *_questionId;
    long long _duration;
    long long _time;
    long long _startDuration;
    long long _endDuration;
    long long _endType;
}

+ (void)initialize;
@property(nonatomic) long long endType; // @synthesize endType=_endType;
@property(nonatomic) long long endDuration; // @synthesize endDuration=_endDuration;
@property(nonatomic) long long startDuration; // @synthesize startDuration=_startDuration;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
- (void).cxx_destruct;

@end

