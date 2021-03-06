//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IosLicenser, NSString;

@interface FaceVerifier : NSObject
{
    struct FaceTracker *faceTracker;
    _Bool _alignModelInited;
    _Bool _imgQualityModelInited;
    _Bool _scoreModelInited;
    _Bool _detectModelInited;
    _Bool _recognizeModelInited;
    _Bool _trackimgQualityModelInited;
    int _detectType;
    NSString *_httpString;
    IosLicenser *_authorizer;
}

+ (id)sharedInstance;
@property(nonatomic) int detectType; // @synthesize detectType=_detectType;
@property(nonatomic) _Bool trackimgQualityModelInited; // @synthesize trackimgQualityModelInited=_trackimgQualityModelInited;
@property(nonatomic) _Bool recognizeModelInited; // @synthesize recognizeModelInited=_recognizeModelInited;
@property(nonatomic) _Bool detectModelInited; // @synthesize detectModelInited=_detectModelInited;
@property(nonatomic) _Bool scoreModelInited; // @synthesize scoreModelInited=_scoreModelInited;
@property(nonatomic) _Bool imgQualityModelInited; // @synthesize imgQualityModelInited=_imgQualityModelInited;
@property(retain, nonatomic) IosLicenser *authorizer; // @synthesize authorizer=_authorizer;
@property(nonatomic) _Bool alignModelInited; // @synthesize alignModelInited=_alignModelInited;
@property(retain, nonatomic) NSString *httpString; // @synthesize httpString=_httpString;
- (void).cxx_destruct;
- (id)getVersion;
- (void)setLogVisible:(_Bool)arg1;
- (_Bool)existDetectPath:(int)arg1;
- (void)cropFaceImageWith:(id)arg1 FaceShape:(id *)arg2 numOfPoints:(long long)arg3 faceImageWidth:(long long)arg4 faceImageHeight:(long long)arg5 cropImage:(id *)arg6 cropShaps:(id *)arg7;
- (void)imageQualityWith:(id)arg1 andFaceShape:(id *)arg2 andNumOfPoints:(long long)arg3 bluriness:(double *)arg4 illum:(long long *)arg5 occlusion:(id *)arg6 nOccluPart:(long long *)arg7;
- (void)initImgQualityModelWithType:(int)arg1;
- (void)initDetectModelWithType:(int)arg1;
- (void)initScoreModelWithType:(int)arg1;
- (void)initAligningModelWithType:(int)arg1;
- (int)prepareDataForMaxFaceWithImage:(id)arg1 andActionType:(int)arg2;
- (int)prepareDataWithImage:(id)arg1 andActionType:(int)arg2;
- (void)trackWithImage:(id)arg1 andMaxFaceCount:(unsigned long long)arg2;
- (void)generateHttpStringWithAction:(int)arg1 andUserName:(id)arg2 andAppId:(id)arg3;
- (id)landmarks;
- (id)regImages;
- (long long)errorCode;
- (void)clearTrackedFaces;
- (id)faceShapes;
- (_Bool)isUnderTrack;
- (id)livenessState;
- (id)getTrackedFace;
- (long long)getCropFaceSize;
- (void)setCropFaceEnlargeRatio:(double)arg1;
- (void)setIsCheckQuality:(_Bool)arg1;
- (void)setMaxRegImgNum:(long long)arg1;
- (void)setEulurAngleThrPitch:(long long)arg1 yaw:(long long)arg2 roll:(long long)arg3;
- (void)setDetectMethodType:(long long)arg1;
- (void)setAlignMethodType:(long long)arg1;
- (void)setBlurThr:(double)arg1;
- (void)setOccluThr:(double)arg1;
- (void)setIllumThr:(long long)arg1;
- (void)setNotFaceThr:(double)arg1;
- (void)setCropFaceSizeWithWidth:(double)arg1;
- (void)setDetectInVideoInterval:(double)arg1;
- (void)setTrackByDetectionInterval:(double)arg1;
- (void)setIsVerifyLive:(_Bool)arg1;
- (void)setIfNeedFineAlign:(_Bool)arg1;
- (void)setMinFaceSize:(long long)arg1;
- (void)setRemoteAuthorize:(_Bool)arg1;
- (void)initWithToken:(id)arg1;
- (void)setLicenseID:(id)arg1 andLocalLicenceFile:(id)arg2;
- (int)canWork;
- (id)init;

@end

