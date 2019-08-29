//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYTLVideoPreviewLocalModel : NSObject
{
    NSString *_phAssetLocalIndetity;
    long long _videoStartTime;
    long long _videoEndTime;
    long long _videoDuration;
    double _creationTime;
}

+ (id)getModelFromIMYTLRecordModel:(id)arg1;
+ (id)getModelFromIMYTLAsset:(id)arg1;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long videoEndTime; // @synthesize videoEndTime=_videoEndTime;
@property(nonatomic) long long videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(retain, nonatomic) NSString *phAssetLocalIndetity; // @synthesize phAssetLocalIndetity=_phAssetLocalIndetity;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long videoStartEndTime;

@end

