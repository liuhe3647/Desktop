//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol IMYEBSessionDetailModel;

@interface IMYEBClassifiedTabModel : NSObject
{
    NSString *_tabName;
    long long _tabId;
    NSString *_bg_image;
    NSMutableArray<IMYEBSessionDetailModel> *_item_list;
    long long _list_style;
    long long _item_show_num;
}

@property(nonatomic) long long item_show_num; // @synthesize item_show_num=_item_show_num;
@property(nonatomic) long long list_style; // @synthesize list_style=_list_style;
@property(retain, nonatomic) NSMutableArray<IMYEBSessionDetailModel> *item_list; // @synthesize item_list=_item_list;
@property(nonatomic) NSString *bg_image; // @synthesize bg_image=_bg_image;
@property(nonatomic) long long tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;

@end

