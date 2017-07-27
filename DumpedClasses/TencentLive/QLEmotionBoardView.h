//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLKeyBoardPageLayout;

@interface QLEmotionBoardView : UIView
{
    int _pageId;
    _Bool _landscape;
    _Bool _notDisplayDel;
    _Bool _showOneMoreLine;
    _Bool _hightLinghted;
    struct CGRect _rectBG;
    int _emojiType;
    id <QLEmotionFaceViewDelegate> _delegate;
    QLKeyBoardPageLayout *_pageLayout;
}

@property(retain, nonatomic) QLKeyBoardPageLayout *pageLayout; // @synthesize pageLayout=_pageLayout;
@property(nonatomic) __weak id <QLEmotionFaceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int emojiType; // @synthesize emojiType=_emojiType;
@property(nonatomic) _Bool showOneMoreLine; // @synthesize showOneMoreLine=_showOneMoreLine;
@property(nonatomic) int pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (void)didPressDeleteBtn:(id)arg1;
- (void)inputSymbolEmotion:(id)arg1;
- (void)inputQQEmotion:(id)arg1;
- (void)inputFaceEmotion:(id)arg1;
- (void)addFaces2;
- (id)imageWithQQFaceID:(unsigned long long)arg1;
- (id)imageWithFaceId:(unsigned long long)arg1;
- (void)flushEmotionFaceWithPageId:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
