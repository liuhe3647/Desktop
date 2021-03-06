//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIButton, UIColor, UILabel, UITextField;

@interface ApptentiveMessageCenterProfileView : UIView
{
    long long _mode;
    UIView *_containerView;
    UILabel *_titleLabel;
    UITextField *_nameField;
    UITextField *_emailField;
    UIButton *_skipButton;
    UIButton *_saveButton;
    UILabel *_requiredLabel;
    UIColor *_borderColor;
    UIView *_buttonBar;
    NSLayoutConstraint *_nameTrailingConstraint;
    NSLayoutConstraint *_emailLeadingConstraint;
    NSLayoutConstraint *_nameVerticalSpaceToEmail;
    NSLayoutConstraint *_emailVerticalSpaceToButtonBar;
    NSLayoutConstraint *_nameHorizontalSpaceToEmail;
    NSArray *_portraitFullConstraints;
    NSArray *_landscapeFullConstraints;
    NSArray *_portraitCompactConstraints;
    NSArray *_landscapeCompactConstraints;
    NSArray *_baseConstraints;
}

@property(retain, nonatomic) NSArray *baseConstraints; // @synthesize baseConstraints=_baseConstraints;
@property(retain, nonatomic) NSArray *landscapeCompactConstraints; // @synthesize landscapeCompactConstraints=_landscapeCompactConstraints;
@property(retain, nonatomic) NSArray *portraitCompactConstraints; // @synthesize portraitCompactConstraints=_portraitCompactConstraints;
@property(retain, nonatomic) NSArray *landscapeFullConstraints; // @synthesize landscapeFullConstraints=_landscapeFullConstraints;
@property(retain, nonatomic) NSArray *portraitFullConstraints; // @synthesize portraitFullConstraints=_portraitFullConstraints;
@property(retain, nonatomic) NSLayoutConstraint *nameHorizontalSpaceToEmail; // @synthesize nameHorizontalSpaceToEmail=_nameHorizontalSpaceToEmail;
@property(retain, nonatomic) NSLayoutConstraint *emailVerticalSpaceToButtonBar; // @synthesize emailVerticalSpaceToButtonBar=_emailVerticalSpaceToButtonBar;
@property(retain, nonatomic) NSLayoutConstraint *nameVerticalSpaceToEmail; // @synthesize nameVerticalSpaceToEmail=_nameVerticalSpaceToEmail;
@property(nonatomic) __weak NSLayoutConstraint *emailLeadingConstraint; // @synthesize emailLeadingConstraint=_emailLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *nameTrailingConstraint; // @synthesize nameTrailingConstraint=_nameTrailingConstraint;
@property(nonatomic) __weak UIView *buttonBar; // @synthesize buttonBar=_buttonBar;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) __weak UILabel *requiredLabel; // @synthesize requiredLabel=_requiredLabel;
@property(nonatomic) __weak UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak UITextField *emailField; // @synthesize emailField=_emailField;
@property(nonatomic) __weak UITextField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)updateConstraints;
- (_Bool)becomeFirstResponder;
- (void)awakeFromNib;

@end

