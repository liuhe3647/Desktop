//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEBKeyMarketingModel, NSArray;
@protocol IMYEBSearchKeywordHotModel;

@interface IMYEBKeywordListModel : NSObject
{
    NSArray<IMYEBSearchKeywordHotModel> *_keyword_hot;
    NSArray *_keyword_default;
    IMYEBKeyMarketingModel *_key_marketing;
}

@property(retain, nonatomic) IMYEBKeyMarketingModel *key_marketing; // @synthesize key_marketing=_key_marketing;
@property(retain, nonatomic) NSArray *keyword_default; // @synthesize keyword_default=_keyword_default;
@property(retain, nonatomic) NSArray<IMYEBSearchKeywordHotModel> *keyword_hot; // @synthesize keyword_hot=_keyword_hot;
- (void).cxx_destruct;

@end

