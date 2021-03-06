//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSDictionary, NSOperationQueue, NSString, UIImage;

@interface QZoneGIFDecodeThread : NSOperation
{
    NSString *_url;
    NSData *_data;
    NSDictionary *_param;
    id <QZoneGIFDecodeThreadDelegate> _delegate;
    unsigned long long _frameIndex;
    unsigned long long _frameCount;
    float _frameDuration;
    UIImage *_frameImage;
    NSOperationQueue *_callBackQueue;
    _Bool _callBackWhenFinished;
    int _xo;
    _Bool _finished;
    _Bool _inProgress;
    _Bool _cancelled;
    struct CGImageSource *_source;
    NSString *_dataType;
    struct CGSize _viewRealSize;
}

@property(retain, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(nonatomic) float frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) __weak id <QZoneGIFDecodeThreadDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize viewRealSize; // @synthesize viewRealSize=_viewRealSize;
- (void).cxx_destruct;
- (_Bool)isEnoughMemoWithMin:(double)arg1;
- (_Bool)isCancelled;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)start;
- (float)getFrameDuration;
- (id)decodeEmoji:(struct CGImage *)arg1;
- (id)decodedImageWithCGImageRef:(struct CGImage *)arg1;
- (float)minGifDecodeMemory;
- (long long)lowModeslsFit;
- (void)decodeImage;
- (void)markAsFinished;
- (void)clearDelegatesAndCancel;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSOperationQueue *callBackQueue; // @dynamic callBackQueue;
@property(nonatomic) _Bool callBackWhenFinished; // @dynamic callBackWhenFinished;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned long long frameCount; // @dynamic frameCount;
@property(retain, nonatomic) UIImage *frameImage; // @dynamic frameImage;
@property(nonatomic) long long frameIndex; // @dynamic frameIndex;
@property(retain, nonatomic) NSDictionary *param; // @dynamic param;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

