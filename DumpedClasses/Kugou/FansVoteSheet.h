//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGBasicSheet.h"

@class FansCrazyPushInfo, SongRankInfo, UIButton, UILabel, UIView;

@interface FansVoteSheet : KGBasicSheet
{
    id <FansVoteSheetDelegate> _delegate;
    UIView *_contentView;
    UIButton *_passerBy;
    UIButton *_fans;
    FansCrazyPushInfo *_crazySongInfo;
    long long _index;
    SongRankInfo *_songRankInfo;
    UILabel *_rankingLabel;
    long long _songTimes;
}

@property(nonatomic) long long songTimes; // @synthesize songTimes=_songTimes;
@property(nonatomic) __weak UILabel *rankingLabel; // @synthesize rankingLabel=_rankingLabel;
@property(retain, nonatomic) SongRankInfo *songRankInfo; // @synthesize songRankInfo=_songRankInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) FansCrazyPushInfo *crazySongInfo; // @synthesize crazySongInfo=_crazySongInfo;
@property(nonatomic) __weak UIButton *fans; // @synthesize fans=_fans;
@property(nonatomic) __weak UIButton *passerBy; // @synthesize passerBy=_passerBy;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) id <FansVoteSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sureBtnClick;
- (void)getSongRankInfo;
- (void)cancelBtnClick;
- (void)fansBtnClikc;
- (void)passerByBtnClick;
- (void)createUI;
- (id)initWithCrazySongInfo:(id)arg1 withIndex:(long long)arg2;

@end
