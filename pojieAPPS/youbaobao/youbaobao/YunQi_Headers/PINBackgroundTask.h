//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PINBackgroundTask : NSObject
{
    unsigned long long _taskID;
}

+ (id)start;
+ (_Bool)isAppExtension;
@property unsigned long long taskID; // @synthesize taskID=_taskID;
- (void)end;
- (id)init;

@end

