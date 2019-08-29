//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface LKModelInfos : NSObject
{
    NSMutableDictionary *_proNameDic;
    NSMutableDictionary *_sqlNameDic;
    NSArray *_primaryKeys;
}

- (void).cxx_destruct;
- (void)removeWithColumnName:(id)arg1;
- (void)updateProperty:(id)arg1 sqlColumnName:(id)arg2;
- (void)updateProperty:(id)arg1 propertyName:(id)arg2;
- (id)objectWithSqlColumnName:(id)arg1;
- (id)objectWithPropertyName:(id)arg1;
- (id)objectWithIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *primaryKeys;
- (void)addDBPropertyWithType:(id)arg1 cname:(id)arg2 ctype:(id)arg3 pname:(id)arg4 ptype:(id)arg5;
- (id)initWithKeyMapping:(id)arg1 propertyNames:(id)arg2 propertyType:(id)arg3 primaryKeys:(id)arg4;

@end
