//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWProviderDelegate-Protocol.h"
#import "SwipeViewDataSource-Protocol.h"
#import "SwipeViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class GWBaseInfoProvider, GWBigLabelModel, NSArray, NSString, SwipeView;
@protocol GWAppTypeDelegate, GWPostWalaDelegate;

@interface GWAddRelationshipView : UIView <GWProviderDelegate, UIViewControllerTransitioningDelegate, SwipeViewDataSource, SwipeViewDelegate>
{
    int _showType;
    SwipeView *_swipeView;
    GWBigLabelModel *_currentBigLabelModel;
    unsigned long long _type;
    CDUnknownBlockType _startSearchBlock;
    CDUnknownBlockType _presentViewControllerBlock;
    CDUnknownBlockType _okBlock;
    NSArray *_dataArr;
    unsigned long long _currentMenuTag;
    id <GWPostWalaDelegate> _postWalaDelegate;
    id <GWAppTypeDelegate> _relatedInfo;
    NSString *_sourceType;
    NSString *_currentLabelId;
    GWBaseInfoProvider *_currentProvider;
    long long _currentSelectedSection;
    long long _currentSelectedIndex;
    UIView *_whiteView;
    UIView *_currentTopView;
}

@property(retain, nonatomic) UIView *currentTopView; // @synthesize currentTopView=_currentTopView;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) long long currentSelectedSection; // @synthesize currentSelectedSection=_currentSelectedSection;
@property(retain, nonatomic) GWBaseInfoProvider *currentProvider; // @synthesize currentProvider=_currentProvider;
@property(copy, nonatomic) NSString *currentLabelId; // @synthesize currentLabelId=_currentLabelId;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) id <GWAppTypeDelegate> relatedInfo; // @synthesize relatedInfo=_relatedInfo;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) __weak id <GWPostWalaDelegate> postWalaDelegate; // @synthesize postWalaDelegate=_postWalaDelegate;
@property unsigned long long currentMenuTag; // @synthesize currentMenuTag=_currentMenuTag;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(copy, nonatomic) CDUnknownBlockType presentViewControllerBlock; // @synthesize presentViewControllerBlock=_presentViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType startSearchBlock; // @synthesize startSearchBlock=_startSearchBlock;
@property unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) GWBigLabelModel *currentBigLabelModel; // @synthesize currentBigLabelModel=_currentBigLabelModel;
@property(retain, nonatomic) SwipeView *swipeView; // @synthesize swipeView=_swipeView;
- (void).cxx_destruct;
- (void)jumpToWalaViewController:(id)arg1 withImage:(id)arg2 withImageUrl:(id)arg3;
- (void)jumpToWalaViewController:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)okButtonClicked;
- (void)searchTapGestureClick;
- (void)hideAction;
- (void)remove;
- (void)updateViewWithModelForBigLabelRelatedProvider:(id)arg1;
- (_Bool)isEequalRelatedInfo:(id)arg1;
- (void)loadBigLabelRelatedData;
- (void)loadData;
- (void)startAnimation;
- (void)hideActionTop:(double)arg1;
- (void)startAnimationTop:(double)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPithyFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
