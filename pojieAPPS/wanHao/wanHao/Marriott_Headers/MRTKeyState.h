//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface MRTKeyState : NSObject <NSCopying>
{
    _Bool _enableMainActionButton;
    _Bool _hasAction;
    _Bool _isOutcomeUndefined;
    _Bool _isWaiting;
    _Bool _showFail;
    _Bool _showRemainingKeys;
    _Bool _showSurveyButton;
    _Bool _showSuccess;
    _Bool _showAddToSiriButton;
    _Bool _shouldVibrate;
    long long _stateId;
    UIColor *_mainBackgroundColor;
    UIColor *_mainButtonTextColor;
    UIColor *_mainButtonBackgroundColor;
    UIColor *_tintColor;
    UIImage *_mainButtonImage;
    UIImage *_roomDirectionsButtonImage;
    NSString *_mainMessageText;
    NSString *_secondaryMessageText;
    long long _numberOfTimesEntered;
}

+ (id)outOfKeysState;
+ (id)thirdFailureState;
+ (id)secondFailureState;
+ (id)firstFailureState;
+ (id)secondUndefinedState;
+ (id)firstUndefinedState;
+ (id)successState;
+ (id)waitingState;
+ (id)actionSecondRetryState;
+ (id)actionRetryState;
+ (id)actionState;
@property(nonatomic) long long numberOfTimesEntered; // @synthesize numberOfTimesEntered=_numberOfTimesEntered;
@property(nonatomic) _Bool shouldVibrate; // @synthesize shouldVibrate=_shouldVibrate;
@property(nonatomic) _Bool showAddToSiriButton; // @synthesize showAddToSiriButton=_showAddToSiriButton;
@property(nonatomic) _Bool showSuccess; // @synthesize showSuccess=_showSuccess;
@property(nonatomic) _Bool showSurveyButton; // @synthesize showSurveyButton=_showSurveyButton;
@property(nonatomic) _Bool showRemainingKeys; // @synthesize showRemainingKeys=_showRemainingKeys;
@property(nonatomic) _Bool showFail; // @synthesize showFail=_showFail;
@property(nonatomic) _Bool isWaiting; // @synthesize isWaiting=_isWaiting;
@property(nonatomic) _Bool isOutcomeUndefined; // @synthesize isOutcomeUndefined=_isOutcomeUndefined;
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(nonatomic) _Bool enableMainActionButton; // @synthesize enableMainActionButton=_enableMainActionButton;
@property(copy, nonatomic) NSString *secondaryMessageText; // @synthesize secondaryMessageText=_secondaryMessageText;
@property(copy, nonatomic) NSString *mainMessageText; // @synthesize mainMessageText=_mainMessageText;
@property(retain, nonatomic) UIImage *roomDirectionsButtonImage; // @synthesize roomDirectionsButtonImage=_roomDirectionsButtonImage;
@property(retain, nonatomic) UIImage *mainButtonImage; // @synthesize mainButtonImage=_mainButtonImage;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *mainButtonBackgroundColor; // @synthesize mainButtonBackgroundColor=_mainButtonBackgroundColor;
@property(retain, nonatomic) UIColor *mainButtonTextColor; // @synthesize mainButtonTextColor=_mainButtonTextColor;
@property(retain, nonatomic) UIColor *mainBackgroundColor; // @synthesize mainBackgroundColor=_mainBackgroundColor;
@property(nonatomic) long long stateId; // @synthesize stateId=_stateId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
