//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCOREFIFOQueue, NSString, NSThread;
@protocol JCORENetworkSocketDelegate, JCORESocketConfigProtocol;

@interface JCORESocket : NSObject
{
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_rls;
    unsigned long long _ulReceivedLen;
    char *_receivingBuffer;
    unsigned long long _ulDefaultReceiveBufferSize;
    unsigned long long _ulSendingDataSentLen;
    _Bool _isSetuped;
    unsigned long long _status;
    JCOREFIFOQueue *_sendQueue;
    JCOREFIFOQueue *_recvQueue;
    _Bool _careAllDataSent;
    unsigned int _port;
    id <JCORENetworkSocketDelegate> _delegate;
    id <JCORESocketConfigProtocol> _config;
    NSString *_host;
    unsigned long long _ipType;
    NSThread *_reqThread;
}

@property(nonatomic) __weak NSThread *reqThread; // @synthesize reqThread=_reqThread;
@property(nonatomic) unsigned long long ipType; // @synthesize ipType=_ipType;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) id <JCORESocketConfigProtocol> config; // @synthesize config=_config;
@property(nonatomic) __weak id <JCORENetworkSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool careAllDataSent; // @synthesize careAllDataSent=_careAllDataSent;
- (void).cxx_destruct;
- (id)getDataAddressWithHost:(id)arg1 port:(unsigned int)arg2;
- (id)getDataAddress;
@property(readonly, nonatomic) JCOREFIFOQueue *recvQueue;
@property(readonly, nonatomic) JCOREFIFOQueue *sendQueue;
- (void)dequeue:(id)arg1 in:(id)arg2;
- (void)enqueue:(id)arg1 in:(id)arg2;
- (id)firstObject:(id)arg1;
- (unsigned long long)count:(id)arg1;
- (void)p_cleanSocket;
- (void)reenableSocketCallbacks;
- (void)sendData:(id)arg1;
- (_Bool)isConnected;
- (void)disconect;
- (void)connect;
- (void)changeIpAddressType;

@end
