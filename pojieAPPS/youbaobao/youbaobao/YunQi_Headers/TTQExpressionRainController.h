//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TTQExpressionRainCache;

@interface TTQExpressionRainController : NSObject
{
    NSArray *_models;
    NSArray *_keys;
    TTQExpressionRainCache *_rainCache;
}

+ (id)sharedExpressionRainController;
+ (void)load;
@property(retain, nonatomic) TTQExpressionRainCache *rainCache; // @synthesize rainCache=_rainCache;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)fullImageDownloadWith:(id)arg1;
- (_Bool)isFullImageWith:(id)arg1;
- (id)imagesWith:(id)arg1;
- (id)getExpressionRainConfig;
- (void)getDataSourceCache;
- (id)firstValidMatcheInString:(id)arg1;
- (id)firstMatcheInString:(id)arg1;
- (id)validMatchesInString:(id)arg1;
- (id)matchesInString:(id)arg1;
- (id)init;

@end

