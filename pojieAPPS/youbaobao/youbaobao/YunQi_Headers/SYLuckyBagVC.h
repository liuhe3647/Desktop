//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "YYPickerViewDataSource-Protocol.h"
#import "YYPickerViewDelegate-Protocol.h"

@class IMYButton, NSString, SYLuckyBagEditView, SYLuckyBagInfoView, SYLuckyBagVM, SYPickerView, UIImageView, UITableView, UIView;

@interface SYLuckyBagVC : SYBaseViewController <YYPickerViewDataSource, YYPickerViewDelegate, UITextFieldDelegate, UITextViewDelegate>
{
    SYLuckyBagVM *_vm;
    UIView *_bgView;
    UITableView *_mainTableView;
    UIImageView *_rightIconImageView;
    UIView *_editBottomView;
    IMYButton *_editBottomViewButton;
    SYLuckyBagEditView *_editView;
    SYLuckyBagInfoView *_infoView;
    SYPickerView *_weightPicker;
    SYPickerView *_eutociaPicker;
    SYPickerView *_genderPicker;
}

@property(retain, nonatomic) SYPickerView *genderPicker; // @synthesize genderPicker=_genderPicker;
@property(retain, nonatomic) SYPickerView *eutociaPicker; // @synthesize eutociaPicker=_eutociaPicker;
@property(retain, nonatomic) SYPickerView *weightPicker; // @synthesize weightPicker=_weightPicker;
@property(retain, nonatomic) SYLuckyBagInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SYLuckyBagEditView *editView; // @synthesize editView=_editView;
@property(nonatomic) __weak IMYButton *editBottomViewButton; // @synthesize editBottomViewButton=_editBottomViewButton;
@property(nonatomic) __weak UIView *editBottomView; // @synthesize editBottomView=_editBottomView;
@property(nonatomic) __weak UIImageView *rightIconImageView; // @synthesize rightIconImageView=_rightIconImageView;
@property(nonatomic) __weak UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SYLuckyBagVM *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;
- (void)contentSizeToFit:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)motherChangeDone;
- (void)pickerViewRightButtonAction:(id)arg1;
- (void)pickerViewLeftButtonAction:(id)arg1;
- (void)textField:(id)arg1;
- (void)refreshView;
- (void)initView;
- (void)colorGradient;
- (void)backButtonAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

