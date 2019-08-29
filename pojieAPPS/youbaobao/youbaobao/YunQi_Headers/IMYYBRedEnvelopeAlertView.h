//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, NSString, UIImageView;

@interface IMYYBRedEnvelopeAlertView : UIView
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _closeButtonClickBlock;
    CDUnknownBlockType _redEnvelopeClickBlock;
    NSString *_pictureUrl;
    NSString *_redirectUrl;
    UIView *_backgroundView;
    IMYButton *_closeButton;
    UIImageView *_imageView;
    IMYButton *_button;
}

+ (id)showInView:(id)arg1 pictureUrl:(id)arg2 redirectUrl:(id)arg3;
@property(retain, nonatomic) IMYButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) IMYButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(copy, nonatomic) CDUnknownBlockType redEnvelopeClickBlock; // @synthesize redEnvelopeClickBlock=_redEnvelopeClickBlock;
@property(copy, nonatomic) CDUnknownBlockType closeButtonClickBlock; // @synthesize closeButtonClickBlock=_closeButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)close;
- (void)onClose:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pictureUrl:(id)arg2 redirectUrl:(id)arg3;

@end

