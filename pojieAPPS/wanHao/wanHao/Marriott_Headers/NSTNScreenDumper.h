//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTNAsyncDelegate-Protocol.h"

@class NSString;

@interface NSTNScreenDumper : NSObject <NSTNAsyncDelegate>
{
}

+ (id)getControlEvents:(unsigned long long)arg1;
+ (id)resizeImageData:(id)arg1 size:(struct CGSize)arg2;
+ (id)deprecated_uikitScreenshot;
+ (id)uikitScreenshot;
+ (id)encodePngScreenshot;
+ (id)encodeJpegScreenshot;
+ (id)pngScreenshot;
+ (id)jpegScreenshot;
+ (void)dumpViews:(id)arg1 dict:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)screenDumper;
- (void)requestWentWrong:(id)arg1;
- (void)requestFinished:(id)arg1 info:(id)arg2;
- (void)requestReturnedResponse:(id)arg1 info:(id)arg2;
- (void)takeScreenShotGetMetaDataAndUpload:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

