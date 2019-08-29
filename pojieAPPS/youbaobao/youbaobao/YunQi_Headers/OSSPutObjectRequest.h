//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSRequest.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface OSSPutObjectRequest : OSSRequest
{
    NSString *_bucketName;
    NSString *_objectKey;
    NSData *_uploadingData;
    NSURL *_uploadingFileURL;
    NSDictionary *_callbackParam;
    NSDictionary *_callbackVar;
    NSString *_contentType;
    NSString *_contentMd5;
    NSString *_contentDisposition;
    NSString *_contentEncoding;
    NSString *_cacheControl;
    NSString *_expires;
    NSDictionary *_objectMeta;
    CDUnknownBlockType _uploadProgress;
    CDUnknownBlockType _uploadRetryCallback;
    NSString *_contentSHA1;
}

@property(copy, nonatomic) NSString *contentSHA1; // @synthesize contentSHA1=_contentSHA1;
@property(copy, nonatomic) CDUnknownBlockType uploadRetryCallback; // @synthesize uploadRetryCallback=_uploadRetryCallback;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(copy, nonatomic) NSDictionary *objectMeta; // @synthesize objectMeta=_objectMeta;
@property(copy, nonatomic) NSString *expires; // @synthesize expires=_expires;
@property(copy, nonatomic) NSString *cacheControl; // @synthesize cacheControl=_cacheControl;
@property(copy, nonatomic) NSString *contentEncoding; // @synthesize contentEncoding=_contentEncoding;
@property(copy, nonatomic) NSString *contentDisposition; // @synthesize contentDisposition=_contentDisposition;
@property(copy, nonatomic) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSDictionary *callbackVar; // @synthesize callbackVar=_callbackVar;
@property(copy, nonatomic) NSDictionary *callbackParam; // @synthesize callbackParam=_callbackParam;
@property(retain, nonatomic) NSURL *uploadingFileURL; // @synthesize uploadingFileURL=_uploadingFileURL;
@property(retain, nonatomic) NSData *uploadingData; // @synthesize uploadingData=_uploadingData;
@property(copy, nonatomic) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
- (void).cxx_destruct;
- (id)init;

@end
