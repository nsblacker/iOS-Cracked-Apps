//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TBNavigationParams, UIViewController;

@interface TBURLAction : NSObject
{
    NSString *_urlPath;
    UIViewController *_sourceController;
    TBNavigationParams *_navigationParams;
    NSDictionary *_nativeParams;
}

+ (id)actionWithURLPath:(id)arg1 sourceController:(id)arg2;
+ (id)actionWithURLPath:(id)arg1 sourceController:(id)arg2 navgationParams:(id)arg3 nativeParams:(id)arg4;
@property(readonly, nonatomic) NSDictionary *nativeParams; // @synthesize nativeParams=_nativeParams;
@property(readonly, nonatomic) TBNavigationParams *navigationParams; // @synthesize navigationParams=_navigationParams;
@property(readonly, nonatomic) UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(copy, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
- (void).cxx_destruct;
- (void)rewriteNavigationParams:(id)arg1;
- (id)initWithURLPath:(id)arg1 sourceController:(id)arg2 navgationParams:(id)arg3 nativeParams:(id)arg4;
- (id)initWithURLPath:(id)arg1 sourceController:(id)arg2;

@end
