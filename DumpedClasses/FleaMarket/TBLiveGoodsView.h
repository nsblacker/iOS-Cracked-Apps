//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBLiveShareMessage, UIButton, UIImageView, UILabel;

@interface TBLiveGoodsView : UIView
{
    _Bool _isAllowOpenMiniPlay;
    _Bool _isCollected;
    UIView *_skuParentView;
    UIImageView *_goodsImgView;
    UILabel *_goodsTitleLabel;
    UILabel *_goodsPriceLabel;
    UIButton *_goDetailBtn;
    TBLiveShareMessage *_msg;
}

+ (void)gotoItemDetail:(id)arg1 itemId:(id)arg2 target:(id)arg3;
@property(retain, nonatomic) TBLiveShareMessage *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool isCollected; // @synthesize isCollected=_isCollected;
@property(retain, nonatomic) UIButton *goDetailBtn; // @synthesize goDetailBtn=_goDetailBtn;
@property(retain, nonatomic) UILabel *goodsPriceLabel; // @synthesize goodsPriceLabel=_goodsPriceLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIImageView *goodsImgView; // @synthesize goodsImgView=_goodsImgView;
@property(nonatomic) __weak UIView *skuParentView; // @synthesize skuParentView=_skuParentView;
@property(nonatomic) _Bool isAllowOpenMiniPlay; // @synthesize isAllowOpenMiniPlay=_isAllowOpenMiniPlay;
- (void).cxx_destruct;
- (void)goDetailBtnClicked;
- (void)bindGoodsData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
