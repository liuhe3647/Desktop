//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYATUserInfoModel, UIButton, UIImageView, UILabel;

@interface IMYATDynamicUserInfoHeadV : UIView
{
    UIImageView *_iv_BG;
    UIButton *_bt_avatar;
    UILabel *_l_name;
    UIView *_v_focusAndFans;
    UIButton *_bt_focusList;
    UIButton *_bt_fansList;
    UILabel *_l_meetyou;
    UIImageView *_line;
    UIView *_v_level;
    UILabel *_l_level;
    UIButton *_vipBtnIntro;
    UIView *_v_status_bar;
    UIButton *_bt_dynamic;
    UIButton *_bt_user_info;
    UIImageView *_img_status_line;
    long long _currentStatus;
    CDUnknownBlockType _currentStatusDidChanged;
    double _offsetY;
    IMYATUserInfoModel *_model;
}

@property(retain, nonatomic) IMYATUserInfoModel *model; // @synthesize model=_model;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(copy, nonatomic) CDUnknownBlockType currentStatusDidChanged; // @synthesize currentStatusDidChanged=_currentStatusDidChanged;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) __weak UIImageView *img_status_line; // @synthesize img_status_line=_img_status_line;
@property(nonatomic) __weak UIButton *bt_user_info; // @synthesize bt_user_info=_bt_user_info;
@property(nonatomic) __weak UIButton *bt_dynamic; // @synthesize bt_dynamic=_bt_dynamic;
@property(nonatomic) __weak UIView *v_status_bar; // @synthesize v_status_bar=_v_status_bar;
@property(nonatomic) UIButton *vipBtnIntro; // @synthesize vipBtnIntro=_vipBtnIntro;
@property(nonatomic) __weak UILabel *l_level; // @synthesize l_level=_l_level;
@property(nonatomic) __weak UIView *v_level; // @synthesize v_level=_v_level;
@property(nonatomic) __weak UIImageView *line; // @synthesize line=_line;
@property(nonatomic) __weak UILabel *l_meetyou; // @synthesize l_meetyou=_l_meetyou;
@property(nonatomic) __weak UIButton *bt_fansList; // @synthesize bt_fansList=_bt_fansList;
@property(nonatomic) __weak UIButton *bt_focusList; // @synthesize bt_focusList=_bt_focusList;
@property(nonatomic) __weak UIView *v_focusAndFans; // @synthesize v_focusAndFans=_v_focusAndFans;
@property(nonatomic) __weak UILabel *l_name; // @synthesize l_name=_l_name;
@property(nonatomic) __weak UIButton *bt_avatar; // @synthesize bt_avatar=_bt_avatar;
@property(nonatomic) __weak UIImageView *iv_BG; // @synthesize iv_BG=_iv_BG;
- (void).cxx_destruct;
- (void)refreshUserInfoHead;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)bt_status_pressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

