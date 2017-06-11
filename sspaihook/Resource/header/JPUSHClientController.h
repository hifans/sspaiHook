//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JCOREClientController, JPUSHBadgeNumberController, JPUSHTagAlias, NSMutableArray, NSTimer;

@interface JPUSHClientController : NSObject
{
    NSTimer *_deviceTokenStatusCheckTimer;
    long long _deviceTokenStatusCheckTimes;
    NSMutableArray *_apnsDataList;
    CDUnknownBlockType _messageHandler;
    _Bool _isReportCrash;
    _Bool _isActive;
    _Bool _isSetup;
    JCOREClientController *_coreClient;
    JPUSHTagAlias *_tagAliasMng;
    JPUSHBadgeNumberController *_badgeNumberManager;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sdkVersion;
+ (id)sharedClient;
- (void).cxx_destruct;
- (void)UDPReportAPNSState;
@property(readonly, nonatomic) JPUSHBadgeNumberController *badgeNumberManager; // @synthesize badgeNumberManager=_badgeNumberManager;
- (void)checkDeviceTokenUpdated:(id)arg1;
- (void)close;
- (void)closeJPUSHThread;
@property(readonly, nonatomic) JCOREClientController *coreClient; // @synthesize coreClient=_coreClient;
- (void)dealloc;
- (void)didLogin:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) _Bool isReportCrash; // @synthesize isReportCrash=_isReportCrash;
@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
- (void)observeNotifications;
- (void)reportInactive;
- (void)reportLaunch;
- (void)reportMsgStatus:(int)arg1 withMessageId:(unsigned long long)arg2 flag:(int)arg3;
- (void)setBadgeNumberReport:(id)arg1;
- (void)setCrashLogON;
- (void)setLatitude:(id)arg1;
- (void)setTagAlias:(id)arg1;
- (void)setViewLogSecond:(id)arg1;
- (void)setViewStart:(id)arg1;
- (void)setViewStop:(id)arg1;
- (void)setup;
- (void)startDeviceTokenUpdatedCheckTimer;
- (void)stopDeviceTokenUpdatedCheckTimer;
- (void)synchronizeData;
@property(readonly, nonatomic) JPUSHTagAlias *tagAliasMng; // @synthesize tagAliasMng=_tagAliasMng;
- (void)tryUploadIDFA;
- (void)unobserveNotifications;
- (void)updateDeviceToken:(id)arg1;
- (void)useFakeDeviceToken;

@end

