//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEBBrandSessionModel, IMYEBBrandSessionVC, UILabel, UIView;

@interface IMYEBBrandSessionHeaderManager : NSObject
{
    IMYEBBrandSessionVC *_viewController;
    UIView *_headerView;
    IMYEBBrandSessionModel *_showModel;
    UILabel *_topLabel;
}

@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) IMYEBBrandSessionModel *showModel; // @synthesize showModel=_showModel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak IMYEBBrandSessionVC *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)handleString:(id)arg1 exchangeString:(id)arg2 toImageName:(id)arg3;
- (void)setupHeaderView;
- (void)setupTopLabel;
- (void)reloadData;
- (void)imy_themeChanged;
- (id)init;

@end
