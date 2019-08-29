//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTWebBrowserControllerDelegate-Protocol.h"

@class MRTWebBrowserViewController, NSString;

@interface MRTMarriottWebTileViewController : UIViewController <MRTWebBrowserControllerDelegate>
{
    _Bool _useWKWebView;
    MRTWebBrowserViewController *_webController;
    NSString *_relativeURLString;
}

@property(nonatomic) _Bool useWKWebView; // @synthesize useWKWebView=_useWKWebView;
@property(copy, nonatomic) NSString *relativeURLString; // @synthesize relativeURLString=_relativeURLString;
@property(retain, nonatomic) MRTWebBrowserViewController *webController; // @synthesize webController=_webController;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)webBrowserViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)URLWithRelativeString:(id)arg1;
- (void)viewDidLoad;
- (id)initRewardsPointsGrid;
- (id)initWithRelativeURLString:(id)arg1 useWebKit:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

