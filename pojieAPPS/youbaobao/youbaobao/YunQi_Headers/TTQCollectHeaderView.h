//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IMYRoundButton, UILabel;
@protocol TTQCollectHeaderViewDelegate;

@interface TTQCollectHeaderView : UIControl
{
    _Bool _isEditMode;
    id <TTQCollectHeaderViewDelegate> _delegate;
    IMYRoundButton *_selectButton;
    UILabel *_titleLabel;
    long long _headerSection;
}

@property(nonatomic) long long headerSection; // @synthesize headerSection=_headerSection;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYRoundButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak id <TTQCollectHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)historyReadDate:(id)arg1;
- (void)selectHeaderViewAction;
- (void)configCollectHeaderView:(id)arg1 atSection:(long long)arg2 withEditMode:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

