//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiRoute, NSDictionary, NSString;

@protocol DiMapNavigationDelegate <NSObject>

@optional
- (void)didChangeNaviStyle:(long long)arg1;
- (void)didReceiveAction:(int)arg1 withObject:(id)arg2;
- (void)userTrackingModeNone;
- (void)showRouteFinished;
- (void)userNavigationEnd:(_Bool)arg1;
- (void)userLocationErr:(NSString *)arg1;
- (void)returnTTSValue:(NSString *)arg1 voiceParam:(NSDictionary *)arg2;
- (void)returnTTSValue:(NSString *)arg1;
- (void)updateDiRouteResult:(DiRoute *)arg1;
@end
