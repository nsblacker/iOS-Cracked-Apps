//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBSearchBaseCellContainer.h"
#import "TBSearchInshopPromotionTipsDelegate.h"
#import "TBXSearchCollectionViewComponentDelegate.h"
#import "TBXSearchSortbarComponentDelegate.h"

@class NSString, TBModelStatusHandler, TBSearchInshopPromotionTips, TBXSearchCollectionViewComponent, TBXSearchLoadingView, TBXSearchService, TBXSearchSortbarComponent, UIButton, UILabel, UIView;

@interface TBXSearchShopViewController : UIViewController <TBXSearchSortbarComponentDelegate, TBXSearchCollectionViewComponentDelegate, TBSearchBaseCellContainer, TBSearchInshopPromotionTipsDelegate>
{
    _Bool _isInShopSRP;
    _Bool _userLayoutStyle;
    _Bool _first;
    _Bool _ErrorOrEmpty;
    _Bool _needSendScrollDelegate;
    int _layoutStyle;
    id <TBXSearchShopViewControllerDelegate> _delegate;
    id <TBXSearchShopSearchBusinessDelegate> _businessDelegate;
    TBXSearchCollectionViewComponent *_collectionViewComponent;
    TBXSearchSortbarComponent *_sortbarComponent;
    TBXSearchService *_itemSearchService;
    TBXSearchLoadingView *_shopLoadingView;
    UIView *_ErrorOrEmptyView;
    TBModelStatusHandler *_failStatusHandlerNoBtn;
    TBModelStatusHandler *_failStatusHandlerHasBtn;
    UIButton *_toTop;
    UIButton *_toTopCount;
    UILabel *_lastCount;
    UILabel *_totalCount;
    UIButton *_gotoCart;
    UIButton *_reviewButton;
    TBSearchInshopPromotionTips *_inshopPromotionTips;
}

@property(retain, nonatomic) TBSearchInshopPromotionTips *inshopPromotionTips; // @synthesize inshopPromotionTips=_inshopPromotionTips;
@property(retain, nonatomic) UIButton *reviewButton; // @synthesize reviewButton=_reviewButton;
@property(retain, nonatomic) UIButton *gotoCart; // @synthesize gotoCart=_gotoCart;
@property(retain, nonatomic) UILabel *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) UILabel *lastCount; // @synthesize lastCount=_lastCount;
@property(retain, nonatomic) UIButton *toTopCount; // @synthesize toTopCount=_toTopCount;
@property(retain, nonatomic) UIButton *toTop; // @synthesize toTop=_toTop;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandlerHasBtn; // @synthesize failStatusHandlerHasBtn=_failStatusHandlerHasBtn;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandlerNoBtn; // @synthesize failStatusHandlerNoBtn=_failStatusHandlerNoBtn;
@property(nonatomic) _Bool needSendScrollDelegate; // @synthesize needSendScrollDelegate=_needSendScrollDelegate;
@property(retain, nonatomic) UIView *ErrorOrEmptyView; // @synthesize ErrorOrEmptyView=_ErrorOrEmptyView;
@property(nonatomic) _Bool ErrorOrEmpty; // @synthesize ErrorOrEmpty=_ErrorOrEmpty;
@property(nonatomic) _Bool first; // @synthesize first=_first;
@property(retain, nonatomic) TBXSearchLoadingView *shopLoadingView; // @synthesize shopLoadingView=_shopLoadingView;
@property(nonatomic) _Bool userLayoutStyle; // @synthesize userLayoutStyle=_userLayoutStyle;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) TBXSearchService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
@property(retain, nonatomic) TBXSearchSortbarComponent *sortbarComponent; // @synthesize sortbarComponent=_sortbarComponent;
@property(retain, nonatomic) TBXSearchCollectionViewComponent *collectionViewComponent; // @synthesize collectionViewComponent=_collectionViewComponent;
@property(nonatomic) _Bool isInShopSRP; // @synthesize isInShopSRP=_isInShopSRP;
@property(nonatomic) __weak id <TBXSearchShopSearchBusinessDelegate> businessDelegate; // @synthesize businessDelegate=_businessDelegate;
@property(nonatomic) __weak id <TBXSearchShopViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fixToTopLayout:(double)arg1 animated:(_Bool)arg2;
- (void)inshopPromotionTipsDidDisAppear:(_Bool)arg1;
- (void)inshopPromotionTipsDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isOnTheScreen;
- (id)getUTFromForShop;
- (void)clickTopic:(id)arg1 withIndex:(long long)arg2;
- (void)clickInshopCompass:(id)arg1;
- (void)showChiTuLogoWhenReady;
- (void)removeExistMaskTagView;
- (void)turnStyle:(int)arg1;
- (void)sortbarForSearchBySortModel:(id)arg1;
- (void)passiveCloseSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)closeSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)openSortbarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)goToTopForInShopSRP;
- (void)searchAndUpdateSearchBarWithKeyword:(id)arg1;
- (double)getTop;
- (void)showEmptyView;
- (void)showErrorView:(id)arg1;
- (void)search;
- (void)refreshAgain;
- (void)cancel;
- (void)stopLoading;
- (void)startLoading;
- (struct CGRect)getStartLoadingFrame;
- (id)getIds;
- (void)openReviewPage:(id)arg1;
- (void)reloadData;
- (void)processLayoutStyle:(int)arg1;
- (void)contact;
- (void)expand;
- (void)goToCart;
- (void)goToTop;
- (void)childViewDidEndScroll:(id)arg1;
- (void)childViewWillBeginScroll:(id)arg1;
- (void)updateSortbarOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)getExtraParams;
- (void)needReloadSortBar;
- (id)getBucketId;
- (id)getCategory;
- (id)getSortOption;
- (void)resetSearchOption;
- (void)setSearchOption:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
