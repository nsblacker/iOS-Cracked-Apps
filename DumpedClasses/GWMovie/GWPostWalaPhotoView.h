//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWPhotoBrowserViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol GWPostWalaPhotoViewDelegate;

@interface GWPostWalaPhotoView : UIView <GWPhotoBrowserViewControllerDelegate>
{
    float _imageViewW;
    float _margin;
    _Bool _showAddButton;
    NSMutableArray *_photos;
    id <GWPostWalaPhotoViewDelegate> _delegate;
}

+ (struct CGSize)photoSize;
@property _Bool showAddButton; // @synthesize showAddButton=_showAddButton;
@property(nonatomic) __weak id <GWPostWalaPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (struct CGSize)photoViewSize;
- (id)totalImages;
- (void)layoutSubviews;
- (void)deleteViewSuccess:(id)arg1;
- (void)photoTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showAddButton:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
