//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSTimer;

@interface WBSDKStatisticsRecordManager : NSObject
{
    NSObject<OS_dispatch_queue> *_io_queue;
    NSMutableDictionary *_recordsDict;
    NSTimer *_uploadTimer;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)beginLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)beginLogPageView:(id)arg1;
- (_Bool)canUpload:(double)arg1;
- (id)channelID;
- (void)cleanHistoryUnlessRecord;
- (void)dealloc;
- (_Bool)enableDebugLog;
- (void)endApp;
- (void)endLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)endLogPageView:(id)arg1;
- (void)event:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)firstStartApp;
- (void)forceUpload;
- (id)idfaMD5;
- (id)init;
- (void)internalEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *io_queue; // @synthesize io_queue=_io_queue;
- (id)keyForRecordWithEventID:(id)arg1 PageID:(id)arg2 recordType:(long long)arg3;
@property(nonatomic) double lastUploadSuccessTimestamp;
- (void)postLogsToServerWithRecords:(id)arg1 andResultBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *recordsDict; // @synthesize recordsDict=_recordsDict;
- (void)resetTimer;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
- (void)startApp;
- (void)upload;
- (id)uploadFormatForRecord:(id)arg1;
- (id)uploadFormatForRecordUserInfo:(id)arg1;
- (id)uploadFormatWithRecords:(id)arg1 withTimestamp:(long long)arg2;
- (double)uploadFrequency;
- (void)uploadFrequencyDidChange;
- (void)uploadTimerFired;
- (id)versionString;

@end
