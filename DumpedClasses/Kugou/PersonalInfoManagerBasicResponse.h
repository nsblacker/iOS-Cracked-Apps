//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PersonalInfoManagerBasicResponse : NSObject
{
    int _status;
    int _errorCode;
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)createWithDictionary:(id)arg1;

@end
