//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIView;

@interface IMYUTEventInfo : NSObject
{
    _Bool _visible;
    _Bool _ableToClean;
    NSString *_eventName;
    NSDictionary *_eventValue;
    CDUnknownBlockType _exposuredBlock;
    CDUnknownBlockType _clickedBlock;
    UIView *_view;
    long long _time;
    long long _begin;
    long long _end;
    unsigned long long _type;
    double _showRadius;
    unsigned long long _showRadiusType;
    CDUnknownBlockType _shouldExposureDetectingBlock;
    struct UIEdgeInsets _edgeOffset;
}

@property(nonatomic) struct UIEdgeInsets edgeOffset; // @synthesize edgeOffset=_edgeOffset;
@property(nonatomic) _Bool ableToClean; // @synthesize ableToClean=_ableToClean;
@property(copy, nonatomic) CDUnknownBlockType shouldExposureDetectingBlock; // @synthesize shouldExposureDetectingBlock=_shouldExposureDetectingBlock;
@property(nonatomic) unsigned long long showRadiusType; // @synthesize showRadiusType=_showRadiusType;
@property(nonatomic) double showRadius; // @synthesize showRadius=_showRadius;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long end; // @synthesize end=_end;
@property(readonly, nonatomic) long long begin; // @synthesize begin=_begin;
@property(readonly, nonatomic) long long time; // @synthesize time=_time;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(copy, nonatomic) CDUnknownBlockType exposuredBlock; // @synthesize exposuredBlock=_exposuredBlock;
@property(copy, nonatomic) NSDictionary *eventValue; // @synthesize eventValue=_eventValue;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)description;
- (void)endVisible;
- (void)beginVisible;
- (void)fixVisibleStatus;
- (void)resetTime;
- (id)initWithView:(id)arg1;

@end

