//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XYPHCountrySMSCode : NSObject
{
    NSString *_countryName;
    NSString *_areaCode;
    NSString *_pinyinName;
}

@property(copy, nonatomic) NSString *pinyinName; // @synthesize pinyinName=_pinyinName;
@property(copy, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
- (void).cxx_destruct;

@end
