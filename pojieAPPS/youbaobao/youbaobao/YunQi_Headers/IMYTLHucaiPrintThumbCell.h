//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIImageView;
@protocol IMYTHucaiPrintThumbCellModelProtocol;

@interface IMYTLHucaiPrintThumbCell : UICollectionViewCell
{
    UIButton *_addButton;
    UIImageView *_imgView;
    UIImageView *_loadingImageView;
    id <IMYTHucaiPrintThumbCellModelProtocol> _model;
    CDUnknownBlockType _selectedBlock;
}

+ (struct CGSize)fitSize;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) id <IMYTHucaiPrintThumbCellModelProtocol> model; // @synthesize model=_model;
@property(nonatomic) __weak UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(nonatomic) __weak UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) __weak UIButton *addButton; // @synthesize addButton=_addButton;
- (void).cxx_destruct;
- (void)cellSelect:(_Bool)arg1;
- (void)updateStatusUI;
- (void)selectAction:(id)arg1;
- (void)awakeFromNib;

@end

