//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YQSpotlightManager : NSObject
{
}

+ (void)gotoWebWithTitle:(id)arg1 url:(id)arg2 canShare:(_Bool)arg3;
+ (id)searchItemWithTitle:(id)arg1 content:(id)arg2 keywords:(id)arg3 icon:(id)arg4 type:(unsigned long long)arg5 itemID:(long long)arg6;
+ (void)resetToolsItem;
+ (_Bool)isTodayUpdated;
+ (_Bool)jumpHandleWithIdentifier:(id)arg1;
+ (_Bool)canJumpWithType:(unsigned long long)arg1;
+ (void)setupSpotlight:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getSpotlightCallback:(CDUnknownBlockType)arg1;
+ (void)updateSoptlight;
+ (void)load;

@end
