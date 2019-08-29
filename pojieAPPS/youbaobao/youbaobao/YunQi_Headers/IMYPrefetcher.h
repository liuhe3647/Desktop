//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMYPrefetcher : NSObject
{
    NSMutableDictionary *_imageUrls;
    NSMutableDictionary *_webUrls;
}

+ (id)sharedQueue;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *webUrls; // @synthesize webUrls=_webUrls;
@property(retain, nonatomic) NSMutableDictionary *imageUrls; // @synthesize imageUrls=_imageUrls;
- (void).cxx_destruct;
- (id)videoPosterExpression;
- (id)imgSrcExpression;
- (id)scriptSrcExpression;
- (id)cssHrefExpression;
- (id)urlsWithHTML:(id)arg1 regular:(id)arg2 forKey:(id)arg3 baseURL:(id)arg4;
- (void)cancelAllPrefetchWebUrl;
- (void)cacheDetailImage:(id)arg1 data:(id)arg2 imageURL:(id)arg3 webpURL:(id)arg4;
- (void)lockPrefetchDetailImages:(id)arg1 detailImages:(id)arg2 forWebUrl:(id)arg3;
- (void)prefetchDetailImages:(id)arg1 forWebUrl:(id)arg2;
- (void)prefetchImagesWithHTML:(id)arg1 baseURL:(id)arg2 forWebUrl:(id)arg3;
- (void)lockPrefetchFileWithUrls:(id)arg1 forWebUrl:(id)arg2;
- (void)prefetchFileWithUrls:(id)arg1 forWebUrl:(id)arg2;
- (void)prefetchScriptWithHTML:(id)arg1 baseURL:(id)arg2 forWebUrl:(id)arg3;
- (void)prefetchCSSWithHTML:(id)arg1 baseURL:(id)arg2 forWebUrl:(id)arg3;
- (id)findAllResourcesURLWithWithHTML:(id)arg1 baseURL:(id)arg2;
- (id)findAllScriptURLWithWithHTML:(id)arg1 baseURL:(id)arg2;
- (void)realPrefetchResourcesWithHTML:(id)arg1 baseURL:(id)arg2 forWebUrl:(id)arg3;
- (void)prefetchResourcesWithHTML:(id)arg1 baseURL:(id)arg2 forWebUrl:(id)arg3;
- (void)lockPrefetchDetailHTML:(id)arg1;
- (id)prefetchWebUrl:(id)arg1;
- (long long)currentRuningCount:(id)arg1;
- (void)cancelAllPrefetchImageUrls;
- (id)lockPrefetchImageUrls:(id)arg1;
- (id)prefetchImageUrls:(id)arg1;
- (id)init;

@end

