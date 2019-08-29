//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface IMYTLGalleryBottomView : UIView
{
    _Bool _isHidden;
    long long _selectCount;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _updateTimeBlock;
    UILabel *_countLabel;
    UIButton *_updateTimeButton;
    UIButton *_deleteButton;
}

+ (id)view;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *updateTimeButton; // @synthesize updateTimeButton=_updateTimeButton;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(copy, nonatomic) CDUnknownBlockType updateTimeBlock; // @synthesize updateTimeBlock=_updateTimeBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(nonatomic) long long selectCount; // @synthesize selectCount=_selectCount;
- (void).cxx_destruct;
- (void)updateTimeAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)hidden;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

@end

