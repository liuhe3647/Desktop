//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UITableViewCell, UIView, YYPickerView;

@protocol YYPickerViewDelegate <NSObject>

@optional
- (void)pickerView:(YYPickerView *)arg1 forRow:(long long)arg2 forComponent:(long long)arg3 cell:(UITableViewCell *)arg4;
- (void)pickerView:(YYPickerView *)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (UIView *)pickerView:(YYPickerView *)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(UIView *)arg4;
- (NSString *)pickerView:(YYPickerView *)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(YYPickerView *)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(YYPickerView *)arg1 widthForComponent:(long long)arg2;
@end

