//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PSDWebViewResourceElement : NSObject
{
    NSString *_url;
    long long _tm_pnt_send;
    long long _tm_dur_end;
    long long _tm_dur_firstP;
    long long _tm_dur_dns;
    long long _tm_dur_conn;
    long long _tm_dur_ssl;
    NSString *_content_type;
    long long _recv_bytes;
}

@property(nonatomic) long long recv_bytes; // @synthesize recv_bytes=_recv_bytes;
@property(retain, nonatomic) NSString *content_type; // @synthesize content_type=_content_type;
@property(nonatomic) long long tm_dur_ssl; // @synthesize tm_dur_ssl=_tm_dur_ssl;
@property(nonatomic) long long tm_dur_conn; // @synthesize tm_dur_conn=_tm_dur_conn;
@property(nonatomic) long long tm_dur_dns; // @synthesize tm_dur_dns=_tm_dur_dns;
@property(nonatomic) long long tm_dur_firstP; // @synthesize tm_dur_firstP=_tm_dur_firstP;
@property(nonatomic) long long tm_dur_end; // @synthesize tm_dur_end=_tm_dur_end;
@property(nonatomic) long long tm_pnt_send; // @synthesize tm_pnt_send=_tm_pnt_send;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)toJSONObject;

@end

