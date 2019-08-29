//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, NSMutableArray, RACSignal, UILabel;

@interface YBBToolsGCExplainView : UIView
{
    RACSignal *_itemClickSignal;
    RACSignal *_expandActionSignal;
    UILabel *_titleLabel;
    IMYButton *_expandBtn;
    NSMutableArray *_buttonsArray;
}

@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) IMYButton *expandBtn; // @synthesize expandBtn=_expandBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) RACSignal *expandActionSignal; // @synthesize expandActionSignal=_expandActionSignal;
@property(readonly, nonatomic) RACSignal *itemClickSignal; // @synthesize itemClickSignal=_itemClickSignal;
- (void).cxx_destruct;
- (void)expandAction:(id)arg1;
- (void)itemClicked:(id)arg1;
- (id)itemButtonWithIndex:(long long)arg1;
- (void)layoutWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

