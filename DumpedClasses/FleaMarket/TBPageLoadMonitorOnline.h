//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, UIViewController;

@interface TBPageLoadMonitorOnline : NSObject
{
    _Bool _isLaunchInvalidate;
    _Bool _isResignActive;
    _Bool _isAppLaunched;
    _Bool _isHadLayout;
    _Bool _isDisableSample;
    float _pageLoadExperienceValue;
    float _appLaunchExperienceValue;
    NSDate *_lastClickDate;
    UIViewController *_currentViewController;
    double _interval;
    NSString *_pageName;
    NSDate *_launchStartDate;
    NSDate *_launchEndDate;
}

@property(nonatomic) float appLaunchExperienceValue; // @synthesize appLaunchExperienceValue=_appLaunchExperienceValue;
@property(nonatomic) float pageLoadExperienceValue; // @synthesize pageLoadExperienceValue=_pageLoadExperienceValue;
@property(nonatomic) _Bool isDisableSample; // @synthesize isDisableSample=_isDisableSample;
@property(retain, nonatomic) NSDate *launchEndDate; // @synthesize launchEndDate=_launchEndDate;
@property(retain, nonatomic) NSDate *launchStartDate; // @synthesize launchStartDate=_launchStartDate;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool isHadLayout; // @synthesize isHadLayout=_isHadLayout;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSDate *lastClickDate; // @synthesize lastClickDate=_lastClickDate;
@property(nonatomic) _Bool isAppLaunched; // @synthesize isAppLaunched=_isAppLaunched;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isLaunchInvalidate; // @synthesize isLaunchInvalidate=_isLaunchInvalidate;
- (void).cxx_destruct;
- (void)uploadPerformanceData:(double)arg1 netRequestCost:(double)arg2;
- (void)launchPerformance;
- (void)generateExperienceValue;
- (id)getRealVC:(id)arg1;
- (id)devicePlatform;
- (void)userClick;
- (void)updateLoadPerformance:(id)arg1;
- (void)startTrace:(id)arg1 pageName:(id)arg2;
- (void)launchStart:(id)arg1;
- (id)init;

@end
