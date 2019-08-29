//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextView;

@interface MRTBookingSweepstakesViewController : UIViewController <UITextViewDelegate>
{
    UILabel *_headerLabel;
    UITextView *_descriptionTextView;
    UIButton *_dismissButton;
}

@property(nonatomic) __weak UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;
- (id)dismissButtonText;
- (id)sweepstakesDescriptionText;
- (id)sweepstakesHeaderText;
- (void)dismissButtonTapped:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)buildDescriptionText;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

