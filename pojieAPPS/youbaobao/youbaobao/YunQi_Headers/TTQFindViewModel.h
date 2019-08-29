//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSArray, NSIndexPath, NSString;

@interface TTQFindViewModel : TTQViewModel
{
    _Bool _searchModel;
    _Bool _is_my_category;
    _Bool _ninSearchView;
    _Bool _ninDisaffiliateBtn;
    _Bool _resultOfChangesForMine;
    _Bool _trendStyle;
    int _extraType;
    NSArray *_forumCategorys;
    NSArray *_searchForums;
    CDUnknownBlockType _selectedAction;
    NSIndexPath *_selectedIndexPath;
    long long _initialCategoryID;
    NSString *_searchName;
}

@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
@property(nonatomic) long long initialCategoryID; // @synthesize initialCategoryID=_initialCategoryID;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType selectedAction; // @synthesize selectedAction=_selectedAction;
@property(nonatomic) int extraType; // @synthesize extraType=_extraType;
@property(nonatomic) _Bool trendStyle; // @synthesize trendStyle=_trendStyle;
@property(nonatomic) _Bool resultOfChangesForMine; // @synthesize resultOfChangesForMine=_resultOfChangesForMine;
@property(nonatomic) _Bool ninDisaffiliateBtn; // @synthesize ninDisaffiliateBtn=_ninDisaffiliateBtn;
@property(nonatomic) _Bool ninSearchView; // @synthesize ninSearchView=_ninSearchView;
@property(nonatomic) _Bool is_my_category; // @synthesize is_my_category=_is_my_category;
@property(nonatomic) _Bool searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) NSArray *searchForums; // @synthesize searchForums=_searchForums;
@property(retain, nonatomic) NSArray *forumCategorys; // @synthesize forumCategorys=_forumCategorys;
- (void).cxx_destruct;
- (id)identifierRowAtIndexPath:(id)arg1;
- (id)dataSource;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;

@end

