//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UITextField, UIViewController;

@interface YYBToolsEatDoTopSeaResTitleV : UIView
{
    _Bool _fuckCancelButtonEnable;
    UITextField *_textField;
    UIButton *_cancelButton;
    UIImageView *_topbg;
    UIImageView *_searchbg;
    UIImageView *_searchIcon;
    UIButton *_backButton;
    UIViewController *_parentVC;
}

@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) _Bool fuckCancelButtonEnable; // @synthesize fuckCancelButtonEnable=_fuckCancelButtonEnable;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(nonatomic) __weak UIImageView *searchbg; // @synthesize searchbg=_searchbg;
@property(nonatomic) __weak UIImageView *topbg; // @synthesize topbg=_topbg;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)backButtonDo:(id)arg1;
- (void)popViewController:(_Bool)arg1;
- (void)cancelButtonDo:(id)arg1;
- (void)awakeFromNib;

@end

