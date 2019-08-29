//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString, SYLuckyBagDetailModel, UIImage;

@interface SYLuckyBagModel : NSObject <YYJSONHelperProtocol>
{
    int _type;
    int _desc_type;
    NSString *_desc;
    NSString *_name;
    NSString *_imgString;
    UIImage *_img;
    SYLuckyBagDetailModel *_bag_desc;
}

+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)getUsingLKDBHelper;
+ (void)initialize;
@property(retain, nonatomic) SYLuckyBagDetailModel *bag_desc; // @synthesize bag_desc=_bag_desc;
@property(nonatomic) int desc_type; // @synthesize desc_type=_desc_type;
@property(retain, nonatomic) UIImage *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *imgString; // @synthesize imgString=_imgString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)userSetValueForModel:(id)arg1 value:(id)arg2;
- (id)userGetValueForModel:(id)arg1;

@end

