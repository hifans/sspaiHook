//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPUSHJSONProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface JPUSHLocationInfoController : NSObject <NSCopying, NSCoding, JPUSHJSONProtocol>
{
    NSMutableArray *_wifiInfo;
    NSMutableArray *_cellInfo;
    NSMutableArray *_gpsInfo;
    unsigned long long _count;
    NSMutableArray *_itimes;
}

- (void).cxx_destruct;
- (void)addCellInfo:(id)arg1;
- (void)addGpsInfo:(id)arg1;
- (void)addItime:(id)arg1;
- (void)addWifiInfo:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *cellInfo; // @synthesize cellInfo=_cellInfo;
- (void)clearAllInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *gpsInfo; // @synthesize gpsInfo=_gpsInfo;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *itimes; // @synthesize itimes=_itimes;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_jsonClassType;
- (id)jpush_toJSON;
- (void)removeCellInfo:(id)arg1;
- (void)removeGpsInfo:(id)arg1;
- (void)removeItime:(id)arg1;
- (void)removeWifiInfo:(id)arg1;
- (void)resumeLocationInfo;
@property(readonly, nonatomic) NSMutableArray *wifiInfo; // @synthesize wifiInfo=_wifiInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

