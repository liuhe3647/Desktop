//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSArray, NSDictionary, NSString;

@interface TTQGroupSearchVM : TTQViewModel
{
    _Bool _bFromQuanzi;
    NSString *_searchText;
    NSString *_searchPlaceholder;
    long long _targetType;
    NSArray *_tags;
    NSArray *_histories;
    long long _forumId;
    NSString *_searchTitle;
    NSDictionary *_dicDatas;
    NSArray *_words_ids;
    NSArray *_question_ids;
}

+ (void)insertKeyword:(id)arg1;
+ (id)readSearchPlaceholder;
+ (id)reqWordKey;
@property(retain, nonatomic) NSArray *question_ids; // @synthesize question_ids=_question_ids;
@property(retain, nonatomic) NSArray *words_ids; // @synthesize words_ids=_words_ids;
@property(readonly, copy, nonatomic) NSDictionary *dicDatas; // @synthesize dicDatas=_dicDatas;
@property(copy, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(nonatomic) _Bool bFromQuanzi; // @synthesize bFromQuanzi=_bFromQuanzi;
@property(nonatomic) long long forumId; // @synthesize forumId=_forumId;
@property(retain, nonatomic) NSArray *histories; // @synthesize histories=_histories;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(copy, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (id)identifierRowAtIndexPath:(id)arg1;
- (void)gotoAskResultWithKeyword:(id)arg1 wordId:(long long)arg2 askType:(long long)arg3 BIType:(unsigned long long)arg4 index:(long long)arg5;
- (void)doPostBISearchWordClickDataWithKeyWord:(id)arg1 wordsType:(long long)arg2 location:(id)arg3 locationIndex:(long long)arg4;
- (void)doPostBISearchExposureDataWithWords:(id)arg1 category:(id)arg2;
- (void)wordShowBI;
- (void)clearHistory;
- (unsigned long long)searchTypeAtSection:(unsigned long long)arg1;
- (void)readWordKey;
- (id)initWithFromQuan:(_Bool)arg1 forumId:(long long)arg2;

@end

