//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface YBBToolsEatAndDoCell : UICollectionViewCell
{
    UIImageView *_imgView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (double)numAdjust:(double)arg1;
- (void)drawWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

