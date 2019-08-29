//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBBOldHomeModel-Protocol.h"

@class NSArray, NSString;

@interface YBBOldHomeGravidityCheckModel : NSObject <YBBOldHomeModel>
{
    _Bool _didSet;
    _Bool _currentGravidityCheck;
    NSString *cellClass;
    double rowHeight;
    NSString *_time;
    NSString *_mark;
    NSArray *_dateArray;
    id _oriModel;
    long long _pageIndex;
    long long _todayIndex;
}

+ (_Bool)updateCacheResultByGcId:(long long)arg1;
+ (void)clearData;
@property(readonly, nonatomic) long long todayIndex; // @synthesize todayIndex=_todayIndex;
@property(readonly, nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) id oriModel; // @synthesize oriModel=_oriModel;
@property(retain, nonatomic) NSArray *dateArray; // @synthesize dateArray=_dateArray;
@property(nonatomic, getter=isCurrentGravidityCheck) _Bool currentGravidityCheck; // @synthesize currentGravidityCheck=_currentGravidityCheck;
@property(nonatomic) _Bool didSet; // @synthesize didSet=_didSet;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *cellClass; // @synthesize cellClass;
- (void).cxx_destruct;
- (_Bool)cacheResultWithPageIndex:(long long)arg1 config:(id)arg2;
- (_Bool)cacheResult;
- (id)targetWithContext:(id)arg1;
@property(nonatomic) double rowHeight; // @synthesize rowHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

