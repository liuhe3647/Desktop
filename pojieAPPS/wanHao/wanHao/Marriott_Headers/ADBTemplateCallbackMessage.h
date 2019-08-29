//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADBMessage.h"

@class NSString;

@interface ADBTemplateCallbackMessage : ADBMessage
{
    NSString *_templateURL;
    NSString *_templateBody;
    NSString *_contentType;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *templateBody; // @synthesize templateBody=_templateBody;
@property(retain, nonatomic) NSString *templateURL; // @synthesize templateURL=_templateURL;
- (void)dealloc;
- (id)getExpandedBody;
- (void)show;
- (_Bool)shouldShowForVariables:(id)arg1 contextData:(id)arg2 lifecycleData:(id)arg3;
- (id)getQueue;
- (id)logPrefix;
- (id)initWithMessageDictionary:(id)arg1;

@end

