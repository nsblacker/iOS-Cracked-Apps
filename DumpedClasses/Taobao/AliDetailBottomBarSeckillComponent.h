//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBDetailUIButton.h"

#import "AliDetailBottomBarItemProtocol.h"
#import "TBSeckillOrderDelegate.h"

@class AliDetailBottomBarSeckillModel, NSString, NSTimer, TBSeckillContext;

@interface AliDetailBottomBarSeckillComponent : TBDetailUIButton <AliDetailBottomBarItemProtocol, TBSeckillOrderDelegate>
{
    _Bool _hasAddObserver;
    AliDetailBottomBarSeckillModel *_itemModel;
    TBSeckillContext *_seckillContext;
}

@property(retain, nonatomic) TBSeckillContext *seckillContext; // @synthesize seckillContext=_seckillContext;
@property(retain, nonatomic) AliDetailBottomBarSeckillModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (id)businessModel:(id)arg1;
- (void)clickSeckillButton:(id)arg1;
- (void)setSeckillStatus:(unsigned long long)arg1;
- (unsigned long long)getSeckillState;
- (void)seckillTimerLoop:(id)arg1;
- (void)checkSeckillButtonStatus;
- (void)registerObserver;
@property(retain, nonatomic) NSTimer *seckillTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)goQuestionVC:(id)arg1;
- (void)showToast:(id)arg1;
- (void)seckillSucceed:(id)arg1;
- (void)setContentStyle;
- (void)setToolItemModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
