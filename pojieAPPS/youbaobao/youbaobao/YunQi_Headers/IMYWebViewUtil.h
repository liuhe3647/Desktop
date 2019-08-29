//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYNJKWebViewProgressDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class IMYNJKWebViewProgress, NSError, NSString, NSURLRequest, RACDisposable, UIWebView;
@protocol UIWebViewDelegate;

@interface IMYWebViewUtil : NSObject <IMYNJKWebViewProgressDelegate, UIWebViewDelegate>
{
    _Bool _JSCallSuper;
    UIWebView *_webView;
    double _estimatedProgress;
    NSURLRequest *_firstRequest;
    NSURLRequest *_firstPageFinalRequest;
    NSString *_title;
    NSError *_error;
    id <UIWebViewDelegate> _webViewDelegate;
    IMYNJKWebViewProgress *_njkWebViewProgress;
    RACDisposable *_oldWebDelegateDisposable;
}

+ (id)stringByEvaluatingJavaScript:(id)arg1 callSuperWebView:(id)arg2 jsCallSuper:(_Bool)arg3;
+ (id)stringByEvaluatingJavaScript:(id)arg1 callSuperWebView:(id)arg2;
+ (id)injectWithWebView:(id)arg1;
@property(nonatomic) __weak RACDisposable *oldWebDelegateDisposable; // @synthesize oldWebDelegateDisposable=_oldWebDelegateDisposable;
@property(retain, nonatomic) IMYNJKWebViewProgress *njkWebViewProgress; // @synthesize njkWebViewProgress=_njkWebViewProgress;
@property(nonatomic) __weak id <UIWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURLRequest *firstPageFinalRequest; // @synthesize firstPageFinalRequest=_firstPageFinalRequest;
@property(retain, nonatomic) NSURLRequest *firstRequest; // @synthesize firstRequest=_firstRequest;
@property(nonatomic) double estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool JSCallSuper; // @synthesize JSCallSuper=_JSCallSuper;
- (void).cxx_destruct;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

