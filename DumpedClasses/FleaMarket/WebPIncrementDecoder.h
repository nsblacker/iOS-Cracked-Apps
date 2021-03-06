//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ImageLibIncrDecodeProtocol.h"

@class NSMutableData, NSString;

@interface WebPIncrementDecoder : NSObject <ImageLibIncrDecodeProtocol>
{
    NSMutableData *imageBuffer;
    long long expectedSize;
    void *bitmapData;
    unsigned long long width;
    unsigned long long height;
    long long tenPercent;
    long long beforeUpdateSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)outputImage;
- (void)updateIncrementData:(id)arg1;
- (_Bool)canUpdate;
- (id)initWithData:(id)arg1 expectedSize:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

