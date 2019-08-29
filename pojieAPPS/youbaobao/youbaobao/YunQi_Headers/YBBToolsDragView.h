//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTouchEXView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, RACSubject, UIPanGestureRecognizer;

@interface YBBToolsDragView : IMYTouchEXView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_dragPan;
    long long _dragDirection;
    CDUnknownBlockType _marginBlock;
    RACSubject *_subject;
    struct CGPoint _lastPoint;
    struct CGPoint _lastCenter;
    struct UIEdgeInsets _marginEdgeInsets;
    struct CGRect _dragRect;
}

@property(retain, nonatomic) RACSubject *subject; // @synthesize subject=_subject;
@property(nonatomic) struct CGPoint lastCenter; // @synthesize lastCenter=_lastCenter;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(copy, nonatomic) CDUnknownBlockType marginBlock; // @synthesize marginBlock=_marginBlock;
@property(nonatomic) struct CGRect dragRect; // @synthesize dragRect=_dragRect;
@property(nonatomic) struct UIEdgeInsets marginEdgeInsets; // @synthesize marginEdgeInsets=_marginEdgeInsets;
@property(nonatomic) long long dragDirection; // @synthesize dragDirection=_dragDirection;
@property(retain, nonatomic) UIPanGestureRecognizer *dragPan; // @synthesize dragPan=_dragPan;
- (void).cxx_destruct;
- (id)endSignal;
- (void)endDrag;
- (void)draging:(struct CGPoint)arg1;
- (void)begindDrag;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)panAction:(id)arg1;
- (void)addDragFollowFinger;
- (void)removeFollowGesture;
- (void)addDragFollow:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

