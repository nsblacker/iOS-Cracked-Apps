//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTGuideProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, TTInterestGuideHeaderView, TTInterestGuideViewModel, TTTagView;

@interface TTInterestGuideView : SSThemedView <UIGestureRecognizerDelegate, TTGuideProtocol>
{
    SSThemedView *_maskView;
    SSThemedView *_bgView;
    TTInterestGuideHeaderView *_headerView;
    TTTagView *_tagView;
    TTInterestGuideViewModel *_viewModel;
}

+ (_Bool)hasShownIntrestGuideView;
+ (void)saveIntrestGuideViewInfo;
@property(retain, nonatomic) TTInterestGuideViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TTTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) TTInterestGuideHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SSThemedView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SSThemedView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(retain, nonatomic) id context;
- (void)showWithContext:(id)arg1;
- (_Bool)shouldDisplay:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dismissGuideView;
- (void)showGuideViewWithSuperView:(id)arg1;
- (void)setupCornerRadius;
- (void)uploadGuideScrollEnable;
- (id)interestGuideWords;
- (void)updateTagView;
- (void)setupBottomMaskView;
- (void)setupTagView;
- (void)setupHeaderView;
- (void)bindTapGesture;
- (void)setupBgView;
- (void)setupBgMaskView;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

