//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSString;

@interface IMYPublicPreviewingDelegate : NSObject <UIViewControllerPreviewingDelegate>
{
    CDUnknownBlockType _previewingViewControllerForLocation;
    CDUnknownBlockType _previewingCommitViewController;
}

@property(copy, nonatomic) CDUnknownBlockType previewingCommitViewController; // @synthesize previewingCommitViewController=_previewingCommitViewController;
@property(copy, nonatomic) CDUnknownBlockType previewingViewControllerForLocation; // @synthesize previewingViewControllerForLocation=_previewingViewControllerForLocation;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

