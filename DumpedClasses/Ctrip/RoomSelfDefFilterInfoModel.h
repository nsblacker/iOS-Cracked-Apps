//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface RoomSelfDefFilterInfoModel : CTBusinessBean
{
    int _type;
    NSString *_name;
    NSString *_signCode;
    long long _queryBit;
}

@property(nonatomic) long long queryBit; // @synthesize queryBit=_queryBit;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *signCode; // @synthesize signCode=_signCode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

