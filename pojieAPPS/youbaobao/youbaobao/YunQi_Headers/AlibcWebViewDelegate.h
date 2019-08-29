//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class AlibcURLBusContext, NSString;
@protocol UIWebViewDelegate;

@interface AlibcWebViewDelegate : NSObject <UIWebViewDelegate>
{
    _Bool _isCallingMethod$shouldStartLoadWithRequest;
    _Bool _isCallingMethod$webViewDidStartLoad;
    _Bool _isCallingMethod$webViewDidFinishLoad;
    _Bool _isCallingMethod$webViewDidFailLoadWithError;
    id <UIWebViewDelegate> _originDelegate;
    AlibcURLBusContext *_context;
}

@property(retain, nonatomic) AlibcURLBusContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <UIWebViewDelegate> originDelegate; // @synthesize originDelegate=_originDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

