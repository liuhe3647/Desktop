//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACDisposable.h"

@class NSObject, NSString;

@interface RACKVOTrampoline : RACDisposable
{
    NSString *_keyPath;
    CDUnknownBlockType _block;
    NSObject *_unsafeTarget;
    NSObject *_weakTarget;
    NSObject *_observer;
}

@property(readonly, nonatomic) __weak NSObject *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) __weak NSObject *weakTarget; // @synthesize weakTarget=_weakTarget;
@property(readonly, nonatomic) NSObject *unsafeTarget; // @synthesize unsafeTarget=_unsafeTarget;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dispose;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;

@end

