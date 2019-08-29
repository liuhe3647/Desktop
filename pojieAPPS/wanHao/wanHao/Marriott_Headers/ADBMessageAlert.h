//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADBMessage.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface ADBMessageAlert : ADBMessage <UIAlertViewDelegate>
{
    NSString *_confirmButtonText;
    NSString *_cancelButtonText;
    NSString *_title;
    NSString *_content;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *confirmButtonText; // @synthesize confirmButtonText=_confirmButtonText;
- (void)dealloc;
- (id)findBestViewController:(id)arg1;
- (void)handleCancelAction;
- (void)handleConfirmAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;
- (id)initWithMessageDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

