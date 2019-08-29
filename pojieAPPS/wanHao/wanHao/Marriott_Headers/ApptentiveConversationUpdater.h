//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApptentiveAPIRequestDelegate-Protocol.h"

@class ApptentiveAPIRequest, NSString;
@protocol ApptentiveConversationUpdaterDelegate;

@interface ApptentiveConversationUpdater : NSObject <ApptentiveAPIRequestDelegate>
{
    ApptentiveAPIRequest *request;
    _Bool creatingConversation;
    NSObject<ApptentiveConversationUpdaterDelegate> *_delegate;
}

+ (_Bool)shouldUpdate;
+ (id)currentConversation;
+ (_Bool)conversationExists;
+ (void)resetConversation;
+ (void)registerDefaults;
@property(nonatomic) __weak NSObject<ApptentiveConversationUpdaterDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processResult:(id)arg1;
- (void)at_APIRequestDidFail:(id)arg1;
- (void)at_APIRequestDidProgress:(id)arg1;
- (void)at_APIRequestDidFinish:(id)arg1 result:(id)arg2;
- (float)percentageComplete;
- (void)cancel;
- (void)createOrUpdateConversation;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
