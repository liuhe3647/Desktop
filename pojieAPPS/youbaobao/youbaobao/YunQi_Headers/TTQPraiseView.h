//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RACDisposable, UIButton, UIImageView, UILabel;

@interface TTQPraiseView : UIView
{
    _Bool _is_ask;
    long long _forum_id;
    UIButton *_praiseButton;
    UILabel *_praiseLabel;
    UIImageView *_praiseImageView;
    RACDisposable *_disposable;
}

+ (double)getTagWidthWithText:(id)arg1 font:(double)arg2;
@property(nonatomic) __weak RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) UIImageView *praiseImageView; // @synthesize praiseImageView=_praiseImageView;
@property(retain, nonatomic) UILabel *praiseLabel; // @synthesize praiseLabel=_praiseLabel;
@property(retain, nonatomic) UIButton *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(nonatomic) _Bool is_ask; // @synthesize is_ask=_is_ask;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
- (void).cxx_destruct;
- (void)leftAlignment;
- (void)rightAlignment;
- (void)setupPraiseButton:(id)arg1;
- (void)bindModel:(id)arg1 viewModel:(id)arg2;
- (int)getWordFont;
- (id)getColorKey;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

