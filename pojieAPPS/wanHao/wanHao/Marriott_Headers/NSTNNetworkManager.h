//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTNReachability, NSTNWebView;

@interface NSTNNetworkManager : NSObject <UIWebViewDelegate, WKNavigationDelegate>
{
    NSTNReachability *hostReach;
    NSMutableArray *appLaunchURLs;
    _Bool connected;
    _Bool htmlLoaded;
    _Bool initProcessed;
    _Bool isRefreshing;
    NSTNWebView *_webview;
}

+ (id)stringByEvaluatingJavaScript:(id)arg1;
+ (void)initWebView;
+ (id)encodeURL:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)networkManager;
@property(retain, nonatomic) NSTNWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (id)getAppLaunchURLAtIndex:(int)arg1;
- (void)addAppLaunchURL:(id)arg1;
- (id)SSID;
- (id)reachType;
- (_Bool)isRefreshing;
- (_Bool)assertWebView;
- (id)hostReach;
- (_Bool)htmlLoaded;
- (_Bool)isConnected;
- (void)setInitProcessed:(_Bool)arg1;
- (_Bool)initProcessed;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (id)evalStringThroughWebView:(id)arg1;
- (void)updateTagUrlString:(id)arg1;
- (void)loadWebView;
- (void)initWebView;
- (void)updateWebview;
- (void)updateConfig;
- (void)reloadNetworkResources:(_Bool)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)setupReachabilityListeners;
- (void)stopHostNotifier;
- (id)hostReachDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

