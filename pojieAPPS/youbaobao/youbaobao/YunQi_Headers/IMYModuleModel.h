//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIApplicationDelegate><UNUserNotificationCenterDelegate;

@interface IMYModuleModel : NSObject
{
    Class _moduleClass;
    id <UIApplicationDelegate><UNUserNotificationCenterDelegate> _moduleInstance;
    unsigned long long _modulePriority;
}

@property(nonatomic) unsigned long long modulePriority; // @synthesize modulePriority=_modulePriority;
@property(retain, nonatomic) id <UIApplicationDelegate><UNUserNotificationCenterDelegate> moduleInstance; // @synthesize moduleInstance=_moduleInstance;
@property(retain, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
- (void).cxx_destruct;
- (id)initWithClass:(Class)arg1 priority:(unsigned long long)arg2;

@end
