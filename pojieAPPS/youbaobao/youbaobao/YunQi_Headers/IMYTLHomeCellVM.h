//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLHomeCellBaseVM.h"

@class IMYTLHomeListCache, NSArray, NSString;

@interface IMYTLHomeCellVM : IMYTLHomeCellBaseVM
{
    _Bool _special;
    _Bool _isPregnantSpecialDay;
    long long _cellUIType;
    NSArray *_timelineModels;
    NSArray *_commentModels;
    NSString *_title;
    NSString *_date;
    unsigned long long _sumCount;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    NSString *_dayComment;
    double _time;
    NSString *_specialDayString;
    IMYTLHomeListCache *_cache;
}

+ (id)allHomeCellIdentifier;
@property(retain, nonatomic) IMYTLHomeListCache *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool isPregnantSpecialDay; // @synthesize isPregnantSpecialDay=_isPregnantSpecialDay;
@property(retain, nonatomic) NSString *specialDayString; // @synthesize specialDayString=_specialDayString;
@property(nonatomic) _Bool special; // @synthesize special=_special;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *dayComment; // @synthesize dayComment=_dayComment;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property(nonatomic) unsigned long long sumCount; // @synthesize sumCount=_sumCount;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *commentModels; // @synthesize commentModels=_commentModels;
@property(retain, nonatomic) NSArray *timelineModels; // @synthesize timelineModels=_timelineModels;
@property(nonatomic) long long cellUIType; // @synthesize cellUIType=_cellUIType;
- (void).cxx_destruct;
- (id)homeCellIdentifier;

@end

