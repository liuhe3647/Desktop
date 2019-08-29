//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;

@interface IMYTLCBInviteOtherView : UIView <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UITextField *_textField;
    UIButton *_cancelBtn;
    UIButton *_okBtn;
    UIView *_bgView;
    UIView *_contentView;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _okPressBlock;
    CDUnknownBlockType _textChanageBlock;
    unsigned long long _maxCount;
}

+ (void)showTitle:(id)arg1 text:(id)arg2 placeholder:(id)arg3 maxCount:(unsigned long long)arg4 okBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6 textChanage:(CDUnknownBlockType)arg7;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) CDUnknownBlockType textChanageBlock; // @synthesize textChanageBlock=_textChanageBlock;
@property(copy, nonatomic) CDUnknownBlockType okPressBlock; // @synthesize okPressBlock=_okPressBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dissmissAnimtion;
- (void)showAnimation;
- (void)textFieldChangeAction:(id)arg1;
- (void)okBtnAction:(id)arg1;
- (void)cancelBtnAction:(id)arg1;
- (void)didMoveToSuperview;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)handleTextField:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)keyboardDidHidden;
- (void)keyboardDidShow;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

