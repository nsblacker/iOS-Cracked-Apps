//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CycleScrollViewDelegate.h"

@class NSString, UIViewController;

@interface TMMotherBabyDayStepsDelegate : NSObject <CycleScrollViewDelegate>
{
    UIViewController *_vc;
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)cycleScrollView:(id)arg1 changedDataTag:(long long)arg2 dataObject:(id)arg3;
- (id)initWithVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

