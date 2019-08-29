//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, IMYLoveModel, NSDate, UIButton, UIImageView, UILabel, UIView;
@protocol IMYAnalzeLoveCellDelegate;

@interface IMYAnalyzeLoveCell : UICollectionViewCell
{
    _Bool _ovulationDays;
    CAGradientLayer *_normalLayer;
    CAGradientLayer *_valueLayer;
    UIButton *_im_bg;
    UILabel *_lb_date;
    UILabel *_lb_weak;
    UILabel *_lb_value;
    id <IMYAnalzeLoveCellDelegate> _delegate;
    unsigned long long _value;
    UIView *_dateView;
    UIImageView *_line;
    UIImageView *_love;
    NSDate *_date;
    UIImageView *_ovulationBg;
    IMYLoveModel *_model;
}

@property(retain, nonatomic) IMYLoveModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *ovulationBg; // @synthesize ovulationBg=_ovulationBg;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) UIImageView *love; // @synthesize love=_love;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(nonatomic) _Bool ovulationDays; // @synthesize ovulationDays=_ovulationDays;
@property(retain, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(nonatomic) id <IMYAnalzeLoveCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *lb_value; // @synthesize lb_value=_lb_value;
@property(retain, nonatomic) UILabel *lb_weak; // @synthesize lb_weak=_lb_weak;
@property(retain, nonatomic) UILabel *lb_date; // @synthesize lb_date=_lb_date;
@property(retain, nonatomic) UIButton *im_bg; // @synthesize im_bg=_im_bg;
@property(retain, nonatomic) CAGradientLayer *valueLayer; // @synthesize valueLayer=_valueLayer;
@property(retain, nonatomic) CAGradientLayer *normalLayer; // @synthesize normalLayer=_normalLayer;
- (void).cxx_destruct;
- (void)drawCornerToLayer:(id)arg1;
- (id)gradientLayerStartColor:(id)arg1 endColor:(id)arg2;
- (void)changeChartValue;
- (void)touchAction:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

