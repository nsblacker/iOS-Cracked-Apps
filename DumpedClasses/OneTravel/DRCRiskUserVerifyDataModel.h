//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseModel.h"

@class NSArray<DRCRiskStatusModel><Optional>, NSString;

@interface DRCRiskUserVerifyDataModel : DRCBaseModel
{
    _Bool _isFirstVerify;
    _Bool _isIdcardValid;
    int _nextRuleCode;
    int _zhimaAuthorizeType;
    NSString *_name;
    NSString *_identityCode;
    NSString *_riskMsg;
    NSArray<DRCRiskStatusModel><Optional> *_verifySteps;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) int zhimaAuthorizeType; // @synthesize zhimaAuthorizeType=_zhimaAuthorizeType;
@property(copy, nonatomic) NSArray<DRCRiskStatusModel><Optional> *verifySteps; // @synthesize verifySteps=_verifySteps;
@property(nonatomic) _Bool isIdcardValid; // @synthesize isIdcardValid=_isIdcardValid;
@property(nonatomic) _Bool isFirstVerify; // @synthesize isFirstVerify=_isFirstVerify;
@property(copy, nonatomic) NSString *riskMsg; // @synthesize riskMsg=_riskMsg;
@property(nonatomic) int nextRuleCode; // @synthesize nextRuleCode=_nextRuleCode;
@property(copy, nonatomic) NSString *identityCode; // @synthesize identityCode=_identityCode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

