//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol IMYMineCellModel, IMYMineSectionModel;

@interface IMYMineAllContentModel : NSObject
{
    NSArray<IMYMineSectionModel> *_sections;
    NSArray<IMYMineCellModel> *_items;
}

@property(retain, nonatomic) NSArray<IMYMineCellModel> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray<IMYMineSectionModel> *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (_Bool)imy_yyjsonModelDidFromDictionary:(id)arg1;

@end

