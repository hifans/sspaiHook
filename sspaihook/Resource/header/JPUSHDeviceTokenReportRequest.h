//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPUSHRequest.h"

@class NSString;

@interface JPUSHDeviceTokenReportRequest : JPUSHRequest
{
    NSString *_invaildDeviceToken;
}

- (void).cxx_destruct;
- (void)handleResponse:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSString *invaildDeviceToken; // @synthesize invaildDeviceToken=_invaildDeviceToken;
- (_Bool)packData;
- (Class)responseClass;

@end

