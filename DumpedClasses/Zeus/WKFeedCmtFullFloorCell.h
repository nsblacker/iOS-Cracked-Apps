//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKFeedCmtConentCell.h"

#import "WKFeedCmtFloorViewDelegate-Protocol.h"
#import "WKFeedCmtUnFoldBtnViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WKFeedCmtFloorView, WKFeedCmtUnFoldBtnView;

@interface WKFeedCmtFullFloorCell : WKFeedCmtConentCell <WKFeedCmtUnFoldBtnViewDelegate, WKFeedCmtFloorViewDelegate>
{
    WKFeedCmtUnFoldBtnView *_unFoldBtnView;
    WKFeedCmtFloorView *_unFoldFloorView;
    NSMutableArray *_UpFloorArr;
    NSMutableArray *_cmtFloorArr;
}

@property(retain, nonatomic) NSMutableArray *cmtFloorArr; // @synthesize cmtFloorArr=_cmtFloorArr;
@property(retain, nonatomic) NSMutableArray *UpFloorArr; // @synthesize UpFloorArr=_UpFloorArr;
@property(nonatomic) __weak WKFeedCmtFloorView *unFoldFloorView; // @synthesize unFoldFloorView=_unFoldFloorView;
@property(nonatomic) __weak WKFeedCmtUnFoldBtnView *unFoldBtnView; // @synthesize unFoldBtnView=_unFoldBtnView;
- (void).cxx_destruct;
- (void)WKFeedCmtFloorViewCmtMoreTextViewClick:(id)arg1;
- (void)WKFeedCmtFloorViewCmtLabelClick:(id)arg1;
- (void)WKFeedCmtUnFoldBtnViewUnFoldClick;
- (void)updateBeforeUnHiddenNowUnHiddenWithArr:(id)arg1;
- (void)setCmtModelArr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

