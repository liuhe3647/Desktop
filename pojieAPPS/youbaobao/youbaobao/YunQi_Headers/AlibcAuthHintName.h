//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AlibcAuthHintName : NSObject
{
    NSMutableDictionary *_dicHintName;
    NSMutableDictionary *_dicHintForDebug;
}

+ (id)sharedInstantce;
@property(retain, nonatomic) NSMutableDictionary *dicHintForDebug; // @synthesize dicHintForDebug=_dicHintForDebug;
@property(retain, nonatomic) NSMutableDictionary *dicHintName; // @synthesize dicHintName=_dicHintName;
- (void).cxx_destruct;
- (id)exchangeHint:(id)arg1;
- (void)addHintName:(id)arg1 name:(id)arg2;
- (id)getName:(id)arg1;
- (id)init;

@end

