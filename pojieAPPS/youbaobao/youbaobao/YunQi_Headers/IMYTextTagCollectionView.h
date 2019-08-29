//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYTagCollectionViewDataSource-Protocol.h"
#import "IMYTagCollectionViewDelegate-Protocol.h"

@class IMYTagCollectionView, IMYTextTagConfig, NSMutableArray, NSString, UIScrollView;
@protocol IMYTextTagCollectionViewDelegate;

@interface IMYTextTagCollectionView : UIView <IMYTagCollectionViewDataSource, IMYTagCollectionViewDelegate>
{
    _Bool _enableTagSelection;
    id <IMYTextTagCollectionViewDelegate> _delegate;
    IMYTextTagConfig *_defaultConfig;
    unsigned long long _selectionLimit;
    NSMutableArray *_tagLabels;
    IMYTagCollectionView *_tagCollectionView;
    NSMutableArray *_selectedTagItems;
}

@property(retain, nonatomic) NSMutableArray *selectedTagItems; // @synthesize selectedTagItems=_selectedTagItems;
@property(retain, nonatomic) IMYTagCollectionView *tagCollectionView; // @synthesize tagCollectionView=_tagCollectionView;
@property(retain, nonatomic) NSMutableArray *tagLabels; // @synthesize tagLabels=_tagLabels;
@property(nonatomic) unsigned long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(retain, nonatomic) IMYTextTagConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(nonatomic) _Bool enableTagSelection; // @synthesize enableTagSelection=_enableTagSelection;
@property(nonatomic) __weak id <IMYTextTagCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)newLabelForTagText:(id)arg1 withConfig:(id)arg2;
- (void)updateStyleAndFrameForLabel:(id)arg1;
- (void)updateAllLabelStyleAndFrame;
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic) _Bool showsHorizontalScrollIndicator;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(nonatomic) _Bool manualCalculateHeight;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) unsigned long long numberOfLines;
@property(nonatomic) long long alignment;
@property(nonatomic) long long scrollDirection;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(nonatomic) double verticalSpacing;
@property(nonatomic) double horizontalSpacing;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)tagCollectionView:(id)arg1 updateContentSize:(struct CGSize)arg2;
- (struct CGSize)tagCollectionView:(id)arg1 sizeForTagAtIndex:(unsigned long long)arg2;
- (void)tagCollectionView:(id)arg1 didSelectTag:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)tagCollectionView:(id)arg1 shouldSelectTag:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tagCollectionView:(id)arg1 tagViewForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTagsInTagCollectionView:(id)arg1;
- (long long)indexOfTagAt:(struct CGPoint)arg1;
- (id)allNotSelectedTags;
- (id)allSelectedTags;
- (id)allTags;
- (id)getConfigsInRange:(struct _NSRange)arg1;
- (id)getConfigAtIndex:(unsigned long long)arg1;
- (id)getTagsInRange:(struct _NSRange)arg1;
- (id)getTagAtIndex:(unsigned long long)arg1;
- (void)setTagsInRange:(struct _NSRange)arg1 withConfig:(id)arg2;
- (void)setTagAtIndex:(unsigned long long)arg1 withConfig:(id)arg2;
- (void)setTagAtIndex:(unsigned long long)arg1 selected:(_Bool)arg2;
- (void)removeOldTags;
- (void)removeAllTags;
- (void)removeTagAtIndex:(unsigned long long)arg1;
- (void)removeTag:(id)arg1;
- (void)insertTagsItemModels:(id)arg1 atIndex:(unsigned long long)arg2 withConfig:(id)arg3 copyConfig:(_Bool)arg4;
- (void)insertTags:(id)arg1 atIndex:(unsigned long long)arg2 withConfig:(id)arg3 copyConfig:(_Bool)arg4;
- (void)insertTags:(id)arg1 atIndex:(unsigned long long)arg2 withConfig:(id)arg3;
- (void)insertTags:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertTag:(id)arg1 atIndex:(unsigned long long)arg2 withConfig:(id)arg3;
- (void)insertTag:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTags:(id)arg1 withConfig:(id)arg2;
- (void)addTagItems:(id)arg1;
- (void)addTags:(id)arg1;
- (void)addTag:(id)arg1 withConfig:(id)arg2;
- (void)addTag:(id)arg1;
- (void)reload;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

