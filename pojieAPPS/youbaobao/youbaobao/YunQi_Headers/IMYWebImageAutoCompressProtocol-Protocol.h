//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IMYWebImageAutoCompressProtocol <NSObject>
+ (void)qiniuQualityAutoChange:(_Bool)arg1;
+ (void)qiniuLowImageQuality:(unsigned long long)arg1;
- (void)imy_setImageURL:(id)arg1 resize:(struct CGSize)arg2 mode:(unsigned long long)arg3 quality:(long long)arg4 type:(long long)arg5;
- (void)imy_setImageURL:(id)arg1 resize:(struct CGSize)arg2 quality:(long long)arg3 type:(long long)arg4;
- (void)imy_setImageURL:(id)arg1 resize:(struct CGSize)arg2 quality:(long long)arg3;
- (void)imy_setImageURL:(id)arg1 resize:(struct CGSize)arg2;
- (void)imy_setImageURL:(id)arg1 type:(long long)arg2;

@optional
- (void)imy_setImageURL:(id)arg1 resise:(struct CGSize)arg2 mode:(unsigned long long)arg3 quality:(long long)arg4 type:(long long)arg5;
- (void)imy_setImageURL:(id)arg1 resise:(struct CGSize)arg2 quality:(long long)arg3 type:(long long)arg4;
- (void)imy_setImageURL:(id)arg1 resise:(struct CGSize)arg2 quality:(long long)arg3;
- (void)imy_setImageURL:(id)arg1 resise:(struct CGSize)arg2;
- (void)imy_setImageURL:(id)arg1 quality:(long long)arg2 type:(long long)arg3;
- (void)imy_setImageURL:(id)arg1 quality:(long long)arg2;
@end

