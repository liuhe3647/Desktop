//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYCacheHelper : NSObject
{
}

+ (id)clearCacheNotification;
+ (void)clearCacheData;
+ (id)sharedCacheManager;
+ (void)loadShowedMapData;
+ (void)initialize;
+ (id)getShowObjectForKey:(id)arg1;
+ (void)setShowObject:(id)arg1 forKey:(id)arg2;
+ (long long)getShowCountForKey:(id)arg1;
+ (void)addShowCount:(long long)arg1 forKey:(id)arg2;
+ (id)lastShowedObjectForKey:(id)arg1;
+ (void)addShowedObject:(id)arg1 forKey:(id)arg2;
+ (_Bool)hasShowedContainObject:(id)arg1 forKey:(id)arg2;
+ (id)cachedFilePathForKey:(id)arg1;
+ (_Bool)cacheDataValidedForKey:(id)arg1 validDay:(float)arg2 timeDiff:(long long *)arg3;
+ (id)cacheDataForKey:(id)arg1 validDay:(float)arg2 timeDiff:(long long *)arg3;
+ (void)cacheDataForKey:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;
+ (id)cacheDataForKey:(id)arg1;
+ (void)setCacheData:(id)arg1 forKey:(id)arg2;
+ (void)setCacheDataFromJsonObject:(id)arg1 forKey:(id)arg2;
+ (void)initShowObjectMap;
+ (void)writeToFileByShowObjectMap;
+ (void)initShowedQueueMap;
+ (void)writeToFileByShowedQueueMap;
+ (void)loadShowedMapData;
+ (void)clearIMYViewKitCache;

@end

