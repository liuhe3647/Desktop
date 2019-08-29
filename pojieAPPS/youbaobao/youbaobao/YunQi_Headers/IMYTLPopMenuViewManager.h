//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HyPopMenuViewDelegate-Protocol.h"
#import "IMYTLHomeVCProtocol-Protocol.h"
#import "IMYTLUploadViewControllerDelegate-Protocol.h"

@class HyPopMenuView, IMYTLUploadViewController, NSString, UIViewController;

@interface IMYTLPopMenuViewManager : NSObject <HyPopMenuViewDelegate, IMYTLUploadViewControllerDelegate, IMYTLHomeVCProtocol>
{
    unsigned long long _uploadType;
    HyPopMenuView *_popUploadMenuView;
    UIViewController *_currViewController;
    IMYTLUploadViewController *_uploadVC;
}

@property(retain, nonatomic) IMYTLUploadViewController *uploadVC; // @synthesize uploadVC=_uploadVC;
@property(retain, nonatomic) UIViewController *currViewController; // @synthesize currViewController=_currViewController;
@property(retain, nonatomic) HyPopMenuView *popUploadMenuView; // @synthesize popUploadMenuView=_popUploadMenuView;
@property(nonatomic) unsigned long long uploadType; // @synthesize uploadType=_uploadType;
- (void).cxx_destruct;
- (void)enterVideoEidtVCAction:(id)arg1 needDismiss:(_Bool)arg2;
- (id)getVideoFileUrl:(id)arg1;
- (void)popMenuView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)previewAlbumVideo:(id)arg1;
- (void)qpCameraAction;
- (void)uploadViewController:(id)arg1 willDismiss:(long long)arg2;
- (void)showUploadSelectView;
- (void)showUploadVC;
- (void)checkUploadAuthorization;
- (void)showUploadMenuInViewController:(id)arg1;
- (id)initWithPopMenuView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

