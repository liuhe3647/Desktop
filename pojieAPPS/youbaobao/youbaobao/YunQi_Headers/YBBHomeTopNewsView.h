//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class IMYButton, NSArray, UIButton, UILabel, UIScrollView;

@interface YBBHomeTopNewsView : UIImageView
{
    _Bool _isTabs;
    IMYButton *_backBtn;
    UIButton *_searchBtn;
    UILabel *_titleLabel;
    CDUnknownBlockType _selectBolck;
    NSArray *_models;
    unsigned long long _selectedIndex;
    NSArray *_buttons;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) _Bool isTabs; // @synthesize isTabs=_isTabs;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(copy, nonatomic) CDUnknownBlockType selectBolck; // @synthesize selectBolck=_selectBolck;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) IMYButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (void)initDataAndView;
- (id)makeButton:(id)arg1 tag:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 isTabs:(_Bool)arg2;

@end

