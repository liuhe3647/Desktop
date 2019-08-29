//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCharacterSet, NSScanner, NSString;

@interface IMYUTViewPath : NSObject
{
    NSCharacterSet *_classAndPropertyChars;
    NSCharacterSet *_separatorChars;
    NSCharacterSet *_indexStartChar;
    NSCharacterSet *_indexEndChar;
    NSString *_string;
    NSScanner *_scanner;
    NSArray *_nodes;
}

+ (id)paraseView:(id)arg1 withDetailInfo:(id)arg2;
+ (_Bool)isSameWithView:(id)arg1 superView:(id)arg2;
+ (id)subViewPath:(id)arg1 atParentView:(id *)arg2 stop:(_Bool *)arg3;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) NSScanner *scanner; // @synthesize scanner=_scanner;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToView:(id)arg1 withDetailInfo:(id)arg2;
- (id)nextNode;
- (id)initWithString:(id)arg1;

@end

