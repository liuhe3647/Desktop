//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBProgressHUD.h"

@class NSString;

@interface IMYProgressHUD : MBProgressHUD
{
    NSString *_doneMessage;
}

+ (id)showLoadingMessage:(id)arg1 keyWindow:(id)arg2;
+ (id)showLoadingMessage:(id)arg1;
+ (void)showToast:(id)arg1 forSeconds:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)showToast:(id)arg1;
+ (void)showLoadingMessage:(id)arg1 presentingView:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)showLoadingMessage:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *doneMessage; // @synthesize doneMessage=_doneMessage;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)my_updateUIForKeypath:(id)arg1;
- (id)my_observableKeypaths;
- (void)my_unregisterFromKVO;
- (void)my_registerForKVO;
- (void)dealloc;
- (void)hideAfterDelay:(double)arg1;
- (void)hide;
- (void)imy_fixBgColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

