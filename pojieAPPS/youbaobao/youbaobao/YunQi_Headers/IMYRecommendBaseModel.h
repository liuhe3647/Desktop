//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYNewsShareBodyModel, IMYRecommendPublisher, NSArray, NSMutableArray, NSString;
@protocol IMYRecommendFeedBackModel;

@interface IMYRecommendBaseModel : NSObject
{
    _Bool _isReport;
    _Bool _isReportClick;
    _Bool _isRead;
    _Bool _show3Line;
    _Bool _ttqAvatarStyle;
    _Bool _is_praise;
    unsigned long long _recomm_type;
    long long _show_style;
    unsigned long long _community_type;
    unsigned long long _model_type;
    unsigned long long _type;
    unsigned long long _recommendId;
    NSString *_title;
    unsigned long long _attr_type;
    unsigned long long _switch_type;
    unsigned long long _total_review;
    IMYRecommendPublisher *_publisher;
    NSArray *_images;
    unsigned long long _imgs_count;
    NSString *_updated_date;
    NSString *_redirect_url;
    NSString *_url;
    NSString *_recommed_icon;
    NSArray<IMYRecommendFeedBackModel> *_label;
    NSMutableArray<IMYRecommendFeedBackModel> *_selectLabel;
    double _cellHeight;
    double _newStyleCellHeight;
    NSString *_record;
    long long _channel;
    long long _card_type;
    long long _view_times;
    NSString *_viewTimesString;
    long long _algorithm;
    long long _praise_num;
    NSString *_praiseCountString;
    long long _image_height;
    long long _image_width;
    IMYNewsShareBodyModel *_share_body;
    long long _refresh_time;
    struct CGSize _doubleFlowSize;
}

+ (void)initialize;
@property(nonatomic) long long refresh_time; // @synthesize refresh_time=_refresh_time;
@property(retain, nonatomic) IMYNewsShareBodyModel *share_body; // @synthesize share_body=_share_body;
@property(nonatomic) struct CGSize doubleFlowSize; // @synthesize doubleFlowSize=_doubleFlowSize;
@property(nonatomic) long long image_width; // @synthesize image_width=_image_width;
@property(nonatomic) long long image_height; // @synthesize image_height=_image_height;
@property(copy, nonatomic) NSString *praiseCountString; // @synthesize praiseCountString=_praiseCountString;
@property(nonatomic) _Bool is_praise; // @synthesize is_praise=_is_praise;
@property(nonatomic) long long praise_num; // @synthesize praise_num=_praise_num;
@property(nonatomic) long long algorithm; // @synthesize algorithm=_algorithm;
@property(copy, nonatomic) NSString *viewTimesString; // @synthesize viewTimesString=_viewTimesString;
@property(nonatomic) long long view_times; // @synthesize view_times=_view_times;
@property(nonatomic) _Bool ttqAvatarStyle; // @synthesize ttqAvatarStyle=_ttqAvatarStyle;
@property(nonatomic) long long card_type; // @synthesize card_type=_card_type;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *record; // @synthesize record=_record;
@property(nonatomic) _Bool show3Line; // @synthesize show3Line=_show3Line;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) _Bool isReportClick; // @synthesize isReportClick=_isReportClick;
@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(nonatomic) double newStyleCellHeight; // @synthesize newStyleCellHeight=_newStyleCellHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSMutableArray<IMYRecommendFeedBackModel> *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) NSArray<IMYRecommendFeedBackModel> *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *recommed_icon; // @synthesize recommed_icon=_recommed_icon;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(copy, nonatomic) NSString *updated_date; // @synthesize updated_date=_updated_date;
@property(nonatomic) unsigned long long imgs_count; // @synthesize imgs_count=_imgs_count;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) IMYRecommendPublisher *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) unsigned long long total_review; // @synthesize total_review=_total_review;
@property(nonatomic) unsigned long long switch_type; // @synthesize switch_type=_switch_type;
@property(nonatomic) unsigned long long attr_type; // @synthesize attr_type=_attr_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long recommendId; // @synthesize recommendId=_recommendId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long model_type; // @synthesize model_type=_model_type;
@property(nonatomic) unsigned long long community_type; // @synthesize community_type=_community_type;
@property(nonatomic) long long show_style; // @synthesize show_style=_show_style;
@property(nonatomic) unsigned long long recomm_type; // @synthesize recomm_type=_recomm_type;
- (void).cxx_destruct;
- (id)getDetailShareBodyModel;
- (void)cacluateCellSize:(id)arg1;
- (void)cacluateNewStyleTTQCellHeight:(id)arg1;
- (void)cacluateTTQCellHeight:(id)arg1;
- (void)cacluateNewStyleCellHeight:(id)arg1;
- (void)cacluateCellHeight:(id)arg1;
- (_Bool)isNeedFeedBackBtn;
- (_Bool)isOneImage;
- (id)init;

@end

