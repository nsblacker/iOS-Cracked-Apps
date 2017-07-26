//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TBCouponCellDelegate.h"

@class NSString, UIButton;

@interface TBMyCouponBasicInfoCell : UITableViewCell <TBCouponCellDelegate>
{
    UIButton *_presentedButton;
    NSString *_presentedUrl;
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(copy, nonatomic) NSString *presentedUrl; // @synthesize presentedUrl=_presentedUrl;
@property(retain, nonatomic) UIButton *presentedButton; // @synthesize presentedButton=_presentedButton;
- (void).cxx_destruct;
- (void)clickPresentedButton:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
