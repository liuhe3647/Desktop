//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXRSSExpandedDecodedObject.h"

@interface ZXRSSExpandedDecodedNumeric : ZXRSSExpandedDecodedObject
{
    int _firstDigit;
    int _secondDigit;
}

@property(readonly, nonatomic) int secondDigit; // @synthesize secondDigit=_secondDigit;
@property(readonly, nonatomic) int firstDigit; // @synthesize firstDigit=_firstDigit;
- (_Bool)anyFNC1;
- (_Bool)secondDigitFNC1;
- (_Bool)firstDigitFNC1;
@property(readonly, nonatomic) int value;
- (id)initWithNewPosition:(int)arg1 firstDigit:(int)arg2 secondDigit:(int)arg3;

@end
