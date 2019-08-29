//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYREmoticonInputViewDelegate-Protocol.h"
#import "TTQPublishTextEditDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MBProgressHUD, NSIndexPath, NSString, NSTimer, TTQPublishImageCell, TTQPublishRichMovableViewController, TTQPublishSubjectSelectionToolView, TTQPublishTakeImageUtil, TTQPublishTextCell, TTQPublishToolView, TTQPublishTopicViewModel, TTQPublishVoteView, TTQTopicTableView, UILabel, UITapGestureRecognizer, UITextField, UIView;

@interface TTQPublishTopicForRichViewController : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource, TTQPublishTextEditDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, IMYREmoticonInputViewDelegate>
{
    TTQPublishSubjectSelectionToolView *_subjectToolView;
    TTQPublishToolView *_bottomToolView;
    TTQPublishVoteView *_voteView;
    UITextField *_titleTextField;
    UILabel *_titleCountLabel;
    UILabel *_contentCountLabel;
    UIView *_emotionView;
    MBProgressHUD *_progressHUD;
    TTQTopicTableView *_tableView;
    UIView *_tableFooterView;
    NSTimer *_saveTimer;
    TTQPublishTopicViewModel *_viewModel;
    double _keyBoardHeigh;
    NSIndexPath *_activeIndexPath;
    TTQPublishTextCell *_activeTextCell;
    long long _activeTextInputModel;
    TTQPublishImageCell *_activeImageCell;
    TTQPublishTakeImageUtil *_takeImageUtil;
    TTQPublishRichMovableViewController *_movableCtr;
    UITapGestureRecognizer *_tableTapGesture;
    double _safeBottom_Margin;
}

+ (id)publishTopicForRichViewController:(id)arg1;
@property(nonatomic) double safeBottom_Margin; // @synthesize safeBottom_Margin=_safeBottom_Margin;
@property(retain, nonatomic) UITapGestureRecognizer *tableTapGesture; // @synthesize tableTapGesture=_tableTapGesture;
@property(retain, nonatomic) TTQPublishRichMovableViewController *movableCtr; // @synthesize movableCtr=_movableCtr;
@property(retain, nonatomic) TTQPublishTakeImageUtil *takeImageUtil; // @synthesize takeImageUtil=_takeImageUtil;
@property(retain, nonatomic) TTQPublishImageCell *activeImageCell; // @synthesize activeImageCell=_activeImageCell;
@property(nonatomic) long long activeTextInputModel; // @synthesize activeTextInputModel=_activeTextInputModel;
@property(retain, nonatomic) TTQPublishTextCell *activeTextCell; // @synthesize activeTextCell=_activeTextCell;
@property(retain, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(nonatomic) double keyBoardHeigh; // @synthesize keyBoardHeigh=_keyBoardHeigh;
@property(retain, nonatomic) TTQPublishTopicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) TTQTopicTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) UIView *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) UILabel *contentCountLabel; // @synthesize contentCountLabel=_contentCountLabel;
@property(retain, nonatomic) UILabel *titleCountLabel; // @synthesize titleCountLabel=_titleCountLabel;
@property(retain, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) TTQPublishVoteView *voteView; // @synthesize voteView=_voteView;
@property(retain, nonatomic) TTQPublishToolView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) TTQPublishSubjectSelectionToolView *subjectToolView; // @synthesize subjectToolView=_subjectToolView;
- (void).cxx_destruct;
- (void)showWithPhotos:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didTapTableView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)longPressed:(id)arg1 imageModel:(id)arg2 longPress:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)deletedImage:(id)arg1;
- (void)insertImages:(id)arg1;
- (void)positionToNextItemAtIndexPath:(id)arg1;
- (void)positionToPreItemAtIndexPath:(id)arg1;
- (void)positionAtIndexForText:(id)arg1;
- (void)positionAtIndex:(id)arg1;
- (void)ttq_textViewDidSeletedDeletedToParagraphHeader:(id)arg1 indexPath:(id)arg2 textModel:(id)arg3;
- (void)ttq_textViewDidCancelDeletedToParagraphHeader:(id)arg1 indexPath:(id)arg2 textModel:(id)arg3;
- (void)ttq_textViewDeletedToParagraphHeader:(id)arg1 textView:(id)arg2 indexPath:(id)arg3 textModel:(id)arg4;
- (void)ttq_textViewChangeInputView:(id)arg1 inputMode:(long long)arg2;
- (void)ttq_textViewEditing:(id)arg1 textView:(id)arg2 indexPath:(id)arg3 textModel:(id)arg4;
- (void)textViewDidEndEditing:(id)arg1 textModel:(id)arg2;
- (_Bool)ttq_textViewLongPress:(id)arg1 imageModel:(id)arg2 longPress:(id)arg3;
- (void)ttq_textViewSeleted:(id)arg1 imageCell:(id)arg2 imageModel:(id)arg3;
- (_Bool)ttq_textViewDeletedImage:(id)arg1;
- (_Bool)ttq_textViewIsEmoji:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1 textModel:(id)arg2;
- (void)ttq_textViewDidBeginEditing:(id)arg1 textModel:(id)arg2;
- (_Bool)ttq_textViewShouldBeginEditing:(id)arg1 textModel:(id)arg2;
- (_Bool)ttq_textViewShouldStatus:(id)arg1 imageModel:(id)arg2 status:(long long)arg3;
- (_Bool)ttq_textViewShouldChange:(id)arg1 textModel:(id)arg2;
- (id)ttq_placeholderForCell:(id)arg1 indexPath:(id)arg2 textModel:(id)arg3;
- (void)takeImage;
- (id)validTextViewForImageCell;
- (id)nethermostTextView;
- (id)validTextView;
- (id)validDataSources;
- (void)showWaterMark;
- (void)animateWithDuration:(double)arg1;
- (void)scrollToSujectViewAnimation:(_Bool)arg1;
- (void)scrollToVoteViewAnimation:(_Bool)arg1;
- (void)changeContentTextViewInput:(id)arg1;
- (void)addKeyboardShowOrHidenNotification;
- (_Bool)isShowVote;
- (void)setBottomToolViewState:(long long)arg1;
- (void)removeSubjectToolViewWith:(_Bool)arg1;
- (void)addSubjectToolViewWith:(_Bool)arg1;
- (void)removeVoteViewWith:(_Bool)arg1;
- (void)addVoteViewWith:(_Bool)arg1;
- (void)remakeFooterConstraints:(_Bool)arg1;
- (void)setupContent;
- (void)resetFooterViewPisition:(_Bool)arg1;
- (void)setupTableFooter;
- (void)setupTableHeader;
- (void)setupBottomToolView;
- (id)hotTopicItem;
- (id)anonymityItem;
- (id)voteItem;
- (id)cameraItem;
- (id)emotionItem;
- (void)setupTable;
- (void)setupView;
- (_Bool)hideNavBarBottomLine;
- (void)setupNavigationItem;
- (void)hidenProgressHUD;
- (void)richDidEndEditing;
- (_Bool)emojiInsertEnabled;
- (void)didDelEmojiView:(id)arg1;
- (void)didTouchEmojiView:(id)arg1 touchedEmoji:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)curSubjectName;
- (id)contentWarningForImages;
- (id)contentWarning;
- (id)titleWarning;
- (id)titleForContentCountLabel;
- (id)titleForTitleCountLabel;
- (id)topRightButtonTitle;
- (id)navigationItemTitle;
- (id)contentTextViewPlaceholder;
- (id)titleTextFieldPlaceholder;
- (void)imy_topRightButtonTouchupInside;
- (void)imy_topLeftButtonTouchupInside;
- (void)postWithImage:(long long)arg1;
- (_Bool)preparationToPost;
- (_Bool)loadDraftAction;
- (void)saveDraftAction:(_Bool)arg1;
- (void)deletedDraf;
- (id)pubishVoteTexts;
- (void)startSaveTimerForMedian;
- (void)startSaveTimer;
- (void)pauseSaveTimer;
- (void)invalidateSaveTimer;
- (void)endEditing;
- (void)goBackToPre;
- (void)goSucessorWithDeleteDraft;
- (void)goBackToPreWithDeleteDraft;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

