//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UITextField;
@protocol TTQTopicJumpInputDelgate;

@interface TTQTopicJumpInputView : UIView
{
    UIView *_topView;
    UIView *_bottomView;
    UILabel *_lb_total;
    UITextField *_txt_page;
    unsigned long long _maxValue;
    id <TTQTopicJumpInputDelgate> _delegate;
    UIButton *_btn0;
    UIButton *_btn1;
    UIButton *_btn2;
    UIButton *_btn3;
    UIButton *_btn4;
    UIButton *_btn5;
    UIButton *_btn6;
    UIButton *_btn7;
    UIButton *_btn8;
    UIButton *_btn9;
    UIButton *_btn_delete;
    UIImageView *_line1;
    UIImageView *_line2;
    UIImageView *_bg;
    UIImageView *_hline0;
    UIImageView *_hline1;
    UIImageView *_hline2;
    UIImageView *_hline3;
    UIImageView *_vline0;
    UIImageView *_vline1;
    UILabel *_auto_114_label;
    UIButton *_btn_close;
    UIButton *_btn_done;
}

@property(nonatomic) __weak UIButton *btn_done; // @synthesize btn_done=_btn_done;
@property(nonatomic) __weak UIButton *btn_close; // @synthesize btn_close=_btn_close;
@property(nonatomic) __weak UILabel *auto_114_label; // @synthesize auto_114_label=_auto_114_label;
@property(nonatomic) __weak UIImageView *vline1; // @synthesize vline1=_vline1;
@property(nonatomic) __weak UIImageView *vline0; // @synthesize vline0=_vline0;
@property(nonatomic) __weak UIImageView *hline3; // @synthesize hline3=_hline3;
@property(nonatomic) __weak UIImageView *hline2; // @synthesize hline2=_hline2;
@property(nonatomic) __weak UIImageView *hline1; // @synthesize hline1=_hline1;
@property(nonatomic) __weak UIImageView *hline0; // @synthesize hline0=_hline0;
@property(nonatomic) __weak UIImageView *bg; // @synthesize bg=_bg;
@property(nonatomic) __weak UIImageView *line2; // @synthesize line2=_line2;
@property(nonatomic) __weak UIImageView *line1; // @synthesize line1=_line1;
@property(nonatomic) __weak UIButton *btn_delete; // @synthesize btn_delete=_btn_delete;
@property(nonatomic) __weak UIButton *btn9; // @synthesize btn9=_btn9;
@property(nonatomic) __weak UIButton *btn8; // @synthesize btn8=_btn8;
@property(nonatomic) __weak UIButton *btn7; // @synthesize btn7=_btn7;
@property(nonatomic) __weak UIButton *btn6; // @synthesize btn6=_btn6;
@property(nonatomic) __weak UIButton *btn5; // @synthesize btn5=_btn5;
@property(nonatomic) __weak UIButton *btn4; // @synthesize btn4=_btn4;
@property(nonatomic) __weak UIButton *btn3; // @synthesize btn3=_btn3;
@property(nonatomic) __weak UIButton *btn2; // @synthesize btn2=_btn2;
@property(nonatomic) __weak UIButton *btn1; // @synthesize btn1=_btn1;
@property(nonatomic) __weak UIButton *btn0; // @synthesize btn0=_btn0;
@property(nonatomic) __weak id <TTQTopicJumpInputDelgate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) __weak UITextField *txt_page; // @synthesize txt_page=_txt_page;
@property(nonatomic) __weak UILabel *lb_total; // @synthesize lb_total=_lb_total;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)resetPage;
- (void)hide;
- (void)show;
- (void)touchDelete:(id)arg1;
- (void)numberTouched:(id)arg1;
- (void)touchDone:(id)arg1;
- (void)touchCancel:(id)arg1;
- (void)awakeFromNib;

@end

