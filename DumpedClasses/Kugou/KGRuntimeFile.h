//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGDownLoadKey, KGDownloadCenter, KGFileAuthorization, KGRuntimeMgr, KGTrackerMusic, NSMutableArray, NSObject<OS_dispatch_source>, NSString;

@interface KGRuntimeFile : NSObject
{
    struct map<long, __weak id, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, __weak id>>> _jobsDowning;
    NSObject<OS_dispatch_source> *_trackTimer;
    _Bool _unHealth;
    _Bool _isAdv;
    _Bool _bPriorityP2p;
    _Bool _customSpeedUp;
    int _stateNow;
    int _downMode;
    KGDownLoadKey *_downKey;
    KGFileAuthorization *_auth;
    KGTrackerMusic *_urlTracker;
    NSString *_netChacnged;
    long long _downSize;
    long long _speedNow;
    long long _speedAvg;
    NSString *_usingUrl;
    KGDownloadCenter *_downCenter;
    KGRuntimeMgr *_mgr;
    unsigned long long _jobsTypeMask;
    NSMutableArray *_progressToDb;
    unsigned long long _bTrackType;
}

@property(nonatomic) unsigned long long bTrackType; // @synthesize bTrackType=_bTrackType;
@property(nonatomic) _Bool customSpeedUp; // @synthesize customSpeedUp=_customSpeedUp;
@property(nonatomic) _Bool bPriorityP2p; // @synthesize bPriorityP2p=_bPriorityP2p;
@property(nonatomic) _Bool isAdv; // @synthesize isAdv=_isAdv;
@property(retain, nonatomic) NSMutableArray *progressToDb; // @synthesize progressToDb=_progressToDb;
@property(nonatomic) unsigned long long jobsTypeMask; // @synthesize jobsTypeMask=_jobsTypeMask;
@property(nonatomic) __weak KGRuntimeMgr *mgr; // @synthesize mgr=_mgr;
@property(nonatomic) __weak KGDownloadCenter *downCenter; // @synthesize downCenter=_downCenter;
@property(retain, nonatomic) NSString *usingUrl; // @synthesize usingUrl=_usingUrl;
@property(nonatomic) _Bool unHealth; // @synthesize unHealth=_unHealth;
@property(nonatomic) long long speedAvg; // @synthesize speedAvg=_speedAvg;
@property(nonatomic) long long speedNow; // @synthesize speedNow=_speedNow;
@property(nonatomic) long long downSize; // @synthesize downSize=_downSize;
@property(nonatomic) int downMode; // @synthesize downMode=_downMode;
@property(retain, nonatomic) NSString *netChacnged; // @synthesize netChacnged=_netChacnged;
@property(nonatomic) int stateNow; // @synthesize stateNow=_stateNow;
@property(retain, nonatomic) KGTrackerMusic *urlTracker; // @synthesize urlTracker=_urlTracker;
@property(retain, nonatomic) KGFileAuthorization *auth; // @synthesize auth=_auth;
@property(retain, nonatomic) KGDownLoadKey *downKey; // @synthesize downKey=_downKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)downloadFailed;
- (id)runTimeJobSources;
- (unsigned long long)runTimeJobHolderTypeMask;
- (int)mapHolder2Speed:(unsigned long long)arg1;
- (void)adjustPriority;
- (void)adjustIsPlaying;
- (_Bool)adjustSpeedUp;
- (void)adjustAuth;
- (void)adjustRuntimeFileOption;
- (void)adjustEngineOption;
- (id)description;
- (void)handleStateChanged:(id)arg1;
- (void)recordCdnResult:(id)arg1;
- (void)recordUrlResult:(id)arg1 errorCode:(int)arg2;
- (int)downErrorCodeToUrlFailReason:(int)arg1;
- (void)handleUpdate:(id)arg1;
- (_Bool)pHasKtvHolder;
- (_Bool)refreshTrakerResult:(id)arg1 pureP2p:(_Bool)arg2;
- (void)adjustDownloadUrls;
- (_Bool)downloadWithP2p:(_Bool)arg1;
- (_Bool)tryStop:(id *)arg1;
- (_Bool)tryStart:(id *)arg1;
- (_Bool)removeJob:(id)arg1 error:(id *)arg2;
- (_Bool)addJob:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)createTrackTimer;
- (id)initWithDownKey:(id)arg1 urlTracker:(id)arg2 stateNow:(int)arg3 downCenter:(id)arg4;

@end

