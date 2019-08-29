//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYDayRecordUploadDelegate-Protocol.h"

@class IMYDayRecordUpload, NSString, NSTimer;

@interface IMYRecordAutoUploadManager : NSObject <IMYDayRecordUploadDelegate>
{
    _Bool _stopAutoSyncm;
    CDUnknownBlockType _unloginBlock;
    IMYDayRecordUpload *_autoUpload;
    NSTimer *_autoUploadTimer;
}

+ (id)sharedManager;
+ (void)mergeDefaultUserDataToUnlogin;
+ (void)load;
@property(retain, nonatomic) NSTimer *autoUploadTimer; // @synthesize autoUploadTimer=_autoUploadTimer;
@property(retain, nonatomic) IMYDayRecordUpload *autoUpload; // @synthesize autoUpload=_autoUpload;
@property(nonatomic) _Bool stopAutoSyncm; // @synthesize stopAutoSyncm=_stopAutoSyncm;
@property(copy, nonatomic) CDUnknownBlockType unloginBlock; // @synthesize unloginBlock=_unloginBlock;
- (void).cxx_destruct;
- (void)dayRecordProgress:(double)arg1;
- (void)dayRecordFinished;
- (void)dayRecordError:(id)arg1;
- (void)autoUploadData;
- (void)stopAutoUploadTimer;
- (void)starAutoUploadTimer;
- (void)startAutoUploadData;
- (void)stopTimeAutoUploadData;
- (void)stopAutoUploadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

