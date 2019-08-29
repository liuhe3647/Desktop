//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IMYEBBrandItemModel;

@interface IMYEBBrandItemListModel : NSObject
{
    _Bool _isSorted;
    _Bool _isOperationed;
    NSString *_brand_area_tag;
    NSString *_update_msg;
    NSString *_slogan_picture;
    long long _update_counter;
    long long _itemType;
    NSString *_youziMessage;
    NSArray<IMYEBBrandItemModel> *_item_list;
}

@property(retain, nonatomic) NSArray<IMYEBBrandItemModel> *item_list; // @synthesize item_list=_item_list;
@property(copy, nonatomic) NSString *youziMessage; // @synthesize youziMessage=_youziMessage;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) _Bool isOperationed; // @synthesize isOperationed=_isOperationed;
@property(nonatomic) _Bool isSorted; // @synthesize isSorted=_isSorted;
@property(nonatomic) long long update_counter; // @synthesize update_counter=_update_counter;
@property(copy, nonatomic) NSString *slogan_picture; // @synthesize slogan_picture=_slogan_picture;
@property(copy, nonatomic) NSString *update_msg; // @synthesize update_msg=_update_msg;
@property(copy, nonatomic) NSString *brand_area_tag; // @synthesize brand_area_tag=_brand_area_tag;
- (void).cxx_destruct;

@end

