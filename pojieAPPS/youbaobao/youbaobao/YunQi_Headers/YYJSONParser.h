//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YYJSONParser : NSObject
{
    _Bool _single;
    Class _clazz;
    NSString *_key;
    id _result;
}

+ (id)objectWithKey:(id)arg1 clazz:(Class)arg2;
+ (id)objectWithKey:(id)arg1 clazz:(Class)arg2 single:(_Bool)arg3;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool single; // @synthesize single=_single;
@property(nonatomic) Class clazz; // @synthesize clazz=_clazz;
- (void).cxx_destruct;
@property(readonly, nonatomic) id smartResult;
- (id)initWithKey:(id)arg1 clazz:(Class)arg2 single:(_Bool)arg3;

@end

