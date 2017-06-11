//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSArray, NSInputStream, NSMutableArray, NSMutableData, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLRequest, SRIOConsumerPool;

@interface SRWebSocket : NSObject <NSStreamDelegate>
{
    long long _webSocketVersion;
    NSOperationQueue *_delegateOperationQueue;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_readBuffer;
    unsigned long long _readBufferOffset;
    NSMutableData *_outputBuffer;
    unsigned long long _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long long _currentFrameCount;
    unsigned long long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    NSString *_basicAuthorizationString;
    _Bool _pinnedCertFound;
    unsigned char _currentReadMaskKey[4];
    unsigned long long _currentReadMaskOffset;
    _Bool _consumerStopped;
    _Bool _closeWhenFinishedWriting;
    _Bool _failed;
    _Bool _secure;
    NSURLRequest *_urlRequest;
    _Bool _sentClose;
    _Bool _didFail;
    _Bool _cleanupScheduled;
    int _closeCode;
    _Bool _isPumping;
    NSMutableSet *_scheduledRunloops;
    SRWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    SRIOConsumerPool *_consumerPool;
    _Bool _allowsUntrustedSSLCertificates;
    id <SRWebSocketDelegate> _delegate;
    NSURL *_url;
    long long _readyState;
    NSString *_protocol;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    NSArray *_requestCookies;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_HTTPHeadersDidFinish;
- (void)_SR_commonInit;
- (void)_addConsumerWithDataLength:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 readToCurrentFrame:(_Bool)arg3 unmaskBytes:(_Bool)arg4;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2 dataLength:(unsigned long long)arg3;
- (_Bool)_checkHandshake:(struct __CFHTTPMessage *)arg1;
- (void)_cleanupSelfReference:(id)arg1;
- (void)_closeWithProtocolError:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_handleFrameHeader:(CDStruct_6a6a01a4)arg1 curData:(id)arg2;
- (void)_handleFrameWithData:(id)arg1 opCode:(long long)arg2;
- (void)_handleMessage:(id)arg1;
- (void)_initializeStreams;
- (_Bool)_innerPumpScanner;
- (void)_performDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_pumpScanner;
- (void)_pumpWriting;
- (void)_readFrameContinue;
- (void)_readFrameNew;
- (void)_readHTTPHeader;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_readUntilHeaderCompleteWithCallback:(CDUnknownBlockType)arg1;
- (void)_scheduleCleanup;
- (void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2;
- (void)_updateSecureStreamOptions;
- (void)_writeData:(id)arg1;
@property(nonatomic) _Bool allowsUntrustedSSLCertificates; // @synthesize allowsUntrustedSSLCertificates=_allowsUntrustedSSLCertificates;
- (void)assertOnWorkQueue;
- (void)close;
- (void)closeConnection;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <SRWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
- (void)didConnect;
- (void)handleCloseWithData:(id)arg1;
- (void)handlePing:(id)arg1;
- (void)handlePong:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURL:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(_Bool)arg3;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(_Bool)arg3;
- (void)open;
- (void)openConnection;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) long long readyState; // @synthesize readyState=_readyState;
@property(readonly, nonatomic) struct __CFHTTPMessage *receivedHTTPHeaders; // @synthesize receivedHTTPHeaders=_receivedHTTPHeaders;
@property(retain, nonatomic) NSArray *requestCookies; // @synthesize requestCookies=_requestCookies;
- (void)safeHandleEvent:(unsigned long long)arg1 stream:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)send:(id)arg1;
- (void)sendPing:(id)arg1;
- (void)setupNetworkServiceType:(unsigned long long)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

