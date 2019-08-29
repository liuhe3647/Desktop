//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRTRemoteImageDataStore-Protocol.h"

@class NSString;

@interface MRTAdobeImageGateway : NSObject <MRTRemoteImageDataStore>
{
}

+ (_Bool)supportsRequestNeedingResizing:(_Bool)arg1;
+ (_Bool)supportsURLString:(id)arg1;
- (id)_URLForCropRect:(struct CGRect)arg1 fittingSize:(struct CGSize)arg2 baseURLString:(id)arg3;
- (void)fetchWImageWithBaseURLString:(id)arg1 cropRect:(struct CGRect)arg2 fittingSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

