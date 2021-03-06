//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "WVUICityListSelectDelegate.h"

@class WVUICityListController;

@interface WVUICityList : WVDynamicHandler <WVUICityListSelectDelegate>
{
    WVUICityListController *_cityList;
    CDUnknownBlockType _callback;
}

+ (id)instance;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) WVUICityListController *cityList; // @synthesize cityList=_cityList;
- (void).cxx_destruct;
- (void)releaseInstance;
- (void)dealloc;
- (void)selectCity:(id)arg1;
- (void)showCityList:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

@end

