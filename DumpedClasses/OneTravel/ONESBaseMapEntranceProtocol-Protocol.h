//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSString, ONESBaseAnnotationView, ONESBasePlaceInfo, ONESBasePointAnnotation, ONESBaseRouteOverlay, ONESBaseRouteOverlayGroup, ONESBaseRouteResult, ONESBaseShape, ONESBaseTextAnnotation, ONESBaseUserLocation, ONESHeatTileOverlayBaseModel, UIView;

@protocol ONESBaseMapEntranceProtocol <NSObject>
@property(nonatomic) unsigned long long naviDayNightMode;
@property(nonatomic) struct UIEdgeInsets edgePaddingFor2DNorthOverView;
@property(nonatomic) _Bool forbidRecaculate;
@property(readonly, nonatomic) _Bool userLocationVisible;
@property(readonly, nonatomic) id <ONESBaseUserLocationViewProtocol> userLocationView;
@property(readonly, nonatomic) ONESBaseUserLocation *userLocation;
@property(nonatomic, getter=isCameraViewEnabled) _Bool cameraViewEnabled;
@property(readonly, nonatomic) _Bool mapIsNightStyle;
@property(nonatomic, getter=isRoadEnlargementViewEnabled) _Bool roadEnlargementViewEnabled;
@property(nonatomic, getter=isLaneViewEnabled) _Bool laneViewEnabled;
@property(nonatomic) _Bool keepCallout;
@property(readonly, nonatomic) NSArray *overlays;
@property(readonly, nonatomic) NSArray *annotations;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect;
@property(nonatomic) CDStruct_b7cb895d region;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property(nonatomic) double centerOffsetY;
@property(readonly, nonatomic) _Bool isNavigationing;
@property(readonly, nonatomic) _Bool isWalkNavigation;
@property(readonly, nonatomic) _Bool isNavigation;
@property(nonatomic) unsigned long long userTrackingMode;
@property(nonatomic) long long mapType;
@property(nonatomic) _Bool showsUserLocation;
@property(nonatomic) _Bool disable3DBuildingEffect;
@property(nonatomic) _Bool hideAccuracyCircle;
@property(nonatomic) _Bool showTraffic;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) _Bool showsScale;
@property(nonatomic) _Bool show3D;
@property(nonatomic) _Bool showsCompass;
@property(nonatomic) _Bool stayCenteredDuringZoom;
@property(nonatomic) _Bool pitchEnabled;
@property(nonatomic) long long lineWidth;
@property(nonatomic) _Bool longPressedEnabled;
@property(nonatomic) _Bool rotateEnabled;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) _Bool zoomEnabled;
@property(readonly, nonatomic) double mapScale;
@property(nonatomic) double zoomLevel;
@property(nonatomic) struct CGPoint centerCoordinatePoint;
@property(nonatomic) int navigationType;
@property(readonly, nonatomic) UIView *mapViewObject;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) _Bool isActive;
- (void)recoverBestViewAnimated:(_Bool)arg1;
- (void)removePolyline;
- (void)drawLineUsingPoints:(NSArray *)arg1;
- (CDStruct_b7cb895d)ONESCoordinateRegionMakeWithDistance:(struct CLLocationCoordinate2D)arg1 withlatMeter:(double)arg2 lngMeter:(double)arg3;
- (_Bool)ONESMapRectContainsRect:(CDStruct_02837cd9)arg1 rect2:(CDStruct_02837cd9)arg2;
- (_Bool)ONESMapRectContainsPoint:(CDStruct_02837cd9)arg1 point:(CDStruct_c3b9c2ee)arg2;
- (_Bool)ONESMapRectIsValid:(CDStruct_02837cd9)arg1;
- (_Bool)ONESMapSizeIsValid:(CDStruct_c3b9c2ee)arg1;
- (_Bool)ONESCoordinateRegionIsValid:(CDStruct_b7cb895d)arg1;
- (struct CLLocationCoordinate2D)ONESCoordinateForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)ONESMapPointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (CDStruct_b7cb895d)ONESCoordinateRegionWithMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)ONESMapRectWithCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (void)updateUserLocationCalloutview:(ONESBaseUserLocation *)arg1;
- (void)setRouteDrawType:(unsigned long long)arg1 routeIndex:(long long)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawCap:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawTexture:(NSString *)arg1 param2:(double)arg2 routeIndex:(long long)arg3 routeGroupIndex:(long long)arg4 routeDrawType:(unsigned long long)arg5;
- (void)setHighLightRoute:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setMapMaskColor:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 layer:(long long)arg5 curveType:(long long)arg6 animateSecond:(double)arg7;
- (NSString *)getImageFilePathFlag:(NSString *)arg1;
- (int)getNavigationRouteGroupIndex;
- (void)setTrafficColor:(unsigned int)arg1 blockColor:(unsigned int)arg2 unBlockColor:(unsigned int)arg3 extremeBlockColor:(unsigned int)arg4;
- (_Bool)removeRouteOverlayGroupByIndex:(long long)arg1;
- (_Bool)removeRouteOverlayGroup:(ONESBaseRouteOverlayGroup *)arg1;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(ONESBaseRouteOverlayGroup *)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(ONESBaseRouteOverlayGroup *)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 dispLevel:(int)arg2;
- (void)updateRouteOverlayGroup:(ONESBaseRouteOverlayGroup *)arg1 dispLevel:(int)arg2;
- (_Bool)addRouteOverlayGroup:(ONESBaseRouteOverlayGroup *)arg1;
- (_Bool)addRouteOverlay:(ONESBaseRouteOverlay *)arg1 routeOverlayGroup:(ONESBaseRouteOverlayGroup *)arg2;
- (void)stopBlockNavigation;
- (void)startNavigation:(ONESBasePlaceInfo *)arg1 toPlace:(ONESBasePlaceInfo *)arg2 startSucceed:(void (^)(void))arg3 startFailed:(void (^)(long long))arg4 updateRoute:(void (^)(ONESBaseRoute *))arg5 returnTTSValue:(void (^)(NSString *))arg6 userNavigationEnd:(void (^)(ONESBaseMapEntrance *))arg7;
- (void)startNavigationWithFromLocation:(CLLocation *)arg1 withToLocation:(CLLocation *)arg2;
- (void)setMapNaviShowMode:(long long)arg1;
- (_Bool)removeWalkRoute;
- (void)stopWalkNavigation;
- (_Bool)startWalkNavigation:(_Bool)arg1;
- (void)showWalkSearchRoute:(ONESBaseRouteResult *)arg1 automaticAjustVisibleMapRect:(_Bool)arg2;
- (void)showWalkSearchRoute:(ONESBaseRouteResult *)arg1;
- (void)continueNavigation;
- (_Bool)removeRoute;
- (void)stopNavigation;
- (ONESBaseRouteOverlay *)getRouteLineInfo;
- (void)createSearchRoute:(ONESBaseRouteResult *)arg1;
- (void)showSearchRouteAfterCreate:(ONESBaseRouteResult *)arg1 lineArray:(NSArray *)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(ONESBaseRouteResult *)arg1 lineArray:(NSArray *)arg2;
- (void)showSearchRoute:(ONESBaseRouteResult *)arg1 routeColor:(long long)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(ONESBaseRouteResult *)arg1 routeColor:(long long)arg2;
- (_Bool)startCarpoolNavigation:(_Bool)arg1;
- (_Bool)startNavigation:(_Bool)arg1;
- (_Bool)startNavigation;
- (void)showRoute:(struct CLLocationCoordinate2D *)arg1 withCount:(int)arg2;
- (int)routeCount;
- (void)removeContextSubView:(UIView *)arg1;
- (void)registerContextSubView:(UIView *)arg1;
- (id <ONESBaseOverlayPathProtocol>)viewForOverlay:(ONESBaseShape *)arg1;
- (void)removeOverlays:(NSArray *)arg1;
- (_Bool)removeOverlay:(ONESBaseShape *)arg1;
- (void)addOverlays:(NSArray *)arg1;
- (_Bool)addOverlay:(ONESBaseShape *)arg1;
- (void)updateUserLocationDispLevel:(int)arg1;
- (void)updateAnnotationDispLevel:(ONESBasePointAnnotation *)arg1 dispLevel:(int)arg2;
- (_Bool)containsObject:(ONESBasePointAnnotation *)arg1;
- (void)bringAnnotationToFront:(ONESBasePointAnnotation *)arg1;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 imageName:(NSString *)arg2 drawMode:(unsigned long long)arg3;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 angle:(double)arg2;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 alpha:(double)arg2;
- (void)updateAnnotations:(NSArray *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotations:(NSArray *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)updateAnnotation:(ONESBasePointAnnotation *)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)deselectAnnotation:(ONESBasePointAnnotation *)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(ONESBasePointAnnotation *)arg1 animated:(_Bool)arg2;
- (ONESBaseAnnotationView *)dequeueReusableAnnotationViewWithIdentifier:(NSString *)arg1;
- (ONESBaseAnnotationView *)viewForAnnotation:(ONESBasePointAnnotation *)arg1;
- (void)bringTextAnnotationToFront:(ONESBaseTextAnnotation *)arg1;
- (_Bool)removeTextAnnotation:(ONESBaseTextAnnotation *)arg1;
- (_Bool)addTextAnnotation:(ONESBaseTextAnnotation *)arg1;
- (void)removeAnnotations:(NSArray *)arg1;
- (_Bool)removeAnnotation:(ONESBasePointAnnotation *)arg1;
- (_Bool)addAnnotations:(NSArray *)arg1;
- (_Bool)addAnnotation:(ONESBasePointAnnotation *)arg1;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(UIView *)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(UIView *)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(UIView *)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(UIView *)arg2;
- (long long)getCurrentMapNaviShowMode;
- (CDStruct_02837cd9)visibleRect:(NSArray *)arg1;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)mapRectMake:(struct CLLocationCoordinate2D)arg1 withZoomlevel:(double)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animationType:(long long)arg3 duration:(double)arg4 focusEffect:(_Bool)arg5;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3 on2d:(_Bool)arg4;
- (void)setVisibleMapRectContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRectWithAnnotations:(NSArray *)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
- (CDStruct_02837cd9)getRouteLineVisibleRect:(int)arg1;
- (CDStruct_02837cd9)getRouteLineLeftVisibleRect:(int)arg1;
- (CDStruct_b7cb895d)regionThatFits:(CDStruct_b7cb895d)arg1;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setCenterOffsetY:(double)arg1 curveType:(long long)arg2 duration:(double)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5 focusEffect:(_Bool)arg6;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (_Bool)openglAnnoView;
- (_Bool)isMapMoving;
- (_Bool)zoomLevelManualChanged;
- (void)stopTrakingModeFollowWithHeading;
- (void)startTrackingModeFollow;
- (void)startTrackingModeFollowWithHeading;
- (void)setCompassYOffSet:(double)arg1;
- (void)setLogoOffSet:(struct CGPoint)arg1;
- (void)showsUserLocation:(_Bool)arg1 withMapCenter:(_Bool)arg2;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1;
- (long long)zoomLevelFitsRegion:(CDStruct_b7cb895d)arg1;
- (long long)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1;
- (void)zoomOutOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomInOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomOut;
- (void)zoomIn;
- (void)unbind:(id <ONESBaseMapEntranceDelegate>)arg1;
- (void)bind:(id <ONESBaseMapEntranceDelegate>)arg1;
- (void)removeAllObjects;
- (void)mapHibernate;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;

@optional
- (void)setLocationOverlayHidden:(_Bool)arg1;
- (void)setIsEraseRouteMode:(_Bool)arg1;
- (void)setIsLightNavigating:(_Bool)arg1;
- (struct CGRect)getPolyRect;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2 usingSrcCoor:(struct CLLocationCoordinate2D *)arg3;
- (double)maxFontSizeThatFitsForString:(NSString *)arg1 inRect:(struct CGRect)arg2 withFont:(NSString *)arg3 size:(struct CGSize *)arg4 maxFontSize:(double)arg5 minFontSize:(double)arg6;
- (CDStruct_b7cb895d)getMaxRectInPolygon:(struct CLLocationCoordinate2D *)arg1 count:(int)arg2;
- (void)updateMapEntranceLanguage:(unsigned long long)arg1;
- (_Bool)removeTileOverlay:(ONESHeatTileOverlayBaseModel *)arg1;
- (_Bool)addTileOverlay:(ONESHeatTileOverlayBaseModel *)arg1;
- (void)refreshCenterCoordinatePoint;
@end
