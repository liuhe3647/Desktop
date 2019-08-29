//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class IMYREasyInputView, IMYREmoticonInputView, IMYTouchEXButton, NSString, UIView;

@interface YBBHomeMergeFoodsCommentVC : IMYPublicBaseViewController <UITextFieldDelegate>
{
    CDUnknownBlockType _sendBlock;
    NSString *_type;
    NSString *_comment;
    NSString *_name;
    UIView *_maskView;
    IMYREasyInputView *_input;
    IMYTouchEXButton *_emoticonButton;
    IMYREmoticonInputView *_emojiInputView;
    IMYTouchEXButton *_sendButton;
    _Bool *_isAction;
    _Bool *_isSend;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool *isSend; // @synthesize isSend=_isSend;
@property(nonatomic) _Bool *isAction; // @synthesize isAction=_isAction;
@property(retain, nonatomic) IMYTouchEXButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) IMYREmoticonInputView *emojiInputView; // @synthesize emojiInputView=_emojiInputView;
@property(retain, nonatomic) IMYTouchEXButton *emoticonButton; // @synthesize emoticonButton=_emoticonButton;
@property(retain, nonatomic) IMYREasyInputView *input; // @synthesize input=_input;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didSendEmojiView:(id)arg1;
- (void)didDelEmojiView:(id)arg1;
- (void)didTouchEmojiView:(id)arg1 touchedEmoji:(id)arg2;
- (void)inputViewDidChangeHeight:(id)arg1 changeHeight:(float)arg2;
- (void)inputViewOfTextViewDidChange:(id)arg1;
- (void)sendAction;
- (void)setupSendButton;
- (void)emojiAction;
- (void)setupEmoticonButton;
- (void)inputViewWillResignFirstResponder:(id)arg1 keyboardHeight:(double)arg2 animationDuration:(double)arg3 option:(unsigned long long)arg4;
- (void)inputViewWillBecomeFirstResponder:(id)arg1 keyboardHeight:(double)arg2 animationDuration:(double)arg3 option:(unsigned long long)arg4;
- (void)addInputView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)touchBankAction;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

