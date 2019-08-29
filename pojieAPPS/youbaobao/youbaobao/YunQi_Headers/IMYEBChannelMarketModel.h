//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol IMYEBBannerModel, IMYEBCategoryListModel, IMYEBShopwindowModel;

@interface IMYEBChannelMarketModel : NSObject
{
    NSArray<IMYEBCategoryListModel> *_category_data;
    NSArray<IMYEBBannerModel> *_banner_data;
    NSArray<IMYEBShopwindowModel> *_shopwindow_data;
    NSDictionary *_h5_data;
}

@property(copy, nonatomic) NSDictionary *h5_data; // @synthesize h5_data=_h5_data;
@property(retain, nonatomic) NSArray<IMYEBShopwindowModel> *shopwindow_data; // @synthesize shopwindow_data=_shopwindow_data;
@property(retain, nonatomic) NSArray<IMYEBBannerModel> *banner_data; // @synthesize banner_data=_banner_data;
@property(retain, nonatomic) NSArray<IMYEBCategoryListModel> *category_data; // @synthesize category_data=_category_data;
- (void).cxx_destruct;

@end

