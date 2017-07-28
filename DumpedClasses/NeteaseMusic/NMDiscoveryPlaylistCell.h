//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSMutableArray;

@interface NMDiscoveryPlaylistCell : UITableViewCell
{
    NSArray *_playlists;
    NSMutableArray *_subViewArray;
    id <NMDiscoveryPlaylistCellDelegate> _delegate;
}

+ (long long)maxPlaylistCount;
+ (double)heightForPlaylists:(id)arg1;
@property(nonatomic) __weak id <NMDiscoveryPlaylistCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
- (void).cxx_destruct;
- (id)viewForPoint:(struct CGPoint)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)coverButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
