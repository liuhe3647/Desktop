//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class _PSDDBElement, _PSDEventElement, _PSDHTTPElement, _PSDPatchElement, _PSDUIElement, _PSDWebViewElement;
@protocol _PSDVisitor;

@protocol _PSDVisitor <NSObject>
+ (id <_PSDVisitor>)visitor;
- (void)visitPatchElement:(_PSDPatchElement *)arg1;
- (void)visitEventElement:(_PSDEventElement *)arg1;
- (void)visitUIElement:(_PSDUIElement *)arg1;
- (void)visitDBElement:(_PSDDBElement *)arg1;
- (void)visitWebViewElement:(_PSDWebViewElement *)arg1;
- (void)visitHTTPElement:(_PSDHTTPElement *)arg1;
@end

