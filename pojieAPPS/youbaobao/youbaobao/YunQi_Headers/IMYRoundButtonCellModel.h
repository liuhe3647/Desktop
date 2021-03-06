//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYCellModel.h"

@class IMYColor, IMYRoundButton;

@interface IMYRoundButtonCellModel : IMYCellModel
{
    CDUnknownBlockType _onTouchUpInsideEvent;
    IMYColor *_borderColor;
    IMYRoundButton *_currentButton;
    double _verticalPadding;
    double _horizontalPadding;
}

@property double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) __weak IMYRoundButton *currentButton; // @synthesize currentButton=_currentButton;
@property(retain, nonatomic) IMYColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) CDUnknownBlockType onTouchUpInsideEvent; // @synthesize onTouchUpInsideEvent=_onTouchUpInsideEvent;
- (void).cxx_destruct;
- (void)setCurrentCell:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) IMYColor *contentColor; // @dynamic contentColor;
@property(retain, nonatomic) IMYColor *titleColor; // @dynamic titleColor;

@end

