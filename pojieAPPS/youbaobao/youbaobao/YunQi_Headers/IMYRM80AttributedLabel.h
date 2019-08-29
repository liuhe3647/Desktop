//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMYRM80AttributedLabelURL, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSRecursiveLock, NSString, UIColor, UIFont, UILongPressGestureRecognizer;
@protocol IMYRM80AttributedLabelDelegate;

@interface IMYRM80AttributedLabel : UIView <UIGestureRecognizerDelegate>
{
    struct __CTFrame *_textFrame;
    double _fontAscent;
    double _fontDescent;
    double _fontHeight;
    long long _linesCount;
    _Bool _isShowAllText;
    _Bool hasLongPressed;
    _Bool _shouldCancleContinueTriggereClick;
    _Bool _underLineForLink;
    _Bool _autoDetectLinks;
    unsigned char _textAlignment;
    unsigned char _lineBreakMode;
    _Bool _drawCenter;
    _Bool _shouldLongPress;
    _Bool _newStyle;
    _Bool _isTouchPressedInside;
    _Bool _samelineSpacing;
    _Bool _linkDetected;
    id <IMYRM80AttributedLabelDelegate> _delegate;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_highlightColor;
    UIColor *_linkColor;
    long long _numberOfLines;
    double _lineSpacing;
    double _paragraphSpacing;
    double _wordSpacing;
    NSAttributedString *_truncationAttributedString;
    id _truncationLinkData;
    NSAttributedString *_showAttributedString;
    NSMutableArray *_attachments;
    NSMutableArray *_linkLocations;
    NSMutableAttributedString *_attributedString;
    IMYRM80AttributedLabelURL *_touchedLink;
    NSMutableArray *_touchedViewFrameArray;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSRecursiveLock *_recursiveLock;
    double _minlineSpacing;
    IMYRM80AttributedLabelURL *_truncationURL;
    struct CGRect _willSetFrame;
    struct CGRect _willSetBounds;
}

+ (void)setCustomDetectMethod:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) IMYRM80AttributedLabelURL *truncationURL; // @synthesize truncationURL=_truncationURL;
@property(nonatomic) double minlineSpacing; // @synthesize minlineSpacing=_minlineSpacing;
@property(nonatomic) struct CGRect willSetBounds; // @synthesize willSetBounds=_willSetBounds;
@property(nonatomic) struct CGRect willSetFrame; // @synthesize willSetFrame=_willSetFrame;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) _Bool linkDetected; // @synthesize linkDetected=_linkDetected;
@property(retain, nonatomic) NSMutableArray *touchedViewFrameArray; // @synthesize touchedViewFrameArray=_touchedViewFrameArray;
@property(retain, nonatomic) IMYRM80AttributedLabelURL *touchedLink; // @synthesize touchedLink=_touchedLink;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) _Bool samelineSpacing; // @synthesize samelineSpacing=_samelineSpacing;
@property(retain, nonatomic) NSMutableArray *linkLocations; // @synthesize linkLocations=_linkLocations;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSAttributedString *showAttributedString; // @synthesize showAttributedString=_showAttributedString;
@property _Bool isTouchPressedInside; // @synthesize isTouchPressedInside=_isTouchPressedInside;
@property(retain, nonatomic) id truncationLinkData; // @synthesize truncationLinkData=_truncationLinkData;
@property(copy, nonatomic) NSAttributedString *truncationAttributedString; // @synthesize truncationAttributedString=_truncationAttributedString;
@property(nonatomic) _Bool newStyle; // @synthesize newStyle=_newStyle;
@property(nonatomic) _Bool shouldLongPress; // @synthesize shouldLongPress=_shouldLongPress;
@property(nonatomic) _Bool drawCenter; // @synthesize drawCenter=_drawCenter;
@property(nonatomic) double wordSpacing; // @synthesize wordSpacing=_wordSpacing;
@property(nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool autoDetectLinks; // @synthesize autoDetectLinks=_autoDetectLinks;
@property(nonatomic) _Bool underLineForLink; // @synthesize underLineForLink=_underLineForLink;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool shouldCancleContinueTriggereClick; // @synthesize shouldCancleContinueTriggereClick=_shouldCancleContinueTriggereClick;
@property(nonatomic) __weak id <IMYRM80AttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getBuildAttributedString;
- (void)resetLongPressedStatus;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addAutoDetectedLink:(id)arg1;
- (void)computeLink:(id)arg1 sync:(_Bool)arg2;
- (void)recomputeLinksIfNeeded;
- (void)drawAttachments:(id)arg1 frame:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawAttachments;
- (void)drawText:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawHighlightWithRect:(struct CGRect)arg1;
- (void)prepareTextFrame:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawExtraContentInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (long long)getLinesCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2 linkColor:(id)arg3;
- (id)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)appendUIBlock:(id)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(int)arg3;
- (void)appendUIBlock:(id)arg1 margin:(struct UIEdgeInsets)arg2;
- (void)appendUIBlock:(id)arg1;
- (void)appendAttributedText:(id)arg1;
- (void)appendText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)appendAttachment:(id)arg1;
- (struct CGRect)rectForRange:(struct _NSRange)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3;
- (id)linkAtIndex:(long long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformForCoreText;
- (id)linkDataForPoint:(struct CGPoint)arg1;
- (_Bool)viewFrameForPoint:(struct CGPoint)arg1;
- (id)urlForPoint:(struct CGPoint)arg1;
- (void)fillURLFrames;
- (id)attributedStringForDraw;
- (long long)numberOfDisplayedLines;
- (id)attributedString:(id)arg1;
- (void)setNeedsDisplay;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetFont;
- (void)resetTextFrame;
- (void)cleanAll;
- (void)longPress:(id)arg1;
- (void)commonInit;
@property(readonly, nonatomic) struct __CTFrame *textFrame;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTopicDetailTitleForCellWith:(id)arg1 tagArray:(id)arg2;
- (void)setTopicDetailTitleWith:(id)arg1 tagArray:(id)arg2;
- (void)imyr_appendTagsWith:(id)arg1 lastRightMargin:(double)arg2;
- (void)imyr_appendTagsWith:(id)arg1;
- (void)setQuoteCellWithCommentModel:(id)arg1 topicUserID:(unsigned long long)arg2 referencedID:(long long)arg3 extraCacheKey:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
