//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKCPOptions.h"

@class NSString;

@interface TuSDKCPResultOptions : TuSDKCPOptions
{
    _Bool _saveToTemp;
    _Bool _saveToAlbum;
    NSString *_saveToAlbumName;
    double _outputCompress;
}

@property(nonatomic) double outputCompress; // @synthesize outputCompress=_outputCompress;
@property(copy, nonatomic) NSString *saveToAlbumName; // @synthesize saveToAlbumName=_saveToAlbumName;
@property(nonatomic) _Bool saveToAlbum; // @synthesize saveToAlbum=_saveToAlbum;
@property(nonatomic) _Bool saveToTemp; // @synthesize saveToTemp=_saveToTemp;
- (void).cxx_destruct;
- (id)componentInstance;
- (void)initOptions;

@end
