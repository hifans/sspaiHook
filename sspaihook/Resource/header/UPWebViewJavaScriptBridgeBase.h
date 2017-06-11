//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSMutableArray, NSMutableDictionary;

@interface UPWebViewJavaScriptBridgeBase : NSObject
{
    id _webViewDelegate;
    long long _uniqueId;
    NSBundle *_resourceBundle;
    id <UPWebViewJavascriptBridgeBaseDelegate> _delegate;
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    CDUnknownBlockType _messageHandler;
    unsigned long long _numRequestsLoading;
}

+ (void)enableLogging;
- (void).cxx_destruct;
- (id)_deserializeMessageJSON:(id)arg1;
- (void)_dispatchMessage:(struct NSDictionary *)arg1;
- (void)_evaluateJavascript:(id)arg1;
- (void)_log:(id)arg1 json:(id)arg2;
- (void)_queueMessage:(struct NSDictionary *)arg1;
- (id)_serializeMessage:(id)arg1;
- (void)dealloc;
@property __weak id <UPWebViewJavascriptBridgeBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dispatchStartUpMessageQueue;
- (void)flushMessageQueue:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1 resourceBundle:(id)arg2;
- (void)injectJavascriptFile:(_Bool)arg1;
- (_Bool)isCorrectHost:(id)arg1;
- (_Bool)isCorrectProcotocolScheme:(id)arg1;
- (void)logUnkownMessage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
@property unsigned long long numRequestsLoading; // @synthesize numRequestsLoading=_numRequestsLoading;
- (void)reset;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
- (void)sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
@property(retain, nonatomic) NSMutableArray *startupMessageQueue; // @synthesize startupMessageQueue=_startupMessageQueue;
- (id)webViewJavascriptCheckCommand;
- (id)webViewJavascriptFetchQueyCommand;

@end
