//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MRTProgressiveUpdatable;

@interface MRTRewardsAnimationItem : NSObject
{
    id <MRTProgressiveUpdatable> _updatable;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id <MRTProgressiveUpdatable> updatable; // @synthesize updatable=_updatable;
- (void).cxx_destruct;
- (id)initWithUpdatable:(id)arg1 key:(id)arg2;
- (id)initWithUpdatable:(id)arg1;

@end

