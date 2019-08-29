//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ForwardMessageLogicController, NSArray, NSMutableArray, NSString;
@protocol FavForwardLogicDelegate;

@interface FavForwardLogicController : MMObject <ForwardMessageLogicDelegate, UIAlertViewDelegate>
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSArray *m_forwardingItems;
    NSArray *m_forwardingDataWraps;
    NSMutableArray *m_messageWrapList;
    id <FavForwardLogicDelegate> m_delegate;
}

@property(nonatomic) __weak id <FavForwardLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)msgFromItem:(id)arg1;
- (void)forMessage:(id)arg1;
- (void)forwardMessage:(id)arg1 delegate:(id)arg2;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (_Bool)addFavItemList:(id)arg1;
- (void)forwardFavDataItemWraps:(id)arg1 delegate:(id)arg2;
- (void)ForwardFavItemList:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
