//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface YBBToolsOvulateGuideView : UIView
{
    UIImageView *_bgView;
    UIImageView *_confirmView;
    UIImageView *_hintView;
}

@property(nonatomic) __weak UIImageView *hintView; // @synthesize hintView=_hintView;
@property(nonatomic) __weak UIImageView *confirmView; // @synthesize confirmView=_confirmView;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (double)getClickHeight;
- (double)getClipY;
- (id)drawBackgroundImage;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

