//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CALayer, NSArray, NSString, UIButton, UICollectionView;

@interface YBBToolsQATabMenuView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_meunList;
    CDUnknownBlockType _tapSelectedActionBlock;
    CDUnknownBlockType _tapMoreActionBlock;
    long long _selectedIndex;
    UICollectionView *_collectionViewBar;
    UIButton *_moreMenuButton;
    UIView *_lineView;
    CALayer *_gradientLayer;
}

+ (double)musicAssistantMeunViewHeight;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *moreMenuButton; // @synthesize moreMenuButton=_moreMenuButton;
@property(retain, nonatomic) UICollectionView *collectionViewBar; // @synthesize collectionViewBar=_collectionViewBar;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType tapMoreActionBlock; // @synthesize tapMoreActionBlock=_tapMoreActionBlock;
@property(copy, nonatomic) CDUnknownBlockType tapSelectedActionBlock; // @synthesize tapSelectedActionBlock=_tapSelectedActionBlock;
@property(retain, nonatomic) NSArray *meunList; // @synthesize meunList=_meunList;
- (void).cxx_destruct;
- (double)gradientWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)cellItemWidthWithContent:(id)arg1;
- (void)scrollToItemAtSelectedIndex:(long long)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)setMeunSelectedIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

