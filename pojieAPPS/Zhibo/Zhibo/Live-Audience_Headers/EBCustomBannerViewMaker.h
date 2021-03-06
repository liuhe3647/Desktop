//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;

@interface EBCustomBannerViewMaker : NSObject
{
    _Bool _vibrateOnMute;
    unsigned int _soundID;
    NSString *_soundName;
    double _animationDuration;
    double _stayDuration;
    unsigned long long _portraitMode;
    unsigned long long _landscapeMode;
    NSArray *_centerModeDurations;
    UIView *_view;
    struct CGRect _portraitFrame;
    struct CGRect _landscapeFrame;
}

+ (id)makerWithView:(id)arg1;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool vibrateOnMute; // @synthesize vibrateOnMute=_vibrateOnMute;
@property(retain, nonatomic) NSArray *centerModeDurations; // @synthesize centerModeDurations=_centerModeDurations;
@property(nonatomic) unsigned long long landscapeMode; // @synthesize landscapeMode=_landscapeMode;
@property(nonatomic) unsigned long long portraitMode; // @synthesize portraitMode=_portraitMode;
@property(nonatomic) double stayDuration; // @synthesize stayDuration=_stayDuration;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(nonatomic) unsigned int soundID; // @synthesize soundID=_soundID;
@property(nonatomic) struct CGRect landscapeFrame; // @synthesize landscapeFrame=_landscapeFrame;
@property(nonatomic) struct CGRect portraitFrame; // @synthesize portraitFrame=_portraitFrame;
- (void).cxx_destruct;

@end

