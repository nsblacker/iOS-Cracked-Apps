//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TXTBGridMenuViewDelegate.h"

@class NSArray, NSString, TXTBGridMenuView;

@interface TXTelFeeView : UIView <TXTBGridMenuViewDelegate>
{
    _Bool _hasStockOut;
    _Bool _themeSkinIsValid;
    TXTBGridMenuView *_telFeeGridView;
    long long _currentIndex;
    NSString *_czActivityDesc;
    NSArray *_defaultTelFeePackageList;
    NSArray *_telFeePackageList;
    long long _status;
    NSString *_phoneNum;
}

+ (id)GridItemClicked;
@property(nonatomic) _Bool themeSkinIsValid; // @synthesize themeSkinIsValid=_themeSkinIsValid;
@property(nonatomic) _Bool hasStockOut; // @synthesize hasStockOut=_hasStockOut;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *telFeePackageList; // @synthesize telFeePackageList=_telFeePackageList;
@property(copy, nonatomic) NSArray *defaultTelFeePackageList; // @synthesize defaultTelFeePackageList=_defaultTelFeePackageList;
@property(copy, nonatomic) NSString *czActivityDesc; // @synthesize czActivityDesc=_czActivityDesc;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) TXTBGridMenuView *telFeeGridView; // @synthesize telFeeGridView=_telFeeGridView;
- (void).cxx_destruct;
- (void)configTelFeeItemView:(id)arg1 gridMenuView:(id)arg2 ItemViewForRowAtIndex:(long long)arg3;
- (id)gridMenuView:(id)arg1 ItemViewForRowAtIndex:(long long)arg2;
- (unsigned long long)gridMenuViewNumberOfItems:(id)arg1;
- (void)hasStockOut:(id)arg1;
- (id)gridItemViewWithTag:(long long)arg1;
- (double)heightOfGridView:(id)arg1;
- (void)updateUI;
- (void)setupSubviews;
- (id)getItemModelForPrice:(id)arg1;
- (long long)indexOfPrice:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)defaultTelFeePackageListHasFace:(id)arg1;
- (void)setThemeSkin:(_Bool)arg1;
- (void)setTelFeePackageList:(id)arg1 selectedPrice:(id)arg2 phoneNum:(id)arg3 activityDesc:(id)arg4;
- (void)setTelFeePackageList:(id)arg1 selectedPrice:(id)arg2 phoneNum:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *GridItemClicked; // @dynamic GridItemClicked;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
