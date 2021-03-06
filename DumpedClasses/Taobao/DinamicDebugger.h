//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReflectClientDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, ReflectClient, UIButton, UITableView;

@interface DinamicDebugger : NSObject <ReflectClientDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSString *_transferingFileName;
    NSString *_transferingFileExtention;
    NSDictionary *_transferingFileDict;
    CDUnknownBlockType _templateChangedBlock;
    NSMutableDictionary *_allTransferedFile;
    ReflectClient *_client;
    NSArray *_services;
    UITableView *_serviceListView;
    UIButton *_serviceStatusBtn;
}

+ (void)showDebuggerServices;
+ (void)stopDebug;
+ (void)startDebug;
+ (id)sharedInstance;
@property(retain, nonatomic) UIButton *serviceStatusBtn; // @synthesize serviceStatusBtn=_serviceStatusBtn;
@property(retain, nonatomic) UITableView *serviceListView; // @synthesize serviceListView=_serviceListView;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(retain, nonatomic) ReflectClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSMutableDictionary *allTransferedFile; // @synthesize allTransferedFile=_allTransferedFile;
@property(copy, nonatomic) CDUnknownBlockType templateChangedBlock; // @synthesize templateChangedBlock=_templateChangedBlock;
@property(retain, nonatomic) NSDictionary *transferingFileDict; // @synthesize transferingFileDict=_transferingFileDict;
@property(retain, nonatomic) NSString *transferingFileExtention; // @synthesize transferingFileExtention=_transferingFileExtention;
@property(retain, nonatomic) NSString *transferingFileName; // @synthesize transferingFileName=_transferingFileName;
- (void).cxx_destruct;
- (void)updateStatus:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clientDidDisconnectFromService:(id)arg1;
- (void)client:(id)arg1 passcodeWasInvalid:(id)arg2;
- (void)serverRequiresPasscodeForClient:(id)arg1;
- (void)client:(id)arg1 didUpdateServicesList:(id)arg2;
- (void)client:(id)arg1 didRecieveData:(id)arg2;
- (void)client:(id)arg1 willReceiveData:(id)arg2 withLength:(unsigned long long)arg3;
- (void)client:(id)arg1 willReceiveDataWithLength:(unsigned long long)arg2;
- (void)client:(id)arg1 didConnectToService:(id)arg2;
- (void)client:(id)arg1 didFindServices:(id)arg2;
- (void)clientDidBeginBrowsing:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

