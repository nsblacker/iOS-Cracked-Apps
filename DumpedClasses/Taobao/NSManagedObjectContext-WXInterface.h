//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@interface NSManagedObjectContext (WXInterface)
- (id)fetchedResultsControllerWithFetcheRequet:(id)arg1 sectionNameKeyPath:(id)arg2 cacheName:(id)arg3 error:(int *)arg4;
- (id)fetchedResultsControllerWithFetcheRequet:(id)arg1 error:(int *)arg2;
- (id)fetchRequestWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6;
- (id)fetchRequestWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5;
- (id)fetchRequestWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6;
- (id)fetchRequestWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5;
- (id)fetchRequestWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchRequestWithEntityName:(id)arg1 predicate:(id)arg2;
- (id)fetchRequestWithEntityName:(id)arg1;
- (id)getObjectsWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 error:(int *)arg7;
- (id)getObjectsWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 error:(int *)arg7;
- (id)getObjectsWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 error:(int *)arg6;
- (id)getObjectsWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 error:(int *)arg4;
- (id)getObjectsWithEntityName:(id)arg1 predicate:(id)arg2 error:(int *)arg3;
- (id)getObjectsWithEntityName:(id)arg1 error:(int *)arg2;
- (unsigned long long)getCountWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 error:(int *)arg7;
- (unsigned long long)getCountWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 fetchOffset:(unsigned long long)arg4 fetchBatchSize:(unsigned long long)arg5 error:(int *)arg6;
- (unsigned long long)getCountWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 error:(int *)arg4;
- (unsigned long long)getCountWithEntityName:(id)arg1 predicate:(id)arg2 error:(int *)arg3;
- (unsigned long long)getCountWithEntityName:(id)arg1 error:(int *)arg2;
@end

