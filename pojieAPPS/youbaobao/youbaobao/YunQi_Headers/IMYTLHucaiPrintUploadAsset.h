//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLModel.h"

@class NSString;

@interface IMYTLHucaiPrintUploadAsset : IMYTLModel
{
    NSString *_babyId;
    NSString *_userId;
    double _time;
    NSString *_name;
    NSString *_phAssetLocalIdentifier;
    NSString *_mime;
    long long _type;
    NSString *_orderNo;
    long long _uploadStatus;
    NSString *_path;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *mime; // @synthesize mime=_mime;
@property(retain, nonatomic) NSString *phAssetLocalIdentifier; // @synthesize phAssetLocalIdentifier=_phAssetLocalIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *babyId; // @synthesize babyId=_babyId;
- (void).cxx_destruct;

@end

