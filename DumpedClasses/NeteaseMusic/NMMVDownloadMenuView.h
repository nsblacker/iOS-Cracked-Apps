//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMMV, NSMutableArray;

@interface NMMVDownloadMenuView : UIView
{
    NSMutableArray *_buttonArray;
    id <NMMVDownloadMenuViewDelegate> _delegate;
    NMMV *_mv;
}

+ (struct CGSize)viewSize:(id)arg1;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(nonatomic) __weak id <NMMVDownloadMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setupButton:(id)arg1 quality:(id)arg2 mv:(id)arg3;
- (id)createButton:(long long)arg1 total:(long long)arg2 quality:(id)arg3 mv:(id)arg4;
- (id)init;

@end

