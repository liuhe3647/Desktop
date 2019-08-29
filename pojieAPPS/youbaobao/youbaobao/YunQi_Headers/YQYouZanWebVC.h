//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "IMYThemeChangedProtocol-Protocol.h"
#import "IMYVKWebViewControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "YZWebViewDelegate-Protocol.h"
#import "YZWebViewNoticeDelegate-Protocol.h"

@class IMYCaptionView, IMYWebViewUtil, NJKWebViewProgressView, NSString, UIBarButtonItem, UIButton, YQYouzanItemOpenModel, YZWebView;

@interface YQYouZanWebVC : SYBaseViewController <UIWebViewDelegate, IMYVKWebViewControllerDelegate, IMYThemeChangedProtocol, YZWebViewNoticeDelegate, YZWebViewDelegate>
{
    _Bool _isPay;
    _Bool _isBack;
    YZWebView *_webView;
    UIBarButtonItem *_closeBarButtonItem;
    NSString *_token;
    YQYouzanItemOpenModel *_goodDetailModel;
    UIButton *_customPhotosBtn;
    double _loadedGoodDetailWebTime;
    IMYWebViewUtil *_webUtil;
    NJKWebViewProgressView *_progressView;
    double _showProgressValue;
    IMYCaptionView *_captionView;
    NSString *_getOrderNoPath;
    NSString *_getOrderNoJS;
}

+ (id)webWithURLString:(id)arg1;
@property(copy, nonatomic) NSString *getOrderNoJS; // @synthesize getOrderNoJS=_getOrderNoJS;
@property(copy, nonatomic) NSString *getOrderNoPath; // @synthesize getOrderNoPath=_getOrderNoPath;
@property(nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) double showProgressValue; // @synthesize showProgressValue=_showProgressValue;
@property(retain, nonatomic) NJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) IMYWebViewUtil *webUtil; // @synthesize webUtil=_webUtil;
@property(nonatomic) double loadedGoodDetailWebTime; // @synthesize loadedGoodDetailWebTime=_loadedGoodDetailWebTime;
@property(nonatomic) _Bool isBack; // @synthesize isBack=_isBack;
@property(retain, nonatomic) UIButton *customPhotosBtn; // @synthesize customPhotosBtn=_customPhotosBtn;
@property(retain, nonatomic) YQYouzanItemOpenModel *goodDetailModel; // @synthesize goodDetailModel=_goodDetailModel;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) UIBarButtonItem *closeBarButtonItem; // @synthesize closeBarButtonItem=_closeBarButtonItem;
@property(retain, nonatomic) YZWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getOrderNotificationHandler:(id)arg1;
- (void)customPhotosButtonAction:(id)arg1;
- (void)setNavigationBar;
- (void)resetNavigationBar;
- (void)loadWithString:(id)arg1;
- (void)initBarButtonItem;
- (void)closeItemBarButtonAction;
- (void)reloadButtonAction;
- (void)shareButtonAction;
- (void)loadRequestDidFinished;
- (void)webView:(id)arg1 didReceiveNotice:(id)arg2;
- (void)userOrder:(long long)arg1;
- (void)requestGetOrderNoPath;
- (void)resetLeftTopButtonForWXPayResult;
- (void)requestGoodDetail:(id)arg1;
- (void)requestShopToken;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)imy_themeChanged;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leftBarButtonItemTouchUpInside:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

