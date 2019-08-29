//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface SYNotifyAlertView : UIView
{
    long long _type;
    NSString *_iconName;
    UIView *_alertView;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _babyHandler;
}

+ (void)showBabySexWithHandler:(CDUnknownBlockType)arg1;
+ (void)showAtView:(id)arg1 content:(id)arg2 confirmText:(id)arg3 confirmHandler:(CDUnknownBlockType)arg4;
+ (void)showWithContent:(id)arg1 confirmText:(id)arg2 confirmHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType babyHandler; // @synthesize babyHandler=_babyHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)confirmAction:(id)arg1;
- (void)cancel;
- (id)init;

@end

