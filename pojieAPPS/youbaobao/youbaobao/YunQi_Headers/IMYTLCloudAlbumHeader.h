//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface IMYTLCloudAlbumHeader : UICollectionReusableView
{
    UILabel *_titleLabel;
    CDUnknownBlockType _didClickActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didClickActionBlock; // @synthesize didClickActionBlock=_didClickActionBlock;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tapAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

