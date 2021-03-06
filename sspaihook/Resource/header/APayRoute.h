//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APayWapPayViewController, NSString;

@interface APayRoute : NSObject
{
    NSString *_infoStr;
    NSString *_schemeStr;
    CDUnknownBlockType _resultBlock;
    APayWapPayViewController *_wapViewController;
}

- (void).cxx_destruct;
- (void)authByPortalWithInfo:(id)arg1;
- (void)authByWapWithInfo:(id)arg1 ofUrl:(id)arg2;
- (void)authWithInfo:(id)arg1 ofType:(long long)arg2 externInfo:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)callAlipay;
- (void)callAuth_v2;
- (void)callSafepay;
- (void)callWithInfo:(id)arg1 scheme:(id)arg2 andConfig:(long long)arg3 externInfo:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)callWithNativeScheme:(id)arg1;
- (void)callWithWapUrl:(id)arg1 andParams:(id)arg2;
- (void)downloadAppWithScheme:(id)arg1;
@property(copy, nonatomic) NSString *infoStr; // @synthesize infoStr=_infoStr;
- (void)presentViewController:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)saveMerchantScreen;
- (void)saveMerchantScreen:(id)arg1;
@property(copy, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
@property(retain, nonatomic) APayWapPayViewController *wapViewController; // @synthesize wapViewController=_wapViewController;

@end

