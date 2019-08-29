//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSArray, NSString;

@interface TTQVideoListViewModel : TTQViewModel
{
    unsigned long long _sourceType;
    _Bool _isRequesting;
    unsigned long long _userID;
    unsigned long long _categoryID;
    NSString *_categoryTitle;
    NSArray *_categories;
    CDUnknownBlockType _callBack;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(nonatomic) unsigned long long categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sourceType;
- (id)tableCellModelAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)videoItemViewModelsFromViewItemModels:(id)arg1;
- (void)cacheDataWithResponse:(id)arg1;
- (id)httpBuilderForNextPage:(_Bool)arg1 andInput:(id)arg2;
- (_Bool)shouldAddCategoriesTab;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;
- (id)init;

@end

