//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQAvatarView, QRAdModel, QRTextView, UILabel;

@interface QRAdView : UIView
{
    UIView *_authorInfoView;
    QQAvatarView *_headImgView;
    UILabel *_nameLabel;
    UILabel *_titleLabel;
    QRTextView *_noticeLabel;
    QRAdModel *_adModel;
    int _xo;
}


// Remaining properties
@property(retain, nonatomic) QRAdModel *adModel; // @dynamic adModel;
@property(retain, nonatomic) UIView *authorInfoView; // @dynamic authorInfoView;
@property(retain, nonatomic) QQAvatarView *headImgView; // @dynamic headImgView;
@property(retain, nonatomic) UILabel *nameLabel; // @dynamic nameLabel;
@property(retain, nonatomic) QRTextView *noticeLabel; // @dynamic noticeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;
@end
