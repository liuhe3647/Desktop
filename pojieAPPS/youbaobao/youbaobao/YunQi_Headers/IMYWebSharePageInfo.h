//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYISharePageInfo-Protocol.h"

@class IMYWebShareRegister, NSDictionary, NSString, UIWebView;

@interface IMYWebSharePageInfo : NSObject <IMYISharePageInfo>
{
    long long _type;
    NSString *_title;
    NSString *_content;
    NSString *_comment;
    NSString *_imageURL;
    NSString *_fromURL;
    long long _mediaType;
    long long _moduleId;
    UIWebView *_webView;
    NSString *_uriPath;
    NSDictionary *_requestParams;
    NSDictionary *_jsResult;
    NSString *_urlString;
    IMYWebShareRegister *_jsRegsiter;
}

@property(retain, nonatomic) IMYWebShareRegister *jsRegsiter; // @synthesize jsRegsiter=_jsRegsiter;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSDictionary *jsResult; // @synthesize jsResult=_jsResult;
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(copy, nonatomic) NSString *uriPath; // @synthesize uriPath=_uriPath;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) long long moduleId; // @synthesize moduleId=_moduleId;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *fromURL; // @synthesize fromURL=_fromURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setPropertysWithDictionary:(id)arg1;
- (id)initWithRegister:(id)arg1 urlString:(id)arg2;
- (void)_imy_setJSResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

