//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYYQToolsBasicAdapter : NSObject
{
}

+ (id)searchWithWhere:(id)arg1 class:(Class)arg2;
+ (id)searchWithWhere:(id)arg1 orderBy:(id)arg2 offset:(long long)arg3 count:(long long)arg4 class:(Class)arg5;
+ (id)searchSingleWithWhere:(id)arg1 orderBy:(id)arg2 class:(Class)arg3;
+ (_Bool)updateToDBFor:(Class)arg1 set:(id)arg2 where:(id)arg3;
+ (id)searchWithSQL:(id)arg1 class:(Class)arg2;
+ (long long)rowCountFor:(Class)arg1 where:(id)arg2;
+ (_Bool)deleteToDB:(id)arg1;
+ (_Bool)saveToDB:(id)arg1;
+ (_Bool)updateToDB:(id)arg1;
+ (id)getUsingLKDBHelper:(Class)arg1;

@end

