//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTAbstractSettingsViewController.h"

@class MRTStyledLabel, UIView;

@interface MRTAboutThisAppViewController : MRTAbstractSettingsViewController
{
    MRTStyledLabel *_copyrightInfoLabel;
    UIView *_headerView;
}

@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak MRTStyledLabel *copyrightInfoLabel; // @synthesize copyrightInfoLabel=_copyrightInfoLabel;
- (void).cxx_destruct;
- (void)enableDebug:(id)arg1;
- (id)currentYear;
- (id)copyrightInfoString;
- (id)versionString;
- (void)setupItems;
- (void)viewDidLoad;

@end

