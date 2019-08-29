//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVKWebViewController.h"

@class IMYCaptionView, UIView;

@interface IMYRecycleWebViewController : IMYVKWebViewController
{
    _Bool _isRecycled;
    long long _globalIndex;
    UIView *_recycleRootView;
    IMYCaptionView *_recycleHud;
}

+ (long long)recycleActiveIndex;
+ (long long)recycleActiveMaxCount;
+ (id)webRecycleTable;
@property(nonatomic) __weak IMYCaptionView *recycleHud; // @synthesize recycleHud=_recycleHud;
@property(nonatomic) __weak UIView *recycleRootView; // @synthesize recycleRootView=_recycleRootView;
@property(nonatomic) _Bool isRecycled; // @synthesize isRecycled=_isRecycled;
@property(nonatomic) long long globalIndex; // @synthesize globalIndex=_globalIndex;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)recycling;
- (void)restoring;
- (void)dealloc;
- (void)_initMyself;

@end

