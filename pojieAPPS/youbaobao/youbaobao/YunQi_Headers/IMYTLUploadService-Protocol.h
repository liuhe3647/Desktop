//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLSingletonService-Protocol.h"
#import "NSObject-Protocol.h"

@class IMYTLQiniuUploadAsset, NSArray, NSString, RACSignal;

@protocol IMYTLUploadService <NSObject, IMYTLSingletonService>
+ (unsigned long long)isUploadWithURLString:(NSString *)arg1;
+ (unsigned long long)isUploadLocalIdentity:(NSString *)arg1;
+ (unsigned long long)isUpload:(NSString *)arg1;
@property(nonatomic) unsigned long long uploadChoice;
- (unsigned long long)somethingsDidIn;
- (unsigned long long)somethingsDidNotUpload;
- (void)stop;
- (void)goon;
- (void)pause;
- (void)uploadAssets:(NSArray *)arg1 restart:(_Bool)arg2 containsFailed:(_Bool)arg3 createdAt:(double)arg4 privile:(_Bool)arg5 eventId:(long long)arg6 alertViewCallback:(void (^)(long long))arg7;
- (void)uploadAssets:(NSArray *)arg1 restart:(_Bool)arg2 containsFailed:(_Bool)arg3 createdAt:(double)arg4 privile:(_Bool)arg5 alertViewCallback:(void (^)(long long))arg6;
- (void)uploadAssets:(NSArray *)arg1 restart:(_Bool)arg2 createdAt:(double)arg3 privile:(_Bool)arg4 alertViewCallback:(void (^)(long long))arg5;
- (void)removeUpload:(IMYTLQiniuUploadAsset *)arg1 callback:(void (^)(_Bool))arg2;
- (void)removeFailedUpload:(IMYTLQiniuUploadAsset *)arg1 callback:(void (^)(_Bool))arg2;
- (unsigned long long)progressModel;
- (double)totalProgress;
- (NSArray *)failedUploads;
- (NSArray *)successfulUploads;
- (NSArray *)uploadsInProgress;
- (IMYTLQiniuUploadAsset *)uploadingTask;
- (NSArray *)uploads;
- (unsigned long long)status;
- (void)reloadFailed;
- (RACSignal *)pauseSignal;
- (RACSignal *)finishSignal;
- (RACSignal *)startSignal;
- (RACSignal *)uploadSignal;
- (RACSignal *)totalProcessSignal;
@end

