//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface ESPClassificationEntriesView : UIView
{
    NSArray *_entries;
    NSArray *_entryButtons;
}

@property(retain, nonatomic) NSArray *entryButtons; // @synthesize entryButtons=_entryButtons;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)buttonDidPressed:(id)arg1;
- (void)removeButtons;
- (void)refreshButtons;
- (id)initWithFrame:(struct CGRect)arg1;

@end
