//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KtvAccompanyHttpADO, NSMutableArray, NSString;

@interface KTVKrcDownWithSongInfoJob : NSObject
{
    _Bool _isDefaultFile;
    int _krcUsedType;
    NSString *_songHashKey;
    NSMutableArray *_successBlocks;
    NSMutableArray *_failureBlocks;
    long long _tryTimes;
    KtvAccompanyHttpADO *_httpAdo;
}

@property(nonatomic) _Bool isDefaultFile; // @synthesize isDefaultFile=_isDefaultFile;
@property(nonatomic) int krcUsedType; // @synthesize krcUsedType=_krcUsedType;
@property(retain, nonatomic) KtvAccompanyHttpADO *httpAdo; // @synthesize httpAdo=_httpAdo;
@property(nonatomic) long long tryTimes; // @synthesize tryTimes=_tryTimes;
@property(retain, nonatomic) NSMutableArray *failureBlocks; // @synthesize failureBlocks=_failureBlocks;
@property(retain, nonatomic) NSMutableArray *successBlocks; // @synthesize successBlocks=_successBlocks;
@property(copy, nonatomic) NSString *songHashKey; // @synthesize songHashKey=_songHashKey;
- (void).cxx_destruct;
- (id)init;

@end
