//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, NSDate, SYDatePickerViewModel, UIImageView, UILabel, YYDatePicker;

@interface SYDatePicker : UIView
{
    IMYButton *_leftButton;
    IMYButton *_rightButton;
    UILabel *_title;
    YYDatePicker *_picker;
    NSDate *_selectedDate;
    UIView *_pickerTitleView;
    UIImageView *_toolbar;
    SYDatePickerViewModel *_viewModel;
}

+ (id)datePickerWithDate:(id)arg1;
+ (id)datePickerWidth:(double)arg1;
+ (id)datePicker;
@property(retain, nonatomic) SYDatePickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIImageView *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIView *pickerTitleView; // @synthesize pickerTitleView=_pickerTitleView;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) YYDatePicker *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak IMYButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak IMYButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (id)dateFormatter;
- (id)selectedDateString;
- (void)awakeFromNib;

@end

