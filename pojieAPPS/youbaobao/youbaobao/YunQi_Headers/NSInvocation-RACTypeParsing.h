//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@class RACTuple;

@interface NSInvocation (RACTypeParsing)
- (id)rac_returnValue;
@property(copy, nonatomic) RACTuple *rac_argumentsTuple;
- (id)rac_argumentAtIndex:(unsigned long long)arg1;
- (void)rac_setArgument:(id)arg1 atIndex:(unsigned long long)arg2;
@end

