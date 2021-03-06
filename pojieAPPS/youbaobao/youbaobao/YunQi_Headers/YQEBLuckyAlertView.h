//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface YQEBLuckyAlertView : UIView
{
    UIView *_whiteView;
    UIButton *_closeBtn;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_remarksLabel;
    UIImageView *_line1ImageView;
    UIImageView *_line2ImageView;
    CDUnknownBlockType _addValueBack;
    UIView *_border;
    UIView *_avatarView;
    long long _count;
}

+ (void)showAlertView:(id)arg1 finishBlack:(CDUnknownBlockType)arg2;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *border; // @synthesize border=_border;
@property(copy, nonatomic) CDUnknownBlockType addValueBack; // @synthesize addValueBack=_addValueBack;
@property(retain, nonatomic) UIImageView *line2ImageView; // @synthesize line2ImageView=_line2ImageView;
@property(retain, nonatomic) UIImageView *line1ImageView; // @synthesize line1ImageView=_line1ImageView;
@property(retain, nonatomic) UILabel *remarksLabel; // @synthesize remarksLabel=_remarksLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
- (void).cxx_destruct;
- (void)reqReceiveLuckyBag:(id)arg1;
- (id)getDes:(id)arg1;
- (id)getSubTitle:(id)arg1;
- (id)getTitle:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)closeBtnAction;
- (void)setLabelLineSpacing:(id)arg1 text:(id)arg2 lineSpacing:(double)arg3;
- (void)initAllView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

