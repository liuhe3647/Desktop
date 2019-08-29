//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IMYNewsDislikeInputView, IMYNewsDislikeSelectView, NSArray;

@interface IMYNewsFeedBackViewController : UIViewController
{
    NSArray *_label;
    long long _newsId;
    long long _recommendType;
    IMYNewsDislikeSelectView *_selectView;
    IMYNewsDislikeInputView *_inputView;
}

@property(retain, nonatomic) IMYNewsDislikeInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) IMYNewsDislikeSelectView *selectView; // @synthesize selectView=_selectView;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(copy, nonatomic) NSArray *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setupUI;
- (void)handleInputSubmitAction:(id)arg1;
- (void)handleSelectedAction:(id)arg1;
- (void)hideInputView;
- (void)showInputView;
- (void)dismissVc:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

