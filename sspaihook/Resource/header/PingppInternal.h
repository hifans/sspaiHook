//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Pingpp.h"

@class NSString;

@interface PingppInternal : Pingpp
{
    _Bool fromOne;
    _Bool _channelButtonEnabled;
    CDUnknownBlockType pingppCallback;
    NSString *currentChannel;
    double pingppChargeNetworkTimeout;
    NSString *_paymentURLString;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)alipayResult:(id)arg1;
- (void)channelAlipay:(id)arg1 withAppURLScheme:(id)arg2;
- (_Bool)channelAlipayIncluded;
@property(nonatomic) _Bool channelButtonEnabled; // @synthesize channelButtonEnabled=_channelButtonEnabled;
- (_Bool)channelUpIncluded;
- (void)channelUpmp:(id)arg1 withViewController:(id)arg2 andScheme:(id)arg3;
- (void)createPayment:(id)arg1 viewController:(id)arg2 appURLScheme:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *currentChannel; // @synthesize currentChannel;
- (void)done:(id)arg1 withError:(id)arg2;
- (void)done:(id)arg1 withErrorCode:(unsigned long long)arg2;
- (void)done:(id)arg1 withErrorCode:(unsigned long long)arg2 andMsg:(id)arg3;
- (void)enableChannelButton;
- (void)handleAlipayResultURL:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)handleResultURL:(id)arg1;
- (_Bool)handleUpResultURL:(id)arg1;
- (id)init;
@property(nonatomic, getter=isFromOne) _Bool fromOne; // @synthesize fromOne;
@property(retain, nonatomic) NSString *paymentURLString; // @synthesize paymentURLString=_paymentURLString;
@property(copy, nonatomic) CDUnknownBlockType pingppCallback; // @synthesize pingppCallback;
@property(nonatomic) double pingppChargeNetworkTimeout; // @synthesize pingppChargeNetworkTimeout;
- (void)setWebViewItemColor:(id)arg1 buttonColor:(id)arg2;
- (void)testmodeNotify:(id)arg1 appURLScheme:(id)arg2 orderNo:(id)arg3 extra:(id)arg4;

@end
