//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLHomeRedStyleView.h"

@class NSString, UIView;

@interface IMYTLHomeListBgView : IMYTLHomeRedStyleView
{
    NSString *_redStyleColorHexString;
    UIView *_redView;
}

@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(copy, nonatomic) NSString *redStyleColorHexString; // @synthesize redStyleColorHexString=_redStyleColorHexString;
- (void).cxx_destruct;
- (void)changeToNormalStyle;
- (void)changeToRedStyle;
- (id)init;

@end

