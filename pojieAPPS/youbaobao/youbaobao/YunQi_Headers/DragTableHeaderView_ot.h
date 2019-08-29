//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSDate, NSDateFormatter, NSObject, NSString, UIActivityIndicatorView, UIImageView, UILabel;
@protocol DragTableHeaderDelegate_ot;

@interface DragTableHeaderView_ot : UIView
{
    _Bool _isLoading;
    NSString *_datePermanentStorageKey;
    NSDate *_lastUpdateDate;
    UILabel *_lastUpdatedLabel;
    UILabel *_statusLabel;
    CALayer *_arrowImage;
    UIActivityIndicatorView *_activityView;
    UIView *_backgroundView;
    NSDateFormatter *_dateFormatter;
    _Bool _shouldShowDate;
    int _state;
    NSString *_pullDownText;
    NSString *_releaseText;
    NSString *_loadingText;
    NSString *_dateFormatterText;
    NSString *_refreshDateFormatText;
    UIImageView *_youzi;
    UIImageView *_starView;
    NSObject<DragTableHeaderDelegate_ot> *_delegate;
}

@property(nonatomic) _Bool shouldShowDate; // @synthesize shouldShowDate=_shouldShowDate;
@property(nonatomic) __weak NSObject<DragTableHeaderDelegate_ot> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIImageView *youzi; // @synthesize youzi=_youzi;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *refreshDateFormatText; // @synthesize refreshDateFormatText=_refreshDateFormatText;
@property(copy, nonatomic) NSString *dateFormatterText; // @synthesize dateFormatterText=_dateFormatterText;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(copy, nonatomic) NSString *releaseText; // @synthesize releaseText=_releaseText;
@property(copy, nonatomic) NSString *pullDownText; // @synthesize pullDownText=_pullDownText;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (_Bool)storeRefreshDate:(id)arg1;
- (id)getStoredRefreshDate;
- (id)stringFromDate:(id)arg1;
- (void)endLoading:(id)arg1 shouldUpdateRefreshDate:(_Bool)arg2 shouldChangeContentInset:(_Bool)arg3;
- (void)triggerLoading:(id)arg1;
- (void)dragTableDidEndDragging:(id)arg1;
- (void)dragTableDidScroll:(id)arg1;
- (void)youziPositionWithScrollView:(id)arg1;
- (void)refreshLastUpdatedDate;
- (void)adjustSubviewsFrame;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 datePermanentStoreKey:(id)arg2;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property(readonly, nonatomic) UILabel *refreshDateLabel;
@property(readonly, nonatomic) UILabel *loadingStatusLabel;

@end

