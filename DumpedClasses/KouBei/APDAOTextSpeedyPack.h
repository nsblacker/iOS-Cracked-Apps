//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOTextSpeedy.h"

@class APDAOPack, NSString;

@interface APDAOTextSpeedyPack : APDAOTextSpeedy
{
    NSString *_argumentName;
    APDAOPack *_pack;
}

@property(retain, nonatomic) APDAOPack *pack; // @synthesize pack=_pack;
@property(retain, nonatomic) NSString *argumentName; // @synthesize argumentName=_argumentName;
- (void).cxx_destruct;
- (_Bool)formatInto:(id)arg1 bindList:(id)arg2 delegate:(id)arg3;

@end

