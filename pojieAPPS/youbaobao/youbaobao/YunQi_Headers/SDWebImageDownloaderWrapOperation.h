//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageOperation-Protocol.h"

@class NSString, SDWebImageDownloaderOperation;

@interface SDWebImageDownloaderWrapOperation : NSObject <SDWebImageOperation>
{
    SDWebImageDownloaderOperation *_operation;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _responseBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) SDWebImageDownloaderOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

