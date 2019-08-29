//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINib.h>

#import "NSTNAsyncDelegate-Protocol.h"

@class NSArray, NSString;

@interface UINib (Additions) <NSTNAsyncDelegate>
+ (id)NSTN_loadNibNamed:(id)arg1 owner:(id)arg2;
+ (id)NSTN_loadNibWithData:(id)arg1;
- (id)NSTN_viewControllerAsRoot;
- (id)NSTN_viewAsRoot;
- (id)NSTN_rootObject;
- (id)elementAtIndex:(unsigned int)arg1;
@property(retain, nonatomic) NSArray *contents; // @dynamic contents;
@property(retain, nonatomic) NSString *nibName; // @dynamic nibName;
@property(retain, nonatomic) id owner; // @dynamic owner;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

