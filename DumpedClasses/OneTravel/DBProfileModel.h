//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DBUserInfo<Optional>, DCProfileOrderInfoModel<Optional>, DCWeixinConnectModel<Optional>;

@interface DBProfileModel : TRBaseModel
{
    DBUserInfo<Optional> *_user_info;
    DCProfileOrderInfoModel<Optional> *_order_info;
    DCWeixinConnectModel<Optional> *_weixin_connect;
}

@property(retain, nonatomic) DCWeixinConnectModel<Optional> *weixin_connect; // @synthesize weixin_connect=_weixin_connect;
@property(retain, nonatomic) DCProfileOrderInfoModel<Optional> *order_info; // @synthesize order_info=_order_info;
@property(retain, nonatomic) DBUserInfo<Optional> *user_info; // @synthesize user_info=_user_info;
- (void).cxx_destruct;

@end

