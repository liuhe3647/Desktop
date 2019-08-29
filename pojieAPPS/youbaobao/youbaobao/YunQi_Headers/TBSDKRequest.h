//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBSDKConnectionDelegate-Protocol.h"
#import "TBSDKProgressDelegate-Protocol.h"

@class NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL, TBSDKConnection;
@protocol TBSDKRequestDataSource, TBSDKRequestDelegate, TBSDKRequestProgressProtocol;

@interface TBSDKRequest : NSObject <TBSDKConnectionDelegate, TBSDKProgressDelegate>
{
    _Bool _useHTTPCache;
    _Bool _forceRefresh;
    _Bool _isAvalancheCache;
    _Bool _isUseHttps;
    _Bool _isUseHttpPost;
    int _responseStatusCode;
    int _gzipLimitedSize;
    NSError *_error;
    id <TBSDKRequestDelegate> _delegate;
    id <TBSDKRequestDataSource> _dataSource;
    id <TBSDKRequestProgressProtocol> _requestProgressDelegate;
    TBSDKConnection *_request;
    NSURL *_url;
    NSString *_customHost;
    double _timeOutSeconds;
    NSData *_responseData;
    NSString *_responseString;
    NSDictionary *_responseHeaders;
    NSDictionary *_requestHeaders;
    NSString *_apiMethod;
    NSArray *_blackCacheKeyParam;
    NSMutableDictionary *_networkDataSet;
    double _operationQueueTime;
    double _networkFinishedTime;
    NSString *_userId;
    NSString *_apiName;
    NSString *_apiVersion;
    NSMutableDictionary *_protocolParameters;
    NSMutableDictionary *_httpHeaders;
    NSMutableDictionary *_extParameters;
    NSMutableDictionary *_bizParameters;
    NSMutableArray *_uploadFiles;
    NSString *_unitPrefix;
    id _context;
}

+ (id)urlEncode:(id)arg1;
+ (id)dict2QueryString:(id)arg1;
+ (void)cancelTBSDKAllRequest;
+ (void)initialize;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *unitPrefix; // @synthesize unitPrefix=_unitPrefix;
@property(nonatomic) _Bool isUseHttpPost; // @synthesize isUseHttpPost=_isUseHttpPost;
@property(nonatomic) _Bool isUseHttps; // @synthesize isUseHttps=_isUseHttps;
@property(retain, nonatomic) NSMutableArray *uploadFiles; // @synthesize uploadFiles=_uploadFiles;
@property(retain, nonatomic) NSMutableDictionary *bizParameters; // @synthesize bizParameters=_bizParameters;
@property(retain, nonatomic) NSMutableDictionary *extParameters; // @synthesize extParameters=_extParameters;
@property(retain, nonatomic) NSMutableDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(retain, nonatomic) NSMutableDictionary *protocolParameters; // @synthesize protocolParameters=_protocolParameters;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) double networkFinishedTime; // @synthesize networkFinishedTime=_networkFinishedTime;
@property(nonatomic) double operationQueueTime; // @synthesize operationQueueTime=_operationQueueTime;
@property(retain, nonatomic) NSMutableDictionary *networkDataSet; // @synthesize networkDataSet=_networkDataSet;
@property(retain, nonatomic) NSArray *blackCacheKeyParam; // @synthesize blackCacheKeyParam=_blackCacheKeyParam;
@property(nonatomic) int gzipLimitedSize; // @synthesize gzipLimitedSize=_gzipLimitedSize;
@property(nonatomic) _Bool isAvalancheCache; // @synthesize isAvalancheCache=_isAvalancheCache;
@property(retain, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) _Bool useHTTPCache; // @synthesize useHTTPCache=_useHTTPCache;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(retain, nonatomic) NSString *customHost; // @synthesize customHost=_customHost;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) TBSDKConnection *request; // @synthesize request=_request;
@property(nonatomic) __weak id <TBSDKRequestProgressProtocol> requestProgressDelegate; // @synthesize requestProgressDelegate=_requestProgressDelegate;
@property(nonatomic) __weak id <TBSDKRequestDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TBSDKRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)getApiURL4Env;
- (id)getRequestURL;
- (void)reset;
- (void)addUploadFileWithData:(id)arg1 fileName:(id)arg2 forKey:(id)arg3;
- (void)removeBizParameter:(id)arg1;
- (void)addBizParameter:(id)arg1 forKey:(id)arg2;
- (void)removeExtParameter:(id)arg1;
- (void)addExtParameter:(id)arg1 forKey:(id)arg2;
- (void)addHttpHeader:(id)arg1 forKey:(id)arg2;
- (void)addProtocolParameter:(id)arg1 forKey:(id)arg2;
- (id)initWithApiName:(id)arg1 apiVersion:(id)arg2;
- (id)init;
- (void)clearResponseForCache;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (void)setProgress:(float)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestNetworkDataSet:(id)arg1 withFinishedTime:(double)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)installCookies:(id)arg1;
- (void)setResponse;
- (_Bool)isResponseCompressed;
- (void)cancelTBSDKAllRequest;
- (void)cancelRequest;
- (void)startAsynchronous;
- (_Bool)startSynchronous;
- (id)getMTOPCookies;
- (void)setCookies;
- (void)setRequestPostData;
- (void)setRequestPostValue;
- (void)setHTTPRequestHeader;
- (void)installRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

