//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface IMYLaunchRangeManager : NSObject
{
    NSMutableArray *_cachedRangeArray;
    NSString *_url;
}

+ (void)completeDealloc;
+ (id)shareRangeManager;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *cachedRangeArray; // @synthesize cachedRangeArray=_cachedRangeArray;
- (void).cxx_destruct;
- (void)addCacheRange:(struct _NSRange)arg1;
- (id)calculateRangeModelArrayForLoadingRequest:(id)arg1;

@end

