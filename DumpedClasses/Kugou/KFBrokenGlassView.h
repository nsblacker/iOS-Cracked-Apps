//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSMutableArray, UIDynamicAnimator, UIGravityBehavior, UIImage;

@interface KFBrokenGlassView : UIImageView
{
    unsigned long long _breakType;
    CDUnknownBlockType _completion;
    NSMutableArray *_breakViews;
    UIDynamicAnimator *_animator;
    UIGravityBehavior *_gravityBehaviour;
    NSMutableArray *_numberArray;
    NSMutableArray *_masksImageArray;
    NSMutableArray *_masksTypeArray;
    UIImage *_maskIamge;
    long long _rowCount;
    long long _columnCount;
    long long _lastCount;
    long long _minCount;
    long long _maxCount;
}

@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long minCount; // @synthesize minCount=_minCount;
@property(nonatomic) long long lastCount; // @synthesize lastCount=_lastCount;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) UIImage *maskIamge; // @synthesize maskIamge=_maskIamge;
@property(retain, nonatomic) NSMutableArray *masksTypeArray; // @synthesize masksTypeArray=_masksTypeArray;
@property(retain, nonatomic) NSMutableArray *masksImageArray; // @synthesize masksImageArray=_masksImageArray;
@property(retain, nonatomic) NSMutableArray *numberArray; // @synthesize numberArray=_numberArray;
@property(retain, nonatomic) UIGravityBehavior *gravityBehaviour; // @synthesize gravityBehaviour=_gravityBehaviour;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NSMutableArray *breakViews; // @synthesize breakViews=_breakViews;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long breakType; // @synthesize breakType=_breakType;
- (void).cxx_destruct;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (void)viewAnimateWithView:(id)arg1 isLast:(_Bool)arg2 countIndex:(long long)arg3;
- (void)gravityBeginWithNumber:(long long)arg1;
- (id)getImageWithView:(id)arg1 FromRect:(struct CGRect)arg2;
- (void)startBreakAtView:(id)arg1;
- (void)startBreak;
- (void)congfigMasksImage;
- (id)init;

@end

