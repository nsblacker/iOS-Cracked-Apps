//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionBlockViewModel.h"

@class NSArray, NSString, TGBelongStreetModel;

@interface TGBelongStreetViewModel : TGCollectionBlockViewModel
{
    TGBelongStreetModel *_belongStreet;
}

@property(retain, nonatomic) TGBelongStreetModel *belongStreet; // @synthesize belongStreet=_belongStreet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *groupId;
@property(readonly, nonatomic) NSArray *streetSources;
@property(readonly, nonatomic) NSString *focusNumber;
@property(readonly, nonatomic) NSString *contentNumber;
@property(readonly, nonatomic) NSString *streetImageUrl;
@property(readonly, nonatomic) NSString *streetName;
- (id)initWithGroupModel:(id)arg1;

@end

