//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYDoctorDoctorModel : NSObject
{
    NSString *_name;
    NSString *_title;
    NSString *_image;
    NSString *_levelTitle;
    NSString *_clinic;
    NSString *_hospital;
    NSString *_doctorId;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *doctorId; // @synthesize doctorId=_doctorId;
@property(copy, nonatomic) NSString *hospital; // @synthesize hospital=_hospital;
@property(copy, nonatomic) NSString *clinic; // @synthesize clinic=_clinic;
@property(copy, nonatomic) NSString *levelTitle; // @synthesize levelTitle=_levelTitle;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

