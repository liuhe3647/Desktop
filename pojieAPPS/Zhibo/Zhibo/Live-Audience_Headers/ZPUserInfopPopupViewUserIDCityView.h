//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UserModel;

@interface ZPUserInfopPopupViewUserIDCityView : UIView
{
    UserModel *_model;
    UIView *_controlsView;
    UILabel *_userIDLabel;
    UIImageView *_locationImageView;
    UILabel *_cityLabel;
}

@property(retain, nonatomic) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) UILabel *userIDLabel; // @synthesize userIDLabel=_userIDLabel;
@property(retain, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain, nonatomic) UserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setUI;
- (id)init;

@end
