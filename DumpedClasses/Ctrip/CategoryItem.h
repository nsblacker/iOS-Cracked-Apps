//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CategoryItem : CTBusinessBean
{
    int _type;
    int _iD;
    int _parentID;
    int _sort;
    NSString *_name;
    NSString *_pinyin;
    NSString *_jP;
    NSString *_hotelDescription;
}

@property(nonatomic) int sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *hotelDescription; // @synthesize hotelDescription=_hotelDescription;
@property(copy, nonatomic) NSString *jP; // @synthesize jP=_jP;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int parentID; // @synthesize parentID=_parentID;
@property(nonatomic) int iD; // @synthesize iD=_iD;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

