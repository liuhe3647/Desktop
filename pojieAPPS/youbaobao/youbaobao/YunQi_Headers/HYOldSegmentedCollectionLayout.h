//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@protocol HYOldSegmentedCollectionLayoutDelegate;

@interface HYOldSegmentedCollectionLayout : UICollectionViewFlowLayout
{
    long long _index;
    _Bool isLock;
    id <HYOldSegmentedCollectionLayoutDelegate> _delegate;
    double _minScale;
}

@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) id <HYOldSegmentedCollectionLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unlock;
- (void)lock;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)setLineAttributes:(id)arg1 visibleRect:(struct CGRect)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)setup;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

