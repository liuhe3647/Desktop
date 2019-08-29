//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray;
@protocol MRTAutosizingCollectionViewCellDelegate;

@interface MRTAutosizingCollectionViewCell : UICollectionViewCell
{
    _Bool _hasDisplayed;
    id <MRTAutosizingCollectionViewCellDelegate> _delegate;
    NSArray *_origContentConstraints;
}

+ (id)sizingCellWithNibNamed:(id)arg1;
+ (id)sizingCell;
@property(retain, nonatomic) NSArray *origContentConstraints; // @synthesize origContentConstraints=_origContentConstraints;
@property(nonatomic) _Bool hasDisplayed; // @synthesize hasDisplayed=_hasDisplayed;
@property(nonatomic) __weak id <MRTAutosizingCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingHeight:(double)arg1;
- (struct CGSize)systemLayoutSizeFittingWidth:(double)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)restoreOriginalContentViewConstraints;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

