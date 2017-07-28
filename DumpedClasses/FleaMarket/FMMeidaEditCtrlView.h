//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface FMMeidaEditCtrlView : UIView
{
    UIButton *_beautyButton;
    UIButton *_backButton;
    UIButton *_deleteButton;
    UIButton *_finishButton;
    _Bool _beautified;
    int _pickType;
    int _sourceType;
    id <FMMeidaEditCtrlViewDelegate> _delegate;
}

@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool beautified; // @synthesize beautified=_beautified;
@property(nonatomic) int pickType; // @synthesize pickType=_pickType;
@property(nonatomic) id <FMMeidaEditCtrlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enableBeauty:(id)arg1;
- (void)finishEdit;
- (void)backAction;
- (void)onDeleteImageAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end
