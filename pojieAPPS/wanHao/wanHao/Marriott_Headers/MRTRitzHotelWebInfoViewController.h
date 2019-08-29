//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTHotelInfoViewController.h"

#import "MRTWebBrowserControllerDelegate-Protocol.h"

@class MRTWebBrowserViewController, NSString, NSURL, UIView;

@interface MRTRitzHotelWebInfoViewController : MRTHotelInfoViewController <MRTWebBrowserControllerDelegate>
{
    NSString *_analyticsLink;
    UIView *_contentView;
    MRTWebBrowserViewController *_webController;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) MRTWebBrowserViewController *webController; // @synthesize webController=_webController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *analyticsLink; // @synthesize analyticsLink=_analyticsLink;
- (void).cxx_destruct;
- (void)webBrowserViewController:(id)arg1 didCompleteLoadInWebView:(id)arg2;
- (void)webBrowserViewController:(id)arg1 didStartLoadInWebView:(id)arg2;
- (void)webBrowserViewControllerDidFinish:(id)arg1;
- (void)close;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

