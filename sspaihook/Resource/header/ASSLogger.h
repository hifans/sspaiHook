//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString;

@interface ASSLogger : NSObject
{
    NSString *_loggerInfo;
    NSOperationQueue *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addLogWithMessage:(id)arg1;
- (void)addLogWithMessage:(id)arg1 withFileName:(id)arg2;
- (id)generateJsonMessage:(id)arg1;
- (id)generateMessage:(id)arg1;
- (id)getCurrentFileName:(id)arg1;
- (void)initializeWithArgs:(id)arg1;
- (void)internal_addLog:(id)arg1;
- (id)limitedLengthString:(id)arg1;
@property(retain, nonatomic) NSString *loggerInfo; // @synthesize loggerInfo=_loggerInfo;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)uploadLog;
- (void)uploadLogCertified;

@end

