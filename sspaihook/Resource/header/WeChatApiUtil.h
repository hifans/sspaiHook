//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WeChatApiUtil : NSObject
{
}

+ (id)DecodeBase64:(id)arg1;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)EncodeBase64:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)_internal_getSDKVersion;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)getAppUrl:(id)arg1;
+ (id)getAppUrlWithPlatformId:(id)arg1;
+ (id)getAppUrlWithPlatformId:(id)arg1 withOtherArgs:(id)arg2;
+ (id)getSDKVersion;
+ (id)getWeChatUrl:(id)arg1 withAppSupportContentFlag:(unsigned long long)arg2;
+ (id)getWeChatUrl:(id)arg1 withAppSupportContentFlag:(unsigned long long)arg2 extraUrl:(id)arg3;
+ (_Bool)is2xScreen;
+ (_Bool)isAppInstalledWithCatchException:(id)arg1;
+ (_Bool)isAppInstalledWithoutCatchException:(id)arg1;
+ (_Bool)isAppOpenUrl:(id)arg1 appID:(id)arg2;
+ (_Bool)isWXAppSupportApi;
+ (_Bool)isiOS7plus;
+ (_Bool)launchApp:(id)arg1;
+ (id)propertyListFromData:(id)arg1;

@end

