//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSMutableSet, NSString;

@interface SSPQQProxy : NSObject <IMOBFPlugin>
{
    NSMutableSet *_authCallbackSet;
    NSMutableSet *_shareCallbackSet;
    id _tencentOAuthInst;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *authCallbackSet; // @synthesize authCallbackSet=_authCallbackSet;
- (_Bool)authorize:(id)arg1;
- (_Bool)canShareQQ:(id)arg1 callback:(id)arg2;
- (_Bool)canShareQZone:(id)arg1 callback:(id)arg2;
- (id)checkThumbImageSize:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (id)init;
- (_Bool)isClientInstalled;
- (_Bool)isQQClientInstalled;
- (_Bool)isQZoneClientInstalled;
- (_Bool)isSupportApi;
- (void)load:(id)arg1;
- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (id)registerApp:(id)arg1;
- (void)registerAuthMethod;
- (void)registerHandleSSOCallbackMethod;
- (void)registerHandlerShareCallbackMethod;
- (void)registerSetupApp;
- (void)registerShareMethod;
- (void)sendAudio:(id)arg1 scene:(unsigned long long)arg2 callback:(id)arg3;
- (void)sendImageToQQ:(id)arg1 callback:(id)arg2;
- (void)sendStoryResponse:(id)arg1;
- (void)sendTextToQQ:(id)arg1 callback:(id)arg2;
- (void)sendVideo:(id)arg1 scene:(unsigned long long)arg2 callback:(id)arg3;
- (void)sendWebpage:(id)arg1 scene:(unsigned long long)arg2 callback:(id)arg3;
@property(retain, nonatomic) NSMutableSet *shareCallbackSet; // @synthesize shareCallbackSet=_shareCallbackSet;
@property(retain, nonatomic) id tencentOAuthInst; // @synthesize tencentOAuthInst=_tencentOAuthInst;
- (void)setupAppId:(id)arg1;
- (void)tencentDidLogin;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidNotNetWork;
- (void)unload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

