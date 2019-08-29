//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol IMYEBSessionDetailModel;

@interface IMYEBFavouritesModel : NSObject
{
    _Bool _is_login;
    _Bool _default_has_more;
    _Bool _coming_down_has_more;
    long long _default_page;
    long long _coming_down_page;
    NSArray<IMYEBSessionDetailModel> *_default_item_list;
    NSArray<IMYEBSessionDetailModel> *_tbk_item_list;
    NSArray<IMYEBSessionDetailModel> *_rec_item_list;
    long long _default_style;
}

@property(nonatomic) long long default_style; // @synthesize default_style=_default_style;
@property(retain, nonatomic) NSArray<IMYEBSessionDetailModel> *rec_item_list; // @synthesize rec_item_list=_rec_item_list;
@property(retain, nonatomic) NSArray<IMYEBSessionDetailModel> *tbk_item_list; // @synthesize tbk_item_list=_tbk_item_list;
@property(retain, nonatomic) NSArray<IMYEBSessionDetailModel> *default_item_list; // @synthesize default_item_list=_default_item_list;
@property(nonatomic) long long coming_down_page; // @synthesize coming_down_page=_coming_down_page;
@property(nonatomic) _Bool coming_down_has_more; // @synthesize coming_down_has_more=_coming_down_has_more;
@property(nonatomic) long long default_page; // @synthesize default_page=_default_page;
@property(nonatomic) _Bool default_has_more; // @synthesize default_has_more=_default_has_more;
@property(nonatomic) _Bool is_login; // @synthesize is_login=_is_login;
- (void).cxx_destruct;

@end

