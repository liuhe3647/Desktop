//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRTMessageCenter : NSObject
{
}

+ (_Bool)showsAlerts;
+ (void)messageDismissed;
+ (void)cancelError:(id)arg1;
+ (void)showError:(id)arg1 duration:(double)arg2;
+ (void)showError:(id)arg1 title:(id)arg2 duration:(double)arg3;
+ (id)dismissAction;
+ (void)showErrorMessage:(id)arg1 title:(id)arg2 duration:(double)arg3;
+ (void)showErrorMessage:(id)arg1 title:(id)arg2 actions:(id)arg3;
+ (void)showMessage:(id)arg1 title:(id)arg2 error:(id)arg3 actions:(id)arg4;
+ (void)showMessage:(id)arg1 title:(id)arg2 error:(id)arg3 duration:(double)arg4;
+ (void)_showMessage:(id)arg1 title:(id)arg2 error:(id)arg3 isError:(_Bool)arg4 duration:(double)arg5 actions:(id)arg6;
+ (void)initialize;
- (_Bool)showsAlerts;
- (void)messageDismissed;
- (void)cancelError:(id)arg1;
- (void)showSystemMessage:(id)arg1;

@end
