//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordCell_v2.h"

@class NSString, UIButton, UILabel;

@interface IMYRecordActionCell_v2 : IMYRecordCell_v2
{
    UILabel *_detailLabel;
    NSString *_messageString;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void).cxx_destruct;
- (void)reloadDisplay;
- (void)_initMyself;

@end

