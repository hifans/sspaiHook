//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YLUniGis;

@interface YLUniDeviceProfile : NSObject
{
    _Bool _isJailbroken;
    int _connection;
    NSString *_mobile;
    NSString *_os;
    YLUniGis *_gis;
    NSString *_cpu;
    NSString *_pixel;
    NSString *_country;
    NSString *_isp;
    NSString *_language;
    long long _timezone;
    NSString *_osVersion;
    NSString *__2G_3G;
    NSString *_simOperator;
    NSString *_networkOperator;
    NSString *_hostName;
    NSString *_deviceName;
    long long _kernBootTime;
    NSString *_advertisingID;
    NSString *_networkInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *_2G_3G; // @synthesize _2G_3G=__2G_3G;
@property(retain, nonatomic) NSString *advertisingID; // @synthesize advertisingID=_advertisingID;
@property(nonatomic) int connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *cpu; // @synthesize cpu=_cpu;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) YLUniGis *gis; // @synthesize gis=_gis;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(nonatomic) _Bool isJailbroken; // @synthesize isJailbroken=_isJailbroken;
@property(retain, nonatomic) NSString *isp; // @synthesize isp=_isp;
@property(nonatomic) long long kernBootTime; // @synthesize kernBootTime=_kernBootTime;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)messagePack:(struct msgpack_packer *)arg1;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *networkInfo; // @synthesize networkInfo=_networkInfo;
@property(retain, nonatomic) NSString *networkOperator; // @synthesize networkOperator=_networkOperator;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *pixel; // @synthesize pixel=_pixel;
@property(retain, nonatomic) NSString *simOperator; // @synthesize simOperator=_simOperator;
@property(nonatomic) long long timezone; // @synthesize timezone=_timezone;

@end

