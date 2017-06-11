//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSMutableDictionary, NSString;

@interface MOBFJSContext : NSObject <UIWebViewDelegate>
{
    id _jsParser;
    NSMutableDictionary *_methods;
    NSMutableDictionary *_pluginNames;
}

+ (id)defaultContext;
- (void).cxx_destruct;
- (id)_convertHttpArrayParamValue:(id)arg1;
- (id)_convertHttpStringParamValue:(id)arg1;
- (id)callJSMethod:(id)arg1 arguments:(id)arg2;
- (void)callback:(id)arg1 resultData:(id)arg2;
- (void)debug:(id)arg1;
- (id)init;
@property(retain, nonatomic) id jsParser; // @synthesize jsParser=_jsParser;
- (void)loadPlugin:(id)arg1 forName:(id)arg2;
- (void)loadPluginWithPath:(id)arg1 forName:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *methods; // @synthesize methods=_methods;
@property(retain, nonatomic) NSMutableDictionary *pluginNames; // @synthesize pluginNames=_pluginNames;
- (void)registerCanOpenURLMethod;
- (void)registerDownloadFileMethod;
- (void)registerGetAppConfigMethod;
- (void)registerGetCacheDataMethod;
- (void)registerHTTPMethod;
- (void)registerIsMultitaskingSupportedMethod;
- (void)registerIsPadMethod;
- (void)registerIsPluginRegistedMethod;
- (void)registerJSMethod:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)registerLogMethod;
- (void)registerMethods;
- (void)registerOpenURLMethod;
- (void)registerParseXMLMethod;
- (void)registerSetCacheDataMethod;
- (void)runScript:(id)arg1;
- (void)setupNewJSParser;
- (void)setupOldJSParser;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

