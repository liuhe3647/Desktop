//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYVKWebViewController, IMYWebMessageModel, NSDictionary, NSString, NSURLRequest;

@protocol IMYVKWebViewControllerDelegate <NSObject>

@optional
- (void)imy_webVCDidLoadFinished:(IMYVKWebViewController *)arg1;
- (_Bool)imy_webVCRunShareAction:(IMYVKWebViewController *)arg1;
- (_Bool)imy_webVC:(IMYVKWebViewController *)arg1 runActionWithMessageModel:(IMYWebMessageModel *)arg2;
- (_Bool)imy_webVC:(IMYVKWebViewController *)arg1 interceptMessageModel:(IMYWebMessageModel *)arg2;
- (_Bool)imy_webVC:(IMYVKWebViewController *)arg1 interceptShouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 returnVar:(_Bool *)arg4;
- (_Bool)imy_webVC:(IMYVKWebViewController *)arg1 shouldStartURLRequest:(NSURLRequest *)arg2;
- (NSDictionary *)imy_webVC:(IMYVKWebViewController *)arg1 urlString:(NSString *)arg2 params:(NSDictionary *)arg3;
@end

