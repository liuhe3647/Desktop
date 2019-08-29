//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYSimpleTableView, IMYTLHomeBabyInfoHeaderView, IMYTLHomeBabyInfoVM, NSString, UIImagePickerController;

@interface IMYTLHomeBabyInfoVC : IMYTLViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITableViewDelegate>
{
    IMYTLHomeBabyInfoVM *_viewModel;
    IMYSimpleTableView *_tableView;
    IMYTLHomeBabyInfoHeaderView *_headerView;
    UIImagePickerController *_imagePickerController;
}

@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(retain, nonatomic) IMYTLHomeBabyInfoHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IMYSimpleTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IMYTLHomeBabyInfoVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)showDoNotHaveAuthorizationInfo;
- (void)saveBabyAvatarImage:(id)arg1 path:(id)arg2;
- (id)savedBabyAvatarPath;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)setupBabyAvatarActionSheet;
- (void)gotoBabyAttention;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

