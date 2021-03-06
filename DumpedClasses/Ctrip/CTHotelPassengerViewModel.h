//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPassengerModel, CTRootViewController, NSArray;

@interface CTHotelPassengerViewModel : NSObject
{
    _Bool _isSelected;
    _Bool _isShowWarning;
    _Bool _isAvailable;
    _Bool _isEdit;
    CTPassengerModel *_passenger;
    NSArray *_supportCardList;
    CTRootViewController *_rvc;
}

+ (id)newNode:(id)arg1;
+ (id)modelToModel:(id)arg1;
+ (id)changeModel:(id)arg1;
+ (id)isCompleteInfo:(id)arg1 supportList:(id)arg2;
+ (_Bool)bFindCompleteInfo:(id)arg1 card:(id)arg2;
+ (id)passenger:(id)arg1 isSel:(_Bool)arg2 supportCards:(id)arg3;
@property(nonatomic) __weak CTRootViewController *rvc; // @synthesize rvc=_rvc;
@property(retain, nonatomic) NSArray *supportCardList; // @synthesize supportCardList=_supportCardList;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) _Bool isShowWarning; // @synthesize isShowWarning=_isShowWarning;
@property(retain, nonatomic) CTPassengerModel *passenger; // @synthesize passenger=_passenger;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (id)getModifyModel;
- (void)getpassegerswithReturnBlock:(CDUnknownBlockType)arg1 FailureBlock:(CDUnknownBlockType)arg2;
- (void)editorAddPassegerWithModel:(id)arg1 ReturnBlock:(CDUnknownBlockType)arg2 FailureBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

