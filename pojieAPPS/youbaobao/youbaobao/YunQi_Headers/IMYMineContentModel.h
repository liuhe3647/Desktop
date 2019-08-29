//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYMineSectionModel, NSArray;
@protocol IMYMineCellModel;

@interface IMYMineContentModel : NSObject
{
    IMYMineSectionModel *_sectionModel;
    NSArray<IMYMineCellModel> *_cellModel;
}

+ (id)modelPropertyBlacklist;
@property(retain, nonatomic) NSArray<IMYMineCellModel> *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) IMYMineSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
- (void).cxx_destruct;
- (id)initWithSectionModel:(id)arg1 cellModels:(id)arg2;

@end

