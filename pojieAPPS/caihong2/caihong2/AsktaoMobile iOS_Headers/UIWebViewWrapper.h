//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSString, UIWebView, WKWebView;

@interface UIWebViewWrapper : NSObject <UIWebViewDelegate, WKNavigationDelegate>
{
    _Bool _useWKWebView;
    UIWebView *_uiWebView;
    WKWebView *_wkWebView;
    NSString *_jsScheme;
    function_10b5811e _shouldStartLoading;
    function_ef19a04c _didFinishLoading;
    function_ef19a04c _didFailLoading;
    function_ef19a04c _onJsCallback;
}

+ (id)webViewWrapper;
@property(copy, nonatomic) NSString *jsScheme; // @synthesize jsScheme=_jsScheme;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property(nonatomic) function_ef19a04c onJsCallback; // @synthesize onJsCallback=_onJsCallback;
@property(nonatomic) function_ef19a04c didFailLoading; // @synthesize didFailLoading=_didFailLoading;
@property(nonatomic) function_ef19a04c didFinishLoading; // @synthesize didFinishLoading=_didFinishLoading;
@property(nonatomic) function_10b5811e shouldStartLoading; // @synthesize shouldStartLoading=_shouldStartLoading;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setScalesPageToFit:(_Bool)arg1;
- (void)evaluateJS:(const basic_string_7c0a1c0b *)arg1;
- (void)goForward;
- (void)goBack;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
- (void)reload;
- (void)stopLoading;
- (void)loadFile:(const basic_string_7c0a1c0b *)arg1;
- (void)loadUrl:(const basic_string_7c0a1c0b *)arg1;
- (void)loadHTMLString:(const basic_string_7c0a1c0b *)arg1 baseURL:(const basic_string_7c0a1c0b *)arg2;
- (void)loadData:(const basic_string_7c0a1c0b *)arg1 MIMEType:(const basic_string_7c0a1c0b *)arg2 textEncodingName:(const basic_string_7c0a1c0b *)arg3 baseURL:(const basic_string_7c0a1c0b *)arg4;
- (void)setJavascriptInterfaceScheme:(const basic_string_7c0a1c0b *)arg1;
- (void)setFrameWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)useWKWebViewInIos:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)setupWKWebView;
- (void)setupUIWebView;
- (void)setupWebView;
- (_Bool)hasWebView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
