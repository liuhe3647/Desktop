//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBOldKnowledgePageBaseModel.h"

@class NSArray, NSString;

@interface YBBOldKnowledgePageHotWordsModel : YBBOldKnowledgePageBaseModel
{
    NSString *_hotWordsTitle;
    NSArray *_hotWordsList;
    double _cellHieght;
}

@property(nonatomic) double cellHieght; // @synthesize cellHieght=_cellHieght;
@property(copy, nonatomic) NSArray *hotWordsList; // @synthesize hotWordsList=_hotWordsList;
@property(copy, nonatomic) NSString *hotWordsTitle; // @synthesize hotWordsTitle=_hotWordsTitle;
- (void).cxx_destruct;
- (id)init;

@end

