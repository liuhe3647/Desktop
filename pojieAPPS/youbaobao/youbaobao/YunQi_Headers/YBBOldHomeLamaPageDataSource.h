//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HYOldSegmentedControlDataSource-Protocol.h"
#import "YBBOldHomePageDataSourceProtocol-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, YBBOldHomeLamaBabyModel;

@interface YBBOldHomeLamaPageDataSource : NSObject <YBBOldHomePageDataSourceProtocol, HYOldSegmentedControlDataSource>
{
    _Bool _segmentedControlHidden;
    long long _todayPageIndex;
    NSMutableDictionary *_urlCache;
    long long _threeYearDays;
    NSArray *_defaultArray;
    NSArray *_oldArray;
    YBBOldHomeLamaBabyModel *_headerDefaultData;
    NSMutableDictionary *_cacheBabyData;
    NSMutableSet *_unusedViewControllers;
    NSMutableDictionary *_dateDic;
}

@property(retain, nonatomic) NSMutableDictionary *dateDic; // @synthesize dateDic=_dateDic;
@property(retain, nonatomic) NSMutableSet *unusedViewControllers; // @synthesize unusedViewControllers=_unusedViewControllers;
@property(retain, nonatomic) NSMutableDictionary *cacheBabyData; // @synthesize cacheBabyData=_cacheBabyData;
@property(retain, nonatomic) YBBOldHomeLamaBabyModel *headerDefaultData; // @synthesize headerDefaultData=_headerDefaultData;
@property(retain, nonatomic) NSArray *oldArray; // @synthesize oldArray=_oldArray;
@property(retain, nonatomic) NSArray *defaultArray; // @synthesize defaultArray=_defaultArray;
@property(nonatomic) long long threeYearDays; // @synthesize threeYearDays=_threeYearDays;
@property(retain, nonatomic) NSMutableDictionary *urlCache; // @synthesize urlCache=_urlCache;
@property(nonatomic) _Bool segmentedControlHidden; // @synthesize segmentedControlHidden=_segmentedControlHidden;
- (void).cxx_destruct;
- (long long)scrollToLeft:(_Bool)arg1 currentIndex:(long long)arg2;
- (void)resetCache;
- (long long)numberOfItems;
- (id)segmentedTitleAtIndex:(long long)arg1;
- (id)defaultArrayByIndex:(unsigned long long)arg1;
- (id)babyDataAtIndex:(long long)arg1;
- (void)requestPageDataAtIndex:(long long)arg1 reloadData:(_Bool)arg2;
- (id)lamaStartDay;
- (id)getPathAtPageIndex:(long long)arg1;
- (void)loadNearDataAtIndex:(long long)arg1;
- (id)todayViewController;
- (void)viewControllerInTodayWithReload:(CDUnknownBlockType)arg1;
- (void)viewControllerInToday:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfViewController:(id)arg1;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
@property(nonatomic) long long todayPageIndex; // @synthesize todayPageIndex=_todayPageIndex;
- (long long)fetchTodayPageIndex;
- (id)lamaBabyModelAtIndex:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

