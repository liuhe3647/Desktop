//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, UIActivityIndicatorView, UILabel;
@protocol DragTableFooterDelegate_ot;

@interface DragTableFooterView_ot : UIView
{
    int _state;
    _Bool _isLoading;
    UILabel *_statusLabel;
    UIActivityIndicatorView *_activityView;
    UIView *_backgroundView;
    NSString *_pullUpText;
    NSString *_releaseText;
    NSString *_loadingText;
    NSObject<DragTableFooterDelegate_ot> *_delegate;
}

@property(nonatomic) __weak NSObject<DragTableFooterDelegate_ot> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(copy, nonatomic) NSString *releaseText; // @synthesize releaseText=_releaseText;
@property(copy, nonatomic) NSString *pullUpText; // @synthesize pullUpText=_pullUpText;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)setScrollViewContentInset:(id)arg1;
- (void)endLoading:(id)arg1 shouldChangeContentInset:(_Bool)arg2;
- (void)triggerLoading:(id)arg1;
- (void)dragTableDidEndDragging:(id)arg1;
- (void)dragTableDidScroll:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)footerVisbleHeightInScrollView:(id)arg1;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property(readonly, nonatomic) UILabel *loadingStatusLabel;

@end

