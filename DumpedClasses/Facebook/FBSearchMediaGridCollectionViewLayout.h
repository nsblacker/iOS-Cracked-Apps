//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class FBSearchMediaGridLayoutManager, NSMutableDictionary;

@interface FBSearchMediaGridCollectionViewLayout : UICollectionViewLayout
{
    _Bool _isPreparing;
    NSMutableDictionary *_layoutInfo;
    NSMutableDictionary *_columnRowOccupancy;
    FBSearchMediaGridLayoutManager *_layoutManager;
}

- (void).cxx_destruct;
- (void)_resetColumnRowOccupancyAndLayout;
- (double)_itemSideSize;
- (unsigned long long)_spacingForNumberOfRowsOrColumns:(unsigned long long)arg1;
- (double)_headerTotalHeight;
- (double)_yOffsetForSection:(unsigned long long)arg1;
- (double)_heightForContentSection:(unsigned long long)arg1;
- (double)_heightBeforeIndexPath:(id)arg1;
- (struct CGRect)_frameForFooterItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForFilterItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForHeaderItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForContentItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForContentHeaderAtIndexPath:(id)arg1;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1;
- (unsigned long long)_layoutSpacingSize;
- (id)_occupancyInfoForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfRowsForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfRowsForAllSections;
- (unsigned long long)_numberOfColumns;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)_resultsContentSize;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithGridLayoutManager:(id)arg1;

@end

