//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPChatCellViewBase.h"

@class QPChatMessage, UIImageView, UILabel, UIView;

@interface QPChatCellViewNotification2 : QPChatCellViewBase
{
    UIView *posterBg;
    UIImageView *posterImageView;
    UILabel *descLabel;
    QPChatMessage *message;
}

- (void).cxx_destruct;
- (void)derivedClickBubble;
- (void)setupCellWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

