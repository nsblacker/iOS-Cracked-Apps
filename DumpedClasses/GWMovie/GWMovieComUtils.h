//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GWMovieComUtils : NSObject
{
}

+ (void)setRememberPassword:(_Bool)arg1;
+ (_Bool)isRememberPassword;
+ (id)readGWLoginInfo;
+ (id)readOpenMemberLoginInfo;
+ (void)saveLastLoginInfo:(id)arg1;
+ (id)readLastLoginInfo;
+ (id)provinceArrayByResponseString:(id)arg1;
+ (id)getWPCityArray;
+ (void)saveWPCitysWithResponse:(id)arg1;
+ (id)getGWCityCodeWithProvinceArray:(id)arg1 wpMovieCityID:(id)arg2;
+ (id)getWPShowCityArray;
+ (void)saveWPShowCitysWithResponse:(id)arg1;
+ (id)cityByWPCityID:(id)arg1;
+ (id)getCityCodeByWPCityID:(id)arg1;
+ (id)getCityNameByCityCode:(id)arg1;
+ (id)getLocalProvinceAndCity;
+ (id)shanghai;
+ (id)readLastSelectCity;
+ (void)saveLastSelectedCity:(id)arg1;
+ (id)appRateUrl;

@end

