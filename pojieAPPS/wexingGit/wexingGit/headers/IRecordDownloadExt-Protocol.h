//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IRecordDownloadExt <NSObject>

@optional
- (void)OnRecordMessageDownloadOK:(CMessageWrap *)arg1;
- (void)OnDownloadRecordMessagePart:(CMessageWrap *)arg1 DataId:(NSString *)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageOK:(CMessageWrap *)arg1 DataId:(NSString *)arg2 bThumb:(_Bool)arg3;
- (void)OnDownloadRecordMessageFail:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
- (void)OnDownloadRecordMessageExpired:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
@end
