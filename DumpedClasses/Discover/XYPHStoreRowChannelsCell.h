//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class XYPHStoreChannelsBanner;

@interface XYPHStoreRowChannelsCell : UICollectionViewCell
{
    id <XYPHStoreChannelBannerCellDelegate> _delegate;
    XYPHStoreChannelsBanner *_banner;
}

+ (struct CGSize)cellSizeWithBanner:(id)arg1;
@property(nonatomic) __weak XYPHStoreChannelsBanner *banner; // @synthesize banner=_banner;
@property(nonatomic) __weak id <XYPHStoreChannelBannerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)channelBannerClicked:(id)arg1;
- (void)setCellWithBanner:(id)arg1;

@end

