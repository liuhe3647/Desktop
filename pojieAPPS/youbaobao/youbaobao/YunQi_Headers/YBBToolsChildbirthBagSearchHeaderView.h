//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UITextField;

@interface YBBToolsChildbirthBagSearchHeaderView : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    UIButton *_cancelButton;
    UIImageView *_topbg;
    UIImageView *_searchbg;
    UIImageView *_searchIcon;
}

@property(nonatomic) __weak UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(nonatomic) __weak UIImageView *searchbg; // @synthesize searchbg=_searchbg;
@property(nonatomic) __weak UIImageView *topbg; // @synthesize topbg=_topbg;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)cancelButtonDo:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

