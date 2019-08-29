//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;

@interface YBBToolsTabMenuContainView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_meunList;
    CDUnknownBlockType _tapSelectedActionBlock;
    CDUnknownBlockType _tapBlankActionBlock;
    UIView *_containView;
    UICollectionView *_collectionView;
    UIView *_coverView;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(copy, nonatomic) CDUnknownBlockType tapBlankActionBlock; // @synthesize tapBlankActionBlock=_tapBlankActionBlock;
@property(copy, nonatomic) CDUnknownBlockType tapSelectedActionBlock; // @synthesize tapSelectedActionBlock=_tapSelectedActionBlock;
@property(retain, nonatomic) NSArray *meunList; // @synthesize meunList=_meunList;
- (void).cxx_destruct;
- (double)musicAssistantMeunContainItemCellHeight;
- (double)musicAssistantMeunContainCollectionViewMargin;
- (long long)musicAssistantMeunContainItemSectionCount;
- (void)setMeunSelectedIndex:(long long)arg1;
- (double)coverViewAlpha;
- (void)hide;
- (void)show;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

