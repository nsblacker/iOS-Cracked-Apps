//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface SFAlertDialog : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

