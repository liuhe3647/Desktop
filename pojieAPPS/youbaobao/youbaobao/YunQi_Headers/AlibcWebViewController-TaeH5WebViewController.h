//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcWebViewController.h"

@class NSArray, NSString;

@interface AlibcWebViewController (TaeH5WebViewController)
+ (void)imytae_clearMemerCache;
+ (void)load;
- (id)ga_appendParams;
- (_Bool)ga_isViewActived;
- (id)ga_pageName;
- (void)imy_topRightShareButtonAction:(id)arg1;
- (id)imy_getURIPath;
- (void)tae_setShowShareButton:(_Bool)arg1;
- (void)setShowShareButton:(_Bool)arg1;
@property(nonatomic) _Bool enableShareButtonAction;
- (id)imytae_messageModelWithURLString:(id)arg1 forKey:(id)arg2;
- (void)imytae_setupActivityChangedObserver;
- (void)_imytaeCodeViewDidLoad;
- (void)_imytaeCodeViewWillAppear:(_Bool)arg1;
- (_Bool)shouldFakeNavigationBarTransition;
- (void)_imytaeCodeViewWillDisappear:(_Bool)arg1;
- (void)_imytaeCodeViewDidAppear:(_Bool)arg1;
- (void)imytae_hideBackButton;
- (_Bool)imytae_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)imytae_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)imytae_webViewDidFinishLoad:(id)arg1;
- (void)imytae_webViewDidStartLoad:(id)arg1;
- (void)imytae_loadRequestDidFinished:(id)arg1;
- (_Bool)imytae_isNeedShareWithRequest:(id)arg1;
- (void)imytae_injectionWebViewDelegate;
- (void)imytae_setupTitleString;
- (id)imytae_getWebViewShowTitle;
- (id)imytae_webViewTitle;
- (_Bool)imytae_isDetail;
- (void)imytae_showShareHelpView;
- (void)imytae_addMaskView;
- (void)imytae_resetTitleLabel;
- (void)imytae_resetNavigationButtonItems;
- (void)imytae_viewDidAppear:(_Bool)arg1;
- (void)imytae_viewDidDisappear:(_Bool)arg1;
- (void)imytae_viewWillDisappear:(_Bool)arg1;
- (void)imytae_viewWillAppear:(_Bool)arg1;
- (void)imytae_viewDidLoad;
- (void)imytae_taeWebControllerOnBack;
- (_Bool)isClosed;
- (void)imytae_closeButtonPressedAction:(id)arg1;
- (id)imytae_closeButtonTopbarItems;
- (void)imytae_showTopLeftCloseButton;
- (id)imytae_init;
@property(copy, nonatomic, setter=imytae_setViewDidLoadBlock:) CDUnknownBlockType imytae_viewDidLoadBlock;
@property(copy, nonatomic, setter=imytae_setViewWillAppearBlock:) CDUnknownBlockType imytae_viewWillAppearBlock;
@property(copy, nonatomic, setter=imytae_setShouldStartLoadBlock:) CDUnknownBlockType imytae_shouldStartLoadBlock;
- (_Bool)isDetail;
- (void)setIsDetail:(_Bool)arg1;
@property(retain, nonatomic) NSArray *mobPath;
- (id)tae_newAlertView;
- (void)setTae_newAlertView:(id)arg1;
- (id)tae_webUtil;
- (void)setTae_webUtil:(id)arg1;
- (id)tae_badgeView;
- (void)setTae_badgeView:(id)arg1;
@property(copy, nonatomic) NSString *imytae_showTitle;
- (id)tae_firstLoadedURLString;
- (void)setTae_firstLoadedURLString:(id)arg1;
- (_Bool)tae_isViewActived;
- (void)setTae_isViewActived:(_Bool)arg1;
- (_Bool)tae_isViewDidAppeared;
- (void)setTae_isViewDidAppeared:(_Bool)arg1;
- (_Bool)tae_isFirstLoadedView;
- (void)setTae_isFirstLoadedView:(_Bool)arg1;
- (_Bool)tae_isShowedCloseButton;
- (void)setTae_isShowedCloseButton:(_Bool)arg1;
@end

