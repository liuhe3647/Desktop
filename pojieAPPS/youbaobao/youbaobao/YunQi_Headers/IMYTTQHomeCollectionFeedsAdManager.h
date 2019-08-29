//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYCollectionFeedsAdManager.h"

@protocol IMYIAdTool;

@interface IMYTTQHomeCollectionFeedsAdManager : IMYCollectionFeedsAdManager
{
    id <IMYIAdTool> _bannerAdTool;
    id <IMYIAdTool> _sideBarAdTool;
}

+ (void)load;
@property(retain, nonatomic) id <IMYIAdTool> sideBarAdTool; // @synthesize sideBarAdTool=_sideBarAdTool;
@property(retain, nonatomic) id <IMYIAdTool> bannerAdTool; // @synthesize bannerAdTool=_bannerAdTool;
- (void).cxx_destruct;
- (void)aopCollectionUtils:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)setupAdPositionsWithSectionNumber:(long long)arg1;
- (id)createSideBarAdTool;
- (void)poolFinishFreshView:(id)arg1;
- (void)setupEmptyData:(id)arg1;
- (void)setupServicesWithRawModels:(id)arg1;
- (void)onRequestParamsBuilding:(id)arg1;
- (id)initWithADInfo:(id)arg1;

@end
