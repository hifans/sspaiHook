//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ASSStaticInfoCollector : NSObject
{
    NSMutableDictionary *_environmentInfo;
    NSMutableDictionary *_deviceInfo;
    NSMutableDictionary *_appInfo;
    NSMutableDictionary *_customInfo;
    NSMutableDictionary *_dynamicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *appInfo; // @synthesize appInfo=_appInfo;
- (id)checkJB;
- (id)collectAllStaticData;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSMutableDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSMutableDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) NSMutableDictionary *environmentInfo; // @synthesize environmentInfo=_environmentInfo;
- (void)generateApplicationInfo;
- (void)generateCustomInfo:(id)arg1;
- (void)generateDeviceInfo:(id)arg1;
- (void)generateEnvironmentInfo;
- (id)generateHashForSensors;
- (void)generateStaticInfo:(id)arg1;
- (id)getContactInfo;
- (id)getCurrentStaticInfoHash;
- (id)getOtherAppToken;
- (id)getWifiMac;
- (void)reportJBError:(id)arg1;
- (void)updateDynamicInfo;
- (void)updateIC4:(id)arg1;
- (void)updateUserID:(id)arg1;
- (id)verifyStringNotNil:(id)arg1;

@end

