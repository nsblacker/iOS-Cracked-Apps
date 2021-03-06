//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMCCInfo, ColorRingCollectionInfo, ColorRingInfo, NSString;

@interface ColorRingDataBLL : NSObject
{
    _Bool _isOpenColorRing;
    _Bool _isMonthlyOpen;
    _Bool _isMonthlyAvailable;
    _Bool _isMobileMonthlyOpen;
    CMCCInfo *_cmccInfo;
    ColorRingCollectionInfo *_personalRingList;
    ColorRingCollectionInfo *_unicomMonthlyPersonalRingList;
    long long _currentColorRingType;
    ColorRingInfo *_currentUsedRing;
    unsigned long long _isGetPersonalColorRingSuccess;
    NSString *_token;
    NSString *_mValidCode;
    NSString *_mValidCode_H5;
    ColorRingInfo *_currentPlayRing;
    NSString *_phno;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *phno; // @synthesize phno=_phno;
@property(retain, nonatomic) ColorRingInfo *currentPlayRing; // @synthesize currentPlayRing=_currentPlayRing;
@property(nonatomic) _Bool isMobileMonthlyOpen; // @synthesize isMobileMonthlyOpen=_isMobileMonthlyOpen;
@property(retain, nonatomic) NSString *mValidCode_H5; // @synthesize mValidCode_H5=_mValidCode_H5;
@property(retain, nonatomic) NSString *mValidCode; // @synthesize mValidCode=_mValidCode;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool isMonthlyAvailable; // @synthesize isMonthlyAvailable=_isMonthlyAvailable;
@property(nonatomic) _Bool isMonthlyOpen; // @synthesize isMonthlyOpen=_isMonthlyOpen;
@property(nonatomic) unsigned long long isGetPersonalColorRingSuccess; // @synthesize isGetPersonalColorRingSuccess=_isGetPersonalColorRingSuccess;
@property(nonatomic) _Bool isOpenColorRing; // @synthesize isOpenColorRing=_isOpenColorRing;
@property(retain, nonatomic) ColorRingInfo *currentUsedRing; // @synthesize currentUsedRing=_currentUsedRing;
@property(nonatomic) long long currentColorRingType; // @synthesize currentColorRingType=_currentColorRingType;
@property(retain, nonatomic) ColorRingCollectionInfo *unicomMonthlyPersonalRingList; // @synthesize unicomMonthlyPersonalRingList=_unicomMonthlyPersonalRingList;
@property(retain, nonatomic) ColorRingCollectionInfo *personalRingList; // @synthesize personalRingList=_personalRingList;
@property(retain, nonatomic) CMCCInfo *cmccInfo; // @synthesize cmccInfo=_cmccInfo;
- (void).cxx_destruct;
- (void)cleanData;
- (long long)getCurrentOperatorType;
- (_Bool)phoneNumberIsLegalWithPhoneNumber:(id)arg1;
- (void)updatePersonalRingListInfoWithType:(long long)arg1 CompleteBlock:(CDUnknownBlockType)arg2;
- (void)updateCurrentPhoneNumberWithNumber:(id)arg1;
- (void)initCurrentPhoneNumber;
@property(retain, nonatomic) NSString *currentPhoneNumber; // @dynamic currentPhoneNumber;

@end

