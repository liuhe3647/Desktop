//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationBarDelegate-Protocol.h"

@class NSString;

@interface RCTNavigationController : UINavigationController <UINavigationBarDelegate>
{
    CDUnknownBlockType _scrollCallback;
    unsigned long long _navigationLock;
}

@property(nonatomic) unsigned long long navigationLock; // @synthesize navigationLock=_navigationLock;
- (void).cxx_destruct;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)initWithScrollCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

