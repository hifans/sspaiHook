//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPUSHTcpSocketDelegate.h"
#import "JPUSHUdpSocketDelegate.h"

@class JPUSHAddressController, JPUSHFIFOQueue, JPUSHLoginRequest, JPUSHTcpSocket, JPUSHUdpSocket, NSArray, NSMutableArray, NSString, NSTimer;

@interface JPUSHSessionController : NSObject <JPUSHTcpSocketDelegate, JPUSHUdpSocketDelegate>
{
    JPUSHAddressController *_addressController;
    int _proofTimeInterval;
    unsigned short _serverVersion;
    unsigned long long _rId;
    NSString *_sessionKey;
    JPUSHLoginRequest *_loginRequest;
    JPUSHUdpSocket *_udpReportSocket;
    NSMutableArray *_udpBlockedQueue;
    JPUSHTcpSocket *_tcpConnectionSocket;
    JPUSHFIFOQueue *_tcpBlockedQueue;
    JPUSHFIFOQueue *_tcpSendingQueue;
    NSTimer *_heartbeatTimer;
    unsigned long long _delaySetupTimeIntervalIndex;
    NSTimer *_delaySetupTimer;
    int _status;
    double _lastSucceedSisTime;
    _Bool _isConnecting;
    _Bool _hasCloseSession;
    _Bool _isSetup;
    _Bool _isLogin;
    _Bool _isConnected;
    unsigned int _sessionID;
    NSMutableArray *_timeoutCallbacks;
    NSArray *_sisContent;
}

- (void).cxx_destruct;
- (void)addTimeoutCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) JPUSHAddressController *addressController; // @synthesize addressController=_addressController;
- (_Bool)clientStateWithError:(unsigned short)arg1;
- (_Bool)close;
- (_Bool)connect;
- (_Bool)connectTcp:(id)arg1;
- (_Bool)connectTcp:(id)arg1 afterConnectUdp:(id)arg2;
- (_Bool)connectUdp:(id)arg1;
- (_Bool)connectWithTcpCoreAddress:(id)arg1;
- (_Bool)connectWithUdpCoreAddress:(id)arg1;
- (void)connection:(id)arg1 didReceiveElement:(id)arg2;
- (void)connection:(id)arg1 didSendData:(id)arg2;
- (void)connectionDidClose:(id)arg1;
- (void)connectionDidFailed;
- (void)connectionDidSetup:(id)arg1;
- (void)connectionSendQueueEmpty:(id)arg1;
- (void)dealloc;
- (void)dequeueRequest:(id)arg1;
- (void)didNotReceivedDataAtUdpSocket:(id)arg1 withError:(id)arg2;
- (void)didNotSendData:(id)arg1 atUdpSocket:(id)arg2;
- (void)didReceivedData:(id)arg1 atUdpSocket:(id)arg2;
- (void)didSendData:(id)arg1 atUdpSocket:(id)arg2;
- (void)doDelaySetup:(id)arg1;
- (void)doHeartbeat:(id)arg1;
- (void)doLogin;
- (void)doRegister;
- (void)doRegisterOrLogin;
- (void)doSendTcpRequest:(id)arg1;
- (void)doSendUdpReport:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (id)findBlockedRequest:(unsigned long long)arg1;
- (id)findSendingRequest:(unsigned long long)arg1;
- (void)fireHeartBeat;
- (unsigned long long)getRId:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (_Bool)isLastSisTooLong;
@property(readonly, nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
- (_Bool)isNetworkChanged;
@property(readonly, nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
- (_Bool)isSisOnProtect;
- (void)manualClose;
- (void)netWorkChange;
- (void)onAckOrRespReceived:(id)arg1;
- (void)onAckTimeoutForRequest:(id)arg1;
- (void)onLoginRespond:(id)arg1;
- (void)onRegisterRespond:(id)arg1;
@property(readonly, nonatomic) int proofTimeInterval; // @synthesize proofTimeInterval=_proofTimeInterval;
@property(readonly, nonatomic) unsigned long long rId; // @synthesize rId=_rId;
- (void)reenqueueSendingRequests;
- (void)removeHeartBeatLock;
- (void)resetDelaySetupIndex;
- (void)resetSisCache;
- (void)sendAllBlockedUdpReports;
- (void)sendRequest:(id)arg1;
- (void)sendUdpReport:(id)arg1;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSArray *sisContent; // @synthesize sisContent=_sisContent;
- (void)setup;
- (void)startDelaySetupTimer;
- (void)startHeartbeatTimer;
- (void)stopDelaySetupTimer;
- (void)stopHeartbeatTimer;
@property(readonly, nonatomic) NSMutableArray *timeoutCallbacks; // @synthesize timeoutCallbacks=_timeoutCallbacks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
