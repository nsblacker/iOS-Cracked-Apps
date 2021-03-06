//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBGroupFeedContextRowModel, FBUserSession;
@protocol FBGroupContextRowTapResponder;

@interface FBGroupFeedContextRowComponent : CKCompositeComponent
{
    FBGroupFeedContextRowModel *_model;
    id <FBGroupContextRowTapResponder> _tapHandler;
    FBUserSession *_session;
    long long _rowType;
}

+ (id)newWithModel:(id)arg1 toolbox:(id)arg2;
@property(readonly, nonatomic) long long rowType; // @synthesize rowType=_rowType;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)contextRowTapped:(id)arg1;

@end

