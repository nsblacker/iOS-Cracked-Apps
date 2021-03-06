//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIImage, UIView;

@interface SUImageGroup : NSObject
{
    id <SUImageGroupDelegate> _delegate;
    id <SUImageGroupDataSource> _dataSource;
    NSArray *_images;
    NSArray *_ext;
    UIImage *_placeholder;
    long long _maxRow;
    long long _maxColum;
    long long _rowSeparate;
    long long _columSeparate;
    UIView *_supview;
    NSMutableArray *_imageViews;
    struct CGRect _frame;
    struct UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) __weak UIView *supview; // @synthesize supview=_supview;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) long long columSeparate; // @synthesize columSeparate=_columSeparate;
@property(nonatomic) long long rowSeparate; // @synthesize rowSeparate=_rowSeparate;
@property(nonatomic) long long maxColum; // @synthesize maxColum=_maxColum;
@property(nonatomic) long long maxRow; // @synthesize maxRow=_maxRow;
@property(retain, nonatomic) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) NSArray *ext; // @synthesize ext=_ext;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) __weak id <SUImageGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SUImageGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getImageViews;
- (void)tapGesture:(id)arg1;
- (struct CGRect)imageFrameWithIndex:(long long)arg1;
- (void)refreshPostion;
- (void)showImagesInSupview:(id)arg1 images:(id)arg2 point:(struct CGPoint)arg3 size:(struct CGSize)arg4 ext:(id)arg5;
- (id)initWithMaxRow:(long long)arg1 maxColumn:(long long)arg2;

@end

