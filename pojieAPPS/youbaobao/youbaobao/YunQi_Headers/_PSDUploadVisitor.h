//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_PSDVisitor-Protocol.h"

@class NSMutableArray, NSString;

@interface _PSDUploadVisitor : NSObject <_PSDVisitor>
{
    NSMutableArray *_elementArray;
}

+ (id)visitor;
@property(retain, nonatomic) NSMutableArray *elementArray; // @synthesize elementArray=_elementArray;
- (void).cxx_destruct;
- (void)flushElements;
- (void)addElement:(id)arg1;
- (void)flush;
- (void)visitPatchElement:(id)arg1;
- (void)visitEventElement:(id)arg1;
- (void)visitUIElement:(id)arg1;
- (void)visitDBElement:(id)arg1;
- (void)visitWebViewElement:(id)arg1;
- (void)visitHTTPElement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

