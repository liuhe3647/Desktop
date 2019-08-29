//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadProgressView, NSMutableArray, NSString, UILabel;

@interface SYThemeDownloadManager : NSObject
{
    NSMutableArray *_downloadArray;
    DownloadProgressView *_downloadProgressView;
    UILabel *_percentLabel;
}

+ (id)themeDocument;
+ (id)sharedSYThemeDownloadManager;
@property(nonatomic) __weak UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(nonatomic) __weak DownloadProgressView *downloadProgressView; // @synthesize downloadProgressView=_downloadProgressView;
@property(retain, nonatomic) NSMutableArray *downloadArray; // @synthesize downloadArray=_downloadArray;
- (void).cxx_destruct;
- (void)sendDownloadBuryingPointWithParams:(id)arg1;
- (void)checkNewTheme;
- (void)useThemeWithTheme:(id)arg1;
- (void)downLoadCheck:(id)arg1;
- (void)exchangeTheme:(id)arg1 glanceType:(long long)arg2 keyNumber:(unsigned long long)arg3 downloadLocationId:(unsigned long long)arg4 discountId:(unsigned long long)arg5;
- (void)exchangeTheme:(id)arg1 glanceType:(long long)arg2 keyNumber:(unsigned long long)arg3 downloadLocationId:(unsigned long long)arg4;
- (void)requestDownLoadTheme:(id)arg1;
- (void)exchangeTheme:(id)arg1;
@property(nonatomic) _Bool hasNewTheme;
@property(retain, nonatomic) NSString *lastUpdate;
- (id)themeDocument;
- (void)networkStatusChange:(id)arg1;
- (void)downLoadTheme:(id)arg1 toDownLoadList:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

