//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (IMYChildController)
- (void)imy_endAppearanceTransition;
- (void)imy_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)imy_removeFromParentViewController;
- (void)imy_addChildViewController:(id)arg1 addViewBlock:(CDUnknownBlockType)arg2;
- (void)imy_addChildViewController:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)imy_addChildViewController:(id)arg1 inView:(id)arg2 withFrame:(struct CGRect)arg3;
- (void)imy_addChildViewController:(id)arg1;
@property(copy, nonatomic) NSString *imy_pageIdentifier;
@end

