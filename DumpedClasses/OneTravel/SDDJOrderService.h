//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SDDJGiftBagModel, SDDJOrderModel, SDDJShareLogic;

@interface SDDJOrderService : NSObject
{
    _Bool _isGrabbingToastHold;
    long long _homeEta;
    double _pickupDistance;
    long long _etaTime;
    NSString *_grabbingToast;
    long long _refundStatus;
    SDDJGiftBagModel *_giftBagModel;
    long long _star;
    unsigned long long _payState;
    SDDJShareLogic *_shareLogic;
    struct CLLocationCoordinate2D _lastDriverLoc;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SDDJShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(nonatomic) unsigned long long payState; // @synthesize payState=_payState;
@property(nonatomic) long long star; // @synthesize star=_star;
@property(retain, nonatomic) SDDJGiftBagModel *giftBagModel; // @synthesize giftBagModel=_giftBagModel;
@property(nonatomic) long long refundStatus; // @synthesize refundStatus=_refundStatus;
@property(copy, nonatomic) NSString *grabbingToast; // @synthesize grabbingToast=_grabbingToast;
@property(nonatomic) _Bool isGrabbingToastHold; // @synthesize isGrabbingToastHold=_isGrabbingToastHold;
@property(nonatomic) struct CLLocationCoordinate2D lastDriverLoc; // @synthesize lastDriverLoc=_lastDriverLoc;
@property(nonatomic) long long etaTime; // @synthesize etaTime=_etaTime;
@property(nonatomic) double pickupDistance; // @synthesize pickupDistance=_pickupDistance;
@property(nonatomic) long long homeEta; // @synthesize homeEta=_homeEta;
- (void).cxx_destruct;
- (void)clearData;
- (void)stopPollOrderState;
- (void)startPollOrderState;
@property(readonly, nonatomic) SDDJOrderModel *curOrderModel;
- (id)init;

@end
