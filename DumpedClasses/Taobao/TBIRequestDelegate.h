//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MtopExtRequestDelegate.h"

@class NSString;

@interface TBIRequestDelegate : NSObject <MtopExtRequestDelegate>
{
    Class _model;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) Class model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)succeed:(id)arg1;
- (void)failed:(id)arg1;
- (id)initWithRespClass:(Class)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
