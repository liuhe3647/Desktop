//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYSafeArray, NSArray;

@interface IMYMineContentViewModel : NSObject
{
    IMYSafeArray *_contentModel;
    NSArray *_gridDataArray;
    NSArray *_gridAndSimpleDataArray;
}

+ (void)removeNewWithAssoId:(long long)arg1;
+ (_Bool)setNewWithModel:(id)arg1;
+ (unsigned long long)priorityOfCount:(id)arg1;
+ (_Bool)shouldSetCount:(id)arg1 nowCount:(id)arg2;
+ (id)sandBoxJsonPath;
+ (_Bool)deleteMineCache;
@property(retain, nonatomic) NSArray *gridAndSimpleDataArray; // @synthesize gridAndSimpleDataArray=_gridAndSimpleDataArray;
@property(retain, nonatomic) NSArray *gridDataArray; // @synthesize gridDataArray=_gridDataArray;
@property(retain, nonatomic) IMYSafeArray *contentModel; // @synthesize contentModel=_contentModel;
- (void).cxx_destruct;
- (id)thirdPartyContentModel;
- (void)changeProbationImage;
- (id)getImage:(id)arg1;
- (long long)revertModeToOrdinalNum:(unsigned long long)arg1;
- (void)requestMineContentWithSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)sortModelWithMode:(unsigned long long)arg1 isChangeMode:(_Bool)arg2;
- (id)setUpContentModelWithJsonData:(id)arg1;
- (void)loadCacheData;
- (id)init;

@end

