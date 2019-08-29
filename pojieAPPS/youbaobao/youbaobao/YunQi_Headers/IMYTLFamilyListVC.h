//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLCBBaseViewController.h"

@class IMYTLBabyModel;

@interface IMYTLFamilyListVC : IMYTLCBBaseViewController
{
    IMYTLBabyModel *_baby;
    CDUnknownBlockType _getFollowFamilyBlock;
    CDUnknownBlockType _cancelFollowFamilyBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelFollowFamilyBlock; // @synthesize cancelFollowFamilyBlock=_cancelFollowFamilyBlock;
@property(copy, nonatomic) CDUnknownBlockType getFollowFamilyBlock; // @synthesize getFollowFamilyBlock=_getFollowFamilyBlock;
@property(retain, nonatomic) IMYTLBabyModel *baby; // @synthesize baby=_baby;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)inviteFamily;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)cellIdentiyIndexPath:(id)arg1;
- (id)registeCellNibNameDictionary;
- (id)vmClass;
- (void)loadDatas;
- (void)viewDidLoad;
- (id)initWithBaby:(id)arg1;

@end

