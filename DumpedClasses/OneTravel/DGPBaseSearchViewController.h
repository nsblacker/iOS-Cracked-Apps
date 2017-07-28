//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGCBaseTableViewController.h"

#import "DGCSplitSlideAnimationProtocol.h"

@class DiDiPOIEntityModel, NSMutableArray, NSString, UIView;

@interface DGPBaseSearchViewController : DGCBaseTableViewController <DGCSplitSlideAnimationProtocol>
{
    _Bool _isLocalHistory;
    UIView *_topContainerView;
    UIView *_bottomContainerView;
    NSMutableArray *_currentCityHistoryArray;
    NSMutableArray *_defaultPoiSuggestArray;
    DiDiPOIEntityModel *_homePOIEntityModel;
    DiDiPOIEntityModel *_companyPOIEntityModel;
}

@property(retain, nonatomic) DiDiPOIEntityModel *companyPOIEntityModel; // @synthesize companyPOIEntityModel=_companyPOIEntityModel;
@property(retain, nonatomic) DiDiPOIEntityModel *homePOIEntityModel; // @synthesize homePOIEntityModel=_homePOIEntityModel;
@property(nonatomic) _Bool isLocalHistory; // @synthesize isLocalHistory=_isLocalHistory;
@property(retain, nonatomic) NSMutableArray *defaultPoiSuggestArray; // @synthesize defaultPoiSuggestArray=_defaultPoiSuggestArray;
@property(retain, nonatomic) NSMutableArray *currentCityHistoryArray; // @synthesize currentCityHistoryArray=_currentCityHistoryArray;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
- (void).cxx_destruct;
- (void)slideInWithDuration:(double)arg1;
- (void)slideOutWithDuration:(double)arg1;
- (void)fetchSearchRecommendation;
- (void)clearData;
- (void)showCleanDataAlert;
- (void)storeData:(id)arg1;
- (_Bool)equal:(double)arg1 to:(double)arg2;
- (_Bool)equalCoor:(struct CLLocationCoordinate2D)arg1 destLng:(id)arg2 destLat:(id)arg3;
- (void)savePoi:(id)arg1;
- (void)loadDefaultData;
- (void)showSearchView:(long long)arg1;
- (void)fetchLogin;
- (void)getHomeAndCompayAddress;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)filePath;
- (void)createStoreDataDir;
- (void)showCurrentLocationLogWithOrigin:(id)arg1;
- (id)currentGeoModelByHand;
- (id)currentOriginModel;
- (void)setupTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
