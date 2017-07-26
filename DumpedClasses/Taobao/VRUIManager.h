//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIManagerProtocol.h"

@class NSMutableArray, NSString;

@interface VRUIManager : NSObject <UIManagerProtocol>
{
    NSMutableArray *_newList;
    NSMutableArray *_nodeList;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRightEyeInContex:(struct VRContext)arg1;
- (void)drawLeftEyeInContex:(struct VRContext)arg1;
- (void)lookAroundWithMvpMatrix:(union _GLKMatrix4)arg1;
- (void)drawUIInContex:(struct VRContext)arg1;
- (void)setAllUINodesRemove;
- (void)removeAllUINodes;
- (void)addUINode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
