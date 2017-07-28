//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class NSMutableArray, NSString;

@interface FMSearchTagsCell : UITableViewCell <FMComponentCellProtocol>
{
    NSMutableArray *_tagList;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
- (void).cxx_destruct;
- (void)trackTagsAppearEvent;
- (void)tagClick:(id)arg1;
- (void)addTagButton:(unsigned long long)arg1 withTag:(id)arg2;
- (void)bindComponent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
