//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray;

@interface IMYClickPathQueue : NSObject <NSCopying>
{
    NSMutableArray *_allPaths;
}

+ (id)pathQueueWithPathArray:(id)arg1;
+ (id)pathQueueWithPath:(id)arg1;
+ (id)pathQueueWithFirstSourceID:(long long)arg1;
- (void).cxx_destruct;
- (id)lastObject;
- (void)addObject:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *allPaths;
- (void)setAllPaths:(id)arg1;
- (id)init;

@end

