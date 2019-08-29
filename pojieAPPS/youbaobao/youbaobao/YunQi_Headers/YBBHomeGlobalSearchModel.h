//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBBHomeModel-Protocol.h"

@class NSArray, NSString;

@interface YBBHomeGlobalSearchModel : NSObject <YBBHomeModel>
{
    double rowHeight;
    NSString *_cellClass;
    NSArray *_keywords;
}

+ (id)rowModelsWithKeywords:(id)arg1;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSString *cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) double rowHeight; // @synthesize rowHeight;
- (void).cxx_destruct;
- (double)searchKeywordCellHeight;
- (id)targetWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

