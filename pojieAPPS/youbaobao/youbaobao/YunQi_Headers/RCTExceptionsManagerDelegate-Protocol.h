//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol RCTExceptionsManagerDelegate <NSObject>
- (void)handleFatalJSExceptionWithMessage:(NSString *)arg1 stack:(NSArray *)arg2 exceptionId:(NSNumber *)arg3;
- (void)handleSoftJSExceptionWithMessage:(NSString *)arg1 stack:(NSArray *)arg2 exceptionId:(NSNumber *)arg3;

@optional
- (void)updateJSExceptionWithMessage:(NSString *)arg1 stack:(NSArray *)arg2 exceptionId:(NSNumber *)arg3;
@end

