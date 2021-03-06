//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

#import "QXArrowAnimateViewDelegate-Protocol.h"
#import "QXDragDismissVCProtocol-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, QXArrowAnimateView, UIScrollView, UIView;

@interface QXDragDismissVC : QiXiuBaseVC <QXArrowAnimateViewDelegate, QXDragDismissVCProtocol>
{
    UIView *_lineView;
    UIScrollView *_baseScrollView;
    QXArrowAnimateView *_portraitArrowView;
    QXArrowAnimateView *_landscapeArrowView;
    NSLayoutConstraint *_contentViewRightConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_bgViewTopConstraint;
    NSLayoutConstraint *_bgViewLeftConstraint;
    NSLayoutConstraint *_bgViewRightConstraint;
    NSMutableArray *_portraitConstraints;
    NSMutableArray *_landscapeConstraints;
    NSMutableArray *_verticalScrollViews;
    NSMutableArray *_horizontalScrollViews;
    UIView *_bgView;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (double)dismissThresholdValue;
- (double)portraitVerticalScale;
- (double)landscapeHorizontalScale;
- (double)_deviceWidth;
- (double)_landscapeHorizontalWidth;
- (double)_deviceHeight;
- (double)_portraitVerticalHeight;
- (id)landscapeConstraints;
- (id)portraitConstraints;
- (void)addConstraintsToHorizontal:(id)arg1;
- (void)addConstraintsToVertical:(id)arg1;
- (void)toBack;
- (void)dismiss;
- (void)show;
- (void)showFromVC:(id)arg1;
- (void)detectScrollViewDidEndDecelerating:(id)arg1;
- (void)handleLandscapeScroll:(id)arg1;
- (void)handlePortraitScroll:(id)arg1;
- (void)handleScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addHorizontalScrollView:(id)arg1;
- (void)addVerticalScrollView:(id)arg1;
- (void)arrowAnimateViewDidTrigger:(id)arg1;
- (void)addConstraintWithIsPortrait:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)qx_initSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)isPortrait;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

