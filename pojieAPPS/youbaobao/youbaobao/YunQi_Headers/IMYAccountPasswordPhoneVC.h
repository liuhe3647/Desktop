//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAccountBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYButton, NSString, UIImageView, UILabel, UITableView, UITextField, UIView;

@interface IMYAccountPasswordPhoneVC : IMYAccountBaseVC <UITableViewDataSource, UITableViewDelegate>
{
    long long _type;
    CDUnknownBlockType _findPasswordSuccessBlock;
    UITableView *_tableView;
    IMYButton *_nextButton;
    UIView *_headView;
    UILabel *_headLabel;
    UIView *_userAgreementView;
    UIView *_phoneRegistTitleView;
    UIImageView *_lineleft;
    UIImageView *_lineright;
    UILabel *_auto_105_label;
    UILabel *_auto_318_label;
    UILabel *_auto_352_label;
    NSString *_country;
    long long _nationCode;
    UIImageView *_arrowView;
    UILabel *_countryLabel;
    UITextField *_phoneTextField;
}

@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) long long nationCode; // @synthesize nationCode=_nationCode;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) __weak UILabel *auto_352_label; // @synthesize auto_352_label=_auto_352_label;
@property(nonatomic) __weak UILabel *auto_318_label; // @synthesize auto_318_label=_auto_318_label;
@property(nonatomic) __weak UILabel *auto_105_label; // @synthesize auto_105_label=_auto_105_label;
@property(nonatomic) __weak UIImageView *lineright; // @synthesize lineright=_lineright;
@property(nonatomic) __weak UIImageView *lineleft; // @synthesize lineleft=_lineleft;
@property(retain, nonatomic) UIView *phoneRegistTitleView; // @synthesize phoneRegistTitleView=_phoneRegistTitleView;
@property(nonatomic) __weak UIView *userAgreementView; // @synthesize userAgreementView=_userAgreementView;
@property(nonatomic) __weak UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak IMYButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType findPasswordSuccessBlock; // @synthesize findPasswordSuccessBlock=_findPasswordSuccessBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)nextButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)password;
- (void)createUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

