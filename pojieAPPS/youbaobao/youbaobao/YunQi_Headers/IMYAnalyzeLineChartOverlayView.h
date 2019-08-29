//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYAnalyzeLineChartShowItem, UIButton, UIImageView, UILabel;

@interface IMYAnalyzeLineChartOverlayView : UIView
{
    _Bool _showActionButton;
    _Bool _isNew;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIButton *_actionButton;
    IMYAnalyzeLineChartShowItem *_showItem;
    CDUnknownBlockType _textForItemBlock;
    CDUnknownBlockType _actionForItemBlock;
    UIView *_contentView;
    UIView *_tipsView;
}

@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType actionForItemBlock; // @synthesize actionForItemBlock=_actionForItemBlock;
@property(copy, nonatomic) CDUnknownBlockType textForItemBlock; // @synthesize textForItemBlock=_textForItemBlock;
@property(retain, nonatomic) IMYAnalyzeLineChartShowItem *showItem; // @synthesize showItem=_showItem;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)drawPoint;
- (void)refresh;
- (void)moveToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 isRight:(_Bool)arg3;
- (void)moveToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)actionButtonPressedAction:(id)arg1;
- (_Bool)shouldSelectWithShowItem:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

