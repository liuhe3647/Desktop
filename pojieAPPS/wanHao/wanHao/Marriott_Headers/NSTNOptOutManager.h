//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTNOptOutChoice;

@interface NSTNOptOutManager : NSObject
{
    NSTNOptOutChoice *choice;
    _Bool didCompleteDialogue;
}

+ (int)isPositiveChoice;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultManager;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callForAuthorization;
- (void)loadSavedChoice;
- (void)saveChoice;
- (void)updateChoice:(_Bool)arg1;
- (int)choice;
- (int)isOptOutAppropriate;
- (int)canOptOut;
- (void)prompt;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

