//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FindPwdBean : NSObject
{
    NSString *_username;
    NSString *_bindname;
    NSString *_game;
    NSString *_phoneNum;
    NSString *_phoneActiveKey;
    NSString *_cookie;
    NSString *_sid;
    NSString *_nPwd;
    NSString *_emailBind;
    NSString *_emailActiveKey;
    NSString *_emailType;
    NSString *_type;
    NSString *_emailTo;
    NSString *_subject;
    NSString *_text;
    NSString *_mode;
}

@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *emailTo; // @synthesize emailTo=_emailTo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *emailType; // @synthesize emailType=_emailType;
@property(copy, nonatomic) NSString *emailActiveKey; // @synthesize emailActiveKey=_emailActiveKey;
@property(copy, nonatomic) NSString *emailBind; // @synthesize emailBind=_emailBind;
@property(copy, nonatomic) NSString *nPwd; // @synthesize nPwd=_nPwd;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) NSString *phoneActiveKey; // @synthesize phoneActiveKey=_phoneActiveKey;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *game; // @synthesize game=_game;
@property(copy, nonatomic) NSString *bindname; // @synthesize bindname=_bindname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)createResetPwdCookie;
- (id)createCookie;
- (id)createResetPwdParams;
- (id)createEmailBindingCheckParams;
- (id)createSendEmialParams;
- (id)createPhoneBindingCheckInterFaceParams;
- (id)createPostParams;
- (id)createCookie_VerifyUserName;
- (id)createCheckBindInfoParams;
- (id)createVerifyUserNameParams;

@end

