//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class GameCenterAppStoreControl, GameCenterFeedBackEntrance, GameCenterIndexTheme, GameCenterInstalledMore, GameCenterLibraryEntrance, GameRecommendData, NSArray, NSString, NewHotData, RecentPlayInfoData, TopRecommendBannerData;

@interface GameCenterHomeData : MMObject <PBCoding>
{
    _Bool isShowSearchEntry;
    int gameDetailJumpType;
    NSString *searchPlaceholder;
    NSString *classifyUrl;
    NSString *giftURL;
    NSString *giftEntranceTitle;
    RecentPlayInfoData *recentPlayInfo;
    TopRecommendBannerData *topRecommendBanner;
    GameRecommendData *todayRecommend;
    NewHotData *hot;
    GameCenterLibraryEntrance *libraryEntrance;
    GameCenterFeedBackEntrance *feedBackEntrance;
    GameCenterAppStoreControl *appStoreControl;
    NSString *productID;
    NSString *msgIconUrl;
    NSString *msgTitle;
    NSString *msgJumpUrl;
    NSArray *installedList;
    GameCenterInstalledMore *installedMore;
    NSString *installedTitle;
    NSString *giftIconUrl;
    NSString *gameManagementUrl;
    GameCenterIndexTheme *indexTheme;
    NSString *gameDetailUrl;
    NSString *profileIconUrl;
    NSString *profileTitle;
    NSString *profileJumpUrl;
    NSString *profileBadgeUrl;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *profileBadgeUrl; // @synthesize profileBadgeUrl;
@property(retain, nonatomic) NSString *profileJumpUrl; // @synthesize profileJumpUrl;
@property(retain, nonatomic) NSString *profileTitle; // @synthesize profileTitle;
@property(retain, nonatomic) NSString *profileIconUrl; // @synthesize profileIconUrl;
@property(nonatomic) int gameDetailJumpType; // @synthesize gameDetailJumpType;
@property(retain, nonatomic) NSString *gameDetailUrl; // @synthesize gameDetailUrl;
@property(retain, nonatomic) GameCenterIndexTheme *indexTheme; // @synthesize indexTheme;
@property(retain, nonatomic) NSString *gameManagementUrl; // @synthesize gameManagementUrl;
@property(retain, nonatomic) NSString *giftIconUrl; // @synthesize giftIconUrl;
@property(retain, nonatomic) NSString *installedTitle; // @synthesize installedTitle;
@property(retain, nonatomic) GameCenterInstalledMore *installedMore; // @synthesize installedMore;
@property(retain, nonatomic) NSArray *installedList; // @synthesize installedList;
@property(retain, nonatomic) NSString *msgJumpUrl; // @synthesize msgJumpUrl;
@property(retain, nonatomic) NSString *msgTitle; // @synthesize msgTitle;
@property(retain, nonatomic) NSString *msgIconUrl; // @synthesize msgIconUrl;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
@property(retain, nonatomic) GameCenterAppStoreControl *appStoreControl; // @synthesize appStoreControl;
@property(retain, nonatomic) GameCenterFeedBackEntrance *feedBackEntrance; // @synthesize feedBackEntrance;
@property(retain, nonatomic) GameCenterLibraryEntrance *libraryEntrance; // @synthesize libraryEntrance;
@property(retain, nonatomic) NewHotData *hot; // @synthesize hot;
@property(retain, nonatomic) GameRecommendData *todayRecommend; // @synthesize todayRecommend;
@property(retain, nonatomic) TopRecommendBannerData *topRecommendBanner; // @synthesize topRecommendBanner;
@property(retain, nonatomic) RecentPlayInfoData *recentPlayInfo; // @synthesize recentPlayInfo;
@property(retain, nonatomic) NSString *giftEntranceTitle; // @synthesize giftEntranceTitle;
@property(retain, nonatomic) NSString *giftURL; // @synthesize giftURL;
@property(retain, nonatomic) NSString *classifyUrl; // @synthesize classifyUrl;
@property(retain, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder;
@property(nonatomic) _Bool isShowSearchEntry; // @synthesize isShowSearchEntry;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
