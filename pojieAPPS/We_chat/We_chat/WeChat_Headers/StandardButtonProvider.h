//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface StandardButtonProvider : NSObject
{
}

+ (id)getRedesignButton:(id)arg1 IconName:(id)arg2 Action:(SEL)arg3 Target:(id)arg4;
+ (id)genNewBigRedButton:(long long)arg1;
+ (id)genNewBigGreyButton:(long long)arg1;
+ (id)genNewBigGreenButton:(long long)arg1;
+ (id)genNewBigButton:(long long)arg1;
+ (id)genLineButtonWithColor:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 fixHeight:(double)arg4 radius:(double)arg5 fontAlphaHighLighted:(double)arg6;
+ (id)genSmallGreenLineButton;
+ (id)genBigGreenLineButton;
+ (id)genSmallLineButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genBigLineButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genLineButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genGreenButtonWithHeight:(double)arg1;
+ (id)genGraySmallButtonAdaptFrameWithTitle:(id)arg1;
+ (void)setMiddleButtonStyle:(id)arg1;
+ (id)genMiddleButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genMiddleGrayButton;
+ (id)genMiddleGreenButton;
+ (void)setSmallButtonStyle:(id)arg1;
+ (id)genSmallButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genSmallGrayButton;
+ (id)genSmallRedButton;
+ (id)genSmallGreenButton;
+ (void)setWideBigButtonStyle:(id)arg1;
+ (id)genWideBigButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genWideBigGrayButton;
+ (id)genWideBigRedButton;
+ (id)genWideBigGreenButton;
+ (void)setBigButtonStyle:(id)arg1;
+ (id)genBigButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genBigGrayButton;
+ (id)genBigRedButton;
+ (id)genBigGreenButton;
+ (void)setNewSmallButtonStyle:(id)arg1;
+ (void)setNewBigButtonStyle:(id)arg1;
+ (id)genSmallWeakInverseButton;
+ (id)genSmallWeakButton;
+ (id)genSmallStrongButton;
+ (id)genBigWeakButton;
+ (id)genBigStrongButton;
+ (id)genButtonWithColor:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 fixHeight:(double)arg4 withBorder:(_Bool)arg5 radius:(double)arg6;
+ (id)genGrayButton;
+ (id)genRedButton;
+ (id)genGreenButton;
+ (id)genButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)internalGenButtonWithColor:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 fixHeight:(double)arg4 withBorder:(_Bool)arg5 radius:(double)arg6;

@end
