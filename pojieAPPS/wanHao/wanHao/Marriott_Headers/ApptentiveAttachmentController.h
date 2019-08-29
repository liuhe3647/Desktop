//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "QLPreviewControllerDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class ApptentiveAttachButton, ApptentiveMessageCenterViewController, NSArray, NSMutableArray, NSNumberFormatter, NSString, UICollectionView, UIPopoverController;

@interface ApptentiveAttachmentController : UIResponder <QLPreviewControllerDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>
{
    _Bool _active;
    NSArray *_attachments;
    UICollectionView *_collectionView;
    ApptentiveAttachButton *_attachButton;
    ApptentiveMessageCenterViewController *_viewController;
    UIPopoverController *_imagePickerPopoverController;
    NSMutableArray *_mutableAttachments;
    NSNumberFormatter *_numberFormatter;
    struct CGSize _collectionViewFooterSize;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) struct CGSize collectionViewFooterSize; // @synthesize collectionViewFooterSize=_collectionViewFooterSize;
@property(retain, nonatomic) NSMutableArray *mutableAttachments; // @synthesize mutableAttachments=_mutableAttachments;
@property(retain, nonatomic) UIPopoverController *imagePickerPopoverController; // @synthesize imagePickerPopoverController=_imagePickerPopoverController;
@property(nonatomic) __weak ApptentiveMessageCenterViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) ApptentiveAttachButton *attachButton; // @synthesize attachButton=_attachButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)displayImagePickerControllerWithSourceType:(long long)arg1 sender:(id)arg2;
- (void)dismissImagePicker:(id)arg1;
- (void)insertImage:(id)arg1;
- (id)archivePath;
- (void)updateBadge;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)deleteImage:(id)arg1;
- (void)chooseImage:(id)arg1;
- (void)showAttachments:(id)arg1;
- (void)clear;
- (id)inputView;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (id)nextResponder;
- (void)saveDraft;
- (void)viewDidLoad;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

