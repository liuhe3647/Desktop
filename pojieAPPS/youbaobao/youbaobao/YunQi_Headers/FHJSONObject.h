//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FHJSONObject : NSObject
{
    id _objectValue;
}

+ (id)jsonFromString:(id)arg1;
+ (id)jsonObject:(id)arg1;
+ (id)jsonNUll;
@property(retain, nonatomic) id objectValue; // @synthesize objectValue=_objectValue;
- (void).cxx_destruct;
- (id)arrayValue;
- (id)array;
- (id)dictionaryValue;
- (id)dictionary;
- (unsigned long long)unsignedIntegerValue;
- (long long)integerValue;
- (double)doubleValue;
- (_Bool)boolValue;
- (id)numberValue;
- (id)number;
- (id)stringValue;
- (id)string;
@property(readonly, nonatomic) __weak id rawValue;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)setObjectAtIndex:(unsigned long long)arg1 object:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObjectForKey:(id)arg1 object:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (void)parseJSON:(id)arg1;
- (id)initWidthObject:(id)arg1;

@end

