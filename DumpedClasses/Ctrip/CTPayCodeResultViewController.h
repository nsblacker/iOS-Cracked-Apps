//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, ResultInfoModel;

@interface CTPayCodeResultViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate>
{
    long long _payResult;
    NSString *_errorMsg;
    ResultInfoModel *_resultInfoModel;
    NSArray *_titles;
    NSArray *_results;
}

@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) ResultInfoModel *resultInfoModel; // @synthesize resultInfoModel=_resultInfoModel;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long payResult; // @synthesize payResult=_payResult;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)generateFootView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

