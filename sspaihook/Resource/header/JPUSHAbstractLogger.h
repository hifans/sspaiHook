//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPUSHLogger.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface JPUSHAbstractLogger : NSObject <JPUSHLogger>
{
    id <JPUSHLogFormatter> _logFormatter;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic, getter=isOnGlobalLoggingQueue) _Bool onGlobalLoggingQueue;
@property(readonly, nonatomic, getter=isOnInternalLoggerQueue) _Bool onInternalLoggerQueue;
@property(retain, nonatomic) id <JPUSHLogFormatter> logFormatter;
- (void)logMessage:(id)arg1;
@property(readonly, nonatomic) NSString *loggerName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

