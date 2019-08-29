//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface YBBToolsBanActModel : NSObject
{
    long long _actId;
    long long _categoryId;
    NSString *_icon;
    NSString *_icon_small;
    long long _sort;
    unsigned long long _actNotice;
    NSString *_act_explain;
    NSString *_title;
    NSString *_title_long;
    NSAttributedString *_contentAttr;
    NSAttributedString *_titleAttr;
}

+ (void)initialize;
@property(retain, nonatomic) NSAttributedString *titleAttr; // @synthesize titleAttr=_titleAttr;
@property(retain, nonatomic) NSAttributedString *contentAttr; // @synthesize contentAttr=_contentAttr;
@property(copy, nonatomic) NSString *title_long; // @synthesize title_long=_title_long;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *act_explain; // @synthesize act_explain=_act_explain;
@property(nonatomic) unsigned long long actNotice; // @synthesize actNotice=_actNotice;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *icon_small; // @synthesize icon_small=_icon_small;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long actId; // @synthesize actId=_actId;
- (void).cxx_destruct;
- (id)attrFromString:(id)arg1 isTitle:(_Bool)arg2;
- (id)getNoticeIconWithNotice:(unsigned long long)arg1;

@end

