//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYTLOperationModel : NSObject
{
    _Bool _show_close;
    long long _style;
    long long _mode;
    NSString *_content;
    NSString *_picture_url;
    unsigned long long _jump_type;
    NSString *_jump_url;
    unsigned long long _start_at;
    unsigned long long _end_at;
}

@property(nonatomic) unsigned long long end_at; // @synthesize end_at=_end_at;
@property(nonatomic) unsigned long long start_at; // @synthesize start_at=_start_at;
@property(nonatomic) _Bool show_close; // @synthesize show_close=_show_close;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(nonatomic) unsigned long long jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) NSString *picture_url; // @synthesize picture_url=_picture_url;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)isTimeToShow;
- (struct CGSize)imageSize;

@end

