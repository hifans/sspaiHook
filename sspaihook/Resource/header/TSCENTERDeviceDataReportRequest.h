//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TSCENTERDeviceDataReportRequest : NSObject
{
    NSString *_os;
    NSString *_apdid;
    NSString *_pubApdid;
    NSString *_priApdid;
    NSString *_token;
    NSString *_umidToken;
    NSString *_version;
    NSString *_lastTime;
    NSDictionary *_dataMap;
}

+ (Class)dataMapElementClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(retain, nonatomic) NSDictionary *dataMap; // @synthesize dataMap=_dataMap;
@property(retain, nonatomic) NSString *lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *priApdid; // @synthesize priApdid=_priApdid;
@property(retain, nonatomic) NSString *pubApdid; // @synthesize pubApdid=_pubApdid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;

@end

