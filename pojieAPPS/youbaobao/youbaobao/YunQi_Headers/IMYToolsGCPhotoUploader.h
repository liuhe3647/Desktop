//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IMYToolsGCPhotoUploader : NSObject
{
    _Bool _isPhotoUploading;
    NSDictionary *_check_photos_map;
}

@property(nonatomic) _Bool isPhotoUploading; // @synthesize isPhotoUploading=_isPhotoUploading;
@property(retain, nonatomic) NSDictionary *check_photos_map; // @synthesize check_photos_map=_check_photos_map;
- (void).cxx_destruct;
- (void)uploadLocalPhotos;
- (void)resetCheckPhotosMap;
- (void)updateCheckPhotosMap;
- (id)converToLocalWithUrl:(id)arg1 isLocalUrl:(_Bool *)arg2;

@end

