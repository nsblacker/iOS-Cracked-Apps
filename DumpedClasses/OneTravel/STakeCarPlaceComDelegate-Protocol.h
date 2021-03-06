//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComProtocol.h"
#import "SHomeBubbleDelegate.h"
#import "SHomeLocationDelegate.h"

@class DiDiPOIEntityModel, NSString, ONESBaseMapEntrance, SBaseComponent;

@protocol STakeCarPlaceComDelegate <SBaseComProtocol, SHomeBubbleDelegate, SHomeLocationDelegate>
- (void)stopTakeCarPlaceWithComponent:(SBaseComponent *)arg1;
- (void)startTakeCarPlaceWithComponent:(SBaseComponent *)arg1;
- (void)takeCarPlaceBusinessCom:(SBaseComponent *)arg1 reverseGeoFinished:(DiDiPOIEntityModel *)arg2 cityId:(NSString *)arg3 cityName:(NSString *)arg4;
- (void)takeCarPlaceBusinessCom:(SBaseComponent *)arg1 reverseGeoFailure:(struct CLLocationCoordinate2D)arg2;
- (void)takeCarPlaceBusinessCom:(SBaseComponent *)arg1 reverseGeoStarted:(struct CLLocationCoordinate2D)arg2;
- (void)takeCarPlaceBusinessCom:(SBaseComponent *)arg1 positionDidChange:(DiDiPOIEntityModel *)arg2;
- (_Bool)takeCarPlaceComIsBusinessSelect:(SBaseComponent *)arg1;
- (void)takeCarPlaceBusinessTapXPositionAnnotationBubble:(SBaseComponent *)arg1;
- (double)takeCarPlaceBusinessComMapVisibleOffsetY:(SBaseComponent *)arg1;
- (void)takeCarPlaceBusinessPositionWillChange:(SBaseComponent *)arg1;
- (ONESBaseMapEntrance *)mapEntranceForComponent:(SBaseComponent *)arg1;
@end

