//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYCacheManagerProtocol-Protocol.h"

@class NSString, YYDiskCache, YYMemoryCache;

@interface YYCache : NSObject <IMYCacheManagerProtocol>
{
    NSString *_name;
    YYMemoryCache *_memoryCache;
    YYDiskCache *_diskCache;
}

+ (id)cacheWithPath:(id)arg1;
+ (id)cacheWithName:(id)arg1;
@property(readonly) YYDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(readonly) YYMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeAllObjectsWithProgressBlock:(CDUnknownBlockType)arg1 endBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (void)containsObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;
@property unsigned long long totalCostLimit;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;

// Remaining properties
@property unsigned long long countLimit;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

