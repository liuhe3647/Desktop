//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYSimpleListCell.h"

@class IMYSimpleSwitchModel, IMYSwitch;

@interface IMYSimpleSwitchCell : IMYSimpleListCell
{
    IMYSwitch *_switchView;
}

@property(retain, nonatomic) IMYSwitch *switchView; // @synthesize switchView=_switchView;
- (void).cxx_destruct;
- (void)reloadDisplay;
- (void)_initMyself;

// Remaining properties
@property(retain, nonatomic) IMYSimpleSwitchModel *model; // @dynamic model;

@end

