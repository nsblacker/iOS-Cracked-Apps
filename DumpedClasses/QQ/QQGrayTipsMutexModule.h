//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGrayTipsProcessDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQGrayTipsMutexModule : NSObject <QQGrayTipsProcessDelegate>
{
    NSMutableDictionary *_paramsDic;
}

- (void).cxx_destruct;
- (id)duplicatedMessage:(id)arg1 fromArray:(id)arg2;
- (void)processWithGrayTipsParam:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

