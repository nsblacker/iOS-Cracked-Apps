//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBTableViewDataSource-Protocol.h"

@class NSArray, NSString, UITableView;

@protocol FBFriendsNearbyTableViewDataSource <FBTableViewDataSource>
- (NSString *)displaySurfaceSourceIdInSection:(long long)arg1;
- (NSString *)titleForEntityCardsInSection:(long long)arg1;
- (NSArray *)entitiesInSection:(long long)arg1;
- (void)loadMoreInTableView:(UITableView *)arg1 section:(long long)arg2;
- (void)reloadInTableView:(UITableView *)arg1 section:(long long)arg2;
@end

