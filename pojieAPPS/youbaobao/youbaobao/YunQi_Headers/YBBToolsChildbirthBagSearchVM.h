//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YBBToolsChildbirthBagSearchVM : NSObject
{
    _Bool _isBrand;
    unsigned long long _packageId;
    NSString *_searchPlaceholder;
    NSArray *_tableDatas;
    NSArray *_serviceDatas;
    NSString *_lastSearchText;
}

@property(retain, nonatomic) NSString *lastSearchText; // @synthesize lastSearchText=_lastSearchText;
@property(retain, nonatomic) NSArray *serviceDatas; // @synthesize serviceDatas=_serviceDatas;
@property(retain, nonatomic) NSArray *tableDatas; // @synthesize tableDatas=_tableDatas;
@property(retain, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(nonatomic) _Bool isBrand; // @synthesize isBrand=_isBrand;
@property(nonatomic) unsigned long long packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
- (id)getSearchModelBy:(id)arg1;
- (void)searchWithString:(id)arg1;
- (void)reqBuyfromDatas:(CDUnknownBlockType)arg1;
- (void)reqBrandNameDatas:(CDUnknownBlockType)arg1;
- (void)reqDatas:(CDUnknownBlockType)arg1;

@end

