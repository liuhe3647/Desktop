//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class CADisplayLink, NSIndexPath, NSMutableArray, UILongPressGestureRecognizer, UIView;
@protocol TTQMovableTableViewDataSource, TTQMovableTableViewDelegate;

@interface TTQMovableTableView : UITableView
{
    CDUnknownBlockType _viewMovalbeCellBlock;
    CDUnknownBlockType _viewWarningMovalbeCellBlock;
    CDUnknownBlockType _viewAnimationWhenGestureBeganBlock;
    double _edgeScrollRange;
    long long _movableState;
    NSIndexPath *_selectedIndexPath;
    NSIndexPath *_firstSelectedIndexPath;
    UIView *_snapshotView;
    UIView *_warningView;
    NSMutableArray *_moveableDataSource;
    CADisplayLink *_edgeScrollTimer;
    UILongPressGestureRecognizer *_gesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) CADisplayLink *edgeScrollTimer; // @synthesize edgeScrollTimer=_edgeScrollTimer;
@property(retain, nonatomic) NSMutableArray *moveableDataSource; // @synthesize moveableDataSource=_moveableDataSource;
@property(retain, nonatomic) UIView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) NSIndexPath *firstSelectedIndexPath; // @synthesize firstSelectedIndexPath=_firstSelectedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) long long movableState; // @synthesize movableState=_movableState;
@property(nonatomic) double edgeScrollRange; // @synthesize edgeScrollRange=_edgeScrollRange;
@property(copy, nonatomic) CDUnknownBlockType viewAnimationWhenGestureBeganBlock; // @synthesize viewAnimationWhenGestureBeganBlock=_viewAnimationWhenGestureBeganBlock;
@property(copy, nonatomic) CDUnknownBlockType viewWarningMovalbeCellBlock; // @synthesize viewWarningMovalbeCellBlock=_viewWarningMovalbeCellBlock;
@property(copy, nonatomic) CDUnknownBlockType viewMovalbeCellBlock; // @synthesize viewMovalbeCellBlock=_viewMovalbeCellBlock;
- (void).cxx_destruct;
- (id)snapshotViewWithCell:(id)arg1;
- (void)stopEdgeScroll;
- (void)changeEdgeScroll;
- (void)startEdgeScroll;
- (void)updateDataSourceAndCellFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)gestureEndedOrCancelled:(id)arg1;
- (void)gestureChanged:(id)arg1;
- (void)gestureBegan:(id)arg1;
- (void)gesturePreparatoryBegan:(id)arg1;
- (void)longPressedProcessGesture:(id)arg1;
- (id)gestureForLongPress;
- (void)dealloc;
- (void)commontInit;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <TTQMovableTableViewDataSource> dataSource; // @dynamic dataSource;
@property(nonatomic) __weak id <TTQMovableTableViewDelegate> delegate; // @dynamic delegate;

@end

