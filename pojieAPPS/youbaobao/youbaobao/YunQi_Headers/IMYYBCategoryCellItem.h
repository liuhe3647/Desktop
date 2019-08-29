//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface IMYYBCategoryCellItem : UIView
{
    UIButton *_clickButton;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    id _model;
    CDUnknownBlockType _onClickEvent;
}

+ (double)itemHeight;
@property(copy, nonatomic) CDUnknownBlockType onClickEvent; // @synthesize onClickEvent=_onClickEvent;
@property(nonatomic) __weak id model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

