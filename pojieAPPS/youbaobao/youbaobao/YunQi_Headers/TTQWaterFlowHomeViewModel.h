//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSArray, NSString, TTQTopicModel;

@interface TTQWaterFlowHomeViewModel : TTQViewModel
{
    _Bool _needRefresh;
    _Bool _firstRequest;
    _Bool _userModeChanged;
    _Bool _isDataRequesting;
    _Bool _feedsSourceChange;
    long long _responseNums;
    NSString *_search_keyword_conf;
    NSArray *_entrances;
    NSArray *_top_ad_cfg;
    TTQTopicModel *_uploadingItem;
    NSString *_cacheKey;
}

@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) TTQTopicModel *uploadingItem; // @synthesize uploadingItem=_uploadingItem;
@property(retain, nonatomic) NSArray *top_ad_cfg; // @synthesize top_ad_cfg=_top_ad_cfg;
@property(retain, nonatomic) NSArray *entrances; // @synthesize entrances=_entrances;
@property(nonatomic) _Bool feedsSourceChange; // @synthesize feedsSourceChange=_feedsSourceChange;
@property(copy, nonatomic) NSString *search_keyword_conf; // @synthesize search_keyword_conf=_search_keyword_conf;
@property(nonatomic) long long responseNums; // @synthesize responseNums=_responseNums;
@property(nonatomic) _Bool isDataRequesting; // @synthesize isDataRequesting=_isDataRequesting;
@property(nonatomic) _Bool userModeChanged; // @synthesize userModeChanged=_userModeChanged;
@property(nonatomic) _Bool firstRequest; // @synthesize firstRequest=_firstRequest;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
- (void).cxx_destruct;
- (id)tableCellModelAtIndexPath:(id)arg1;
- (id)tableSectionModel:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)removeUserUploadItem;
- (void)addUserUploadedItem:(id)arg1;
- (void)dataSourceFromCache;
- (id)cacheDictionary;
- (void)saveCache:(id)arg1;
- (void)saveCacheWithCurSource;
- (void)calculateItemSizeInDatasource:(id)arg1;
- (id)httpBuilderForNextPage:(_Bool)arg1 andInput:(id)arg2;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;
- (void)removeObject:(id)arg1 atIndexPath:(id)arg2;
- (void)removeObject:(id)arg1;
- (id)init;

@end

