//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRTDigitalKeyInterface-Protocol.h"
#import "MRTStateMachineDelegate-Protocol.h"

@class MRTDigitalKeyFlowController, MRTDigitalKeyViewController, MRTStateMachine, NSDate, NSString, NSTimer;

@interface MRTKeyStationController : NSObject <MRTStateMachineDelegate, MRTDigitalKeyInterface>
{
    MRTDigitalKeyViewController *_digitalKeyViewController;
    MRTDigitalKeyFlowController *_digitalKeyFlowController;
    MRTStateMachine *_stateMachine;
    long long _numberOfPrintAttempts;
    long long _numberOfFailedAttempts;
    NSDate *_unlockInitiatedDate;
    NSTimer *_resetTimer;
}

+ (id)unlockStateDictionary;
@property(retain, nonatomic) NSTimer *resetTimer; // @synthesize resetTimer=_resetTimer;
@property(retain, nonatomic) NSDate *unlockInitiatedDate; // @synthesize unlockInitiatedDate=_unlockInitiatedDate;
@property(nonatomic) long long numberOfFailedAttempts; // @synthesize numberOfFailedAttempts=_numberOfFailedAttempts;
@property(nonatomic) long long numberOfPrintAttempts; // @synthesize numberOfPrintAttempts=_numberOfPrintAttempts;
@property(retain, nonatomic) MRTStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MRTDigitalKeyFlowController *digitalKeyFlowController; // @synthesize digitalKeyFlowController=_digitalKeyFlowController;
@property(nonatomic) __weak MRTDigitalKeyViewController *digitalKeyViewController; // @synthesize digitalKeyViewController=_digitalKeyViewController;
- (void).cxx_destruct;
- (void)trackDoorUnlockWithSuccess:(_Bool)arg1;
- (void)trackDoorOpenInitiation;
- (void)willTransitionFromState:(id)arg1 toState:(id)arg2 withExitHandler:(CDUnknownBlockType)arg3;
- (void)didEnterState:(id)arg1;
- (void)applyState:(id)arg1;
- (void)toggleDigitalKeyMode:(id)arg1;
- (long long)remainingKeys;
- (void)moveToInitialState:(id)arg1;
- (void)moveToTryAgainState:(id)arg1;
- (void)stopUnlockAction;
- (void)unlockAction;
- (void)printAction;
- (void)mainActionTriggered;
- (void)loadCurrentState;
- (void)invalidateTimer;
- (void)resetKeysPrinted;
- (id)initWithRoomInformation:(id)arg1;
- (void)dealloc;
- (id)contextButtons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

