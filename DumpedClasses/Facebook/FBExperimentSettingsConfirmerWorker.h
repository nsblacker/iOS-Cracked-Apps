//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class FBPreferenceChangeConfirmer, NSString;

@interface FBExperimentSettingsConfirmerWorker : NSObject <UIAlertViewDelegate>
{
    _Bool _shouldTeardown;
    CDUnknownBlockType _confirmationBlock;
    CDUnknownBlockType _cancellationBlock;
    FBPreferenceChangeConfirmer *_owner;
}

@property(nonatomic) FBPreferenceChangeConfirmer *owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool shouldTeardown; // @synthesize shouldTeardown=_shouldTeardown;
@property(readonly, copy, nonatomic) CDUnknownBlockType cancellationBlock; // @synthesize cancellationBlock=_cancellationBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType confirmationBlock; // @synthesize confirmationBlock=_confirmationBlock;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithConfirmationBlock:(CDUnknownBlockType)arg1 cancellationBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

