//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSArray, NSMutableArray, RACCommand, TTQForumModel, TTQForumTagModel;
@protocol IMYIAdManager;

@interface TTQTopicsViewModel : TTQViewModel
{
    _Bool _isForumDetailRequesting;
    _Bool _isAsyncForumInfoSuccess;
    _Bool _isForumListRequesting;
    _Bool _hasReadNewest;
    _Bool _sourceChange;
    _Bool _topTopicChanged;
    _Bool _tabIsNew;
    _Bool _isWaterFlow;
    _Bool _isFirstRequest;
    _Bool _isFirstTabRequest;
    id <IMYIAdManager> _adManager;
    long long _forum_id;
    TTQForumModel *_forum;
    TTQForumTagModel *_currentTagModel;
    long long _topicFilter;
    RACCommand *_signInCommand;
    long long _newestTopicId;
    long long _tab_id;
    long long _tabIndex;
    unsigned long long _locate_topic_id;
    NSArray *_filterKeys;
    long long _user_infoCode;
    long long _pageType;
    long long _initTopicFilter;
    long long _tabFirstGetDataFlag;
    NSMutableArray *_pUserPostsTopics;
}

+ (id)viewModelWithForum:(id)arg1;
+ (id)viewModelWithforum_id:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *pUserPostsTopics; // @synthesize pUserPostsTopics=_pUserPostsTopics;
@property(nonatomic) _Bool isFirstTabRequest; // @synthesize isFirstTabRequest=_isFirstTabRequest;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) long long tabFirstGetDataFlag; // @synthesize tabFirstGetDataFlag=_tabFirstGetDataFlag;
@property(nonatomic) long long initTopicFilter; // @synthesize initTopicFilter=_initTopicFilter;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long user_infoCode; // @synthesize user_infoCode=_user_infoCode;
@property(retain, nonatomic) NSArray *filterKeys; // @synthesize filterKeys=_filterKeys;
@property(nonatomic) _Bool isWaterFlow; // @synthesize isWaterFlow=_isWaterFlow;
@property(nonatomic) unsigned long long locate_topic_id; // @synthesize locate_topic_id=_locate_topic_id;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(nonatomic) _Bool tabIsNew; // @synthesize tabIsNew=_tabIsNew;
@property(nonatomic) long long tab_id; // @synthesize tab_id=_tab_id;
@property(nonatomic) _Bool topTopicChanged; // @synthesize topTopicChanged=_topTopicChanged;
@property(nonatomic) _Bool sourceChange; // @synthesize sourceChange=_sourceChange;
@property(nonatomic) long long newestTopicId; // @synthesize newestTopicId=_newestTopicId;
@property(nonatomic) _Bool hasReadNewest; // @synthesize hasReadNewest=_hasReadNewest;
@property(retain, nonatomic) RACCommand *signInCommand; // @synthesize signInCommand=_signInCommand;
@property(nonatomic) long long topicFilter; // @synthesize topicFilter=_topicFilter;
@property(retain, nonatomic) TTQForumTagModel *currentTagModel; // @synthesize currentTagModel=_currentTagModel;
@property(nonatomic) _Bool isForumListRequesting; // @synthesize isForumListRequesting=_isForumListRequesting;
@property(nonatomic) _Bool isAsyncForumInfoSuccess; // @synthesize isAsyncForumInfoSuccess=_isAsyncForumInfoSuccess;
@property(nonatomic) _Bool isForumDetailRequesting; // @synthesize isForumDetailRequesting=_isForumDetailRequesting;
@property(retain, nonatomic) TTQForumModel *forum; // @synthesize forum=_forum;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(retain, nonatomic) id <IMYIAdManager> adManager; // @synthesize adManager=_adManager;
- (void).cxx_destruct;
- (id)sectionFooterDic:(long long)arg1;
- (id)sectionHeaderDic:(long long)arg1;
- (_Bool)isHiddenPartSectionHeader:(long long)arg1;
- (void)calculateItemSizeInDatasource:(id)arg1;
- (_Bool)dataSourceFromCacheWithFirst:(long long)arg1;
- (void)dataSourceFromCache;
- (void)removeCacheData;
- (id)cacheDictionary;
- (void)saveCache:(id)arg1;
- (void)updateOrSaveCacheWithResponse:(id)arg1;
- (void)saveCacheWithCurSource;
- (id)cacheKey;
- (void)clearOldCacheBelow6_1;
- (void)navigateWithSpecialIndex:(long long)arg1;
- (_Bool)isShowExpert;
- (long long)countShouldShowSpecial;
- (void)gotoHonorHallDirect:(_Bool)arg1;
- (_Bool)isShowImage:(id)arg1;
- (id)httpBuilderForNextPage:(_Bool)arg1 andInput:(id)arg2;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;
- (void)refreshAdManager;
- (id)identifierRowAtIndexPath:(id)arg1;
- (id)tableSectionModelWith:(long long)arg1;
- (id)tableCellModelAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)clearUserPostsTopics;
- (id)userPostsTopics;
- (long long)topicsCount;
- (long long)topTopicsCount;
- (long long)allDataSourceCount;
- (id)topics;
- (void)setTopics:(id)arg1;
- (id)topTopics;
- (void)setDataSource:(id)arg1;
- (void)blockWithParams:(CDUnknownBlockType)arg1 data:(id)arg2 error:(id)arg3;
- (void)doPriaseWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setTopTopics:(id)arg1 topics:(id)arg2;
- (void)commonInit;
- (id)initWithForum:(id)arg1;
- (id)initWithforum_id:(long long)arg1;

@end

