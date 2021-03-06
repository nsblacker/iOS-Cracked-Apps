//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QSEngineBase.h"

@interface PicArtisticFilterConfigManager : QSEngineBase
{
    id <PicArtisticFilterConfigDelegate> _delegate;
}

+ (id)sharedManager;
@property(nonatomic) __weak id <PicArtisticFilterConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAccountLogOut;
- (void)setPicArtisticFilterConfigVersion:(long long)arg1;
- (id)getUinArtisticFilterVersion;
- (long long)getPicArtisticFilterConfigVersion;
- (void)cleanArtisticFilters:(id)arg1;
- (void)updateloadingPicArtisticFilter:(id)arg1;
- (void)updatePicArtisticFilter:(id)arg1;
- (void)checkPicArtisticFilters;
- (_Bool)removeArtisticFilterLoading:(id)arg1;
- (_Bool)removeArtisticFilter:(id)arg1;
- (_Bool)isArtisticFilterLoadingExist:(id)arg1;
- (_Bool)isArtisticFilterExist:(id)arg1;
- (id)localPicArtisticFilterConfig;
- (void)updateLocalConfig:(id)arg1;
- (id)configPath;
- (id)ArtisticFilterTempDir;
- (id)configDir;
- (id)configloadingDir;
- (void)dealloc;
- (id)init;

@end

