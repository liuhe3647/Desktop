//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton;

@interface YBBToolsOvulateBottomBarView : UIView
{
    CDUnknownBlockType _takePhotoButtonClickBlock;
    IMYButton *_takePhotoButton;
}

@property(nonatomic) __weak IMYButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
@property(copy, nonatomic) CDUnknownBlockType takePhotoButtonClickBlock; // @synthesize takePhotoButtonClickBlock=_takePhotoButtonClickBlock;
- (void).cxx_destruct;
- (void)takePhotoAction;
- (void)awakeFromNib;

@end

