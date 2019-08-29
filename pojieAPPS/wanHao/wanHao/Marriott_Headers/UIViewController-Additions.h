//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (Additions)
- (void)reportDupXPath:(id)arg1;
- (id)getDLObject:(id)arg1 type:(id)arg2;
- (id)recurseAllViews:(id)arg1 breakOnHashMatch:(id)arg2 breakOnXpathMatch:(id)arg3;
- (id)walkingLookupForXpath:(id)arg1 baseView:(id)arg2;
- (id)walkingLookupForHash:(id)arg1 baseView:(id)arg2;
- (_Bool)hashExists:(id)arg1;
- (_Bool)xpathExists:(id)arg1;
- (id)nstn_getElementByIndex:(unsigned int)arg1;
- (id)nstn_getElementByCommentRegexp:(id)arg1;
- (id)nstn_getElementByCommentSearch:(id)arg1;
- (id)nstn_getElementByNativeDescriptionRegexp:(id)arg1;
- (id)nstn_getElementByNativeDescriptionSearch:(id)arg1;
- (id)nstn_getElementByRawHashRegexp:(id)arg1;
- (id)nstn_getElementByRawHashSearch:(id)arg1;
- (id)nstn_getElementByXPath:(id)arg1;
- (id)nstn_getElementByHash:(id)arg1;
- (void)generateTagsForBaseView:(id)arg1;
- (void)addEnsightenIDsForView:(id)arg1;
- (id)getCachedEnsightenIDs;
- (id)emptyEnsightenIDCache;
- (id)hashForView:(id)arg1;
- (id)xpathForView:(id)arg1;
@property(retain, nonatomic) NSString *nstn_superTracker; // @dynamic nstn_superTracker;
@end

