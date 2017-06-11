//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, WBSDKFMDatabase;

@interface WBSDKFMDatabaseQueue : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    WBSDKFMDatabase *_db;
}

+ (id)databaseQueueWithPath:(id)arg1;
- (_Bool)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (id)database;
- (void)dealloc;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (_Bool)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (_Bool)inTransaction:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1;
@property(retain) NSString *path; // @synthesize path=_path;

@end

