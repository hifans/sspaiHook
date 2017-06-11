//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, QNDnsManager, QNZone;

@interface QNConfigurationBuilder : NSObject
{
    _Bool _disableATS;
    unsigned int _chunkSize;
    unsigned int _putThreshold;
    unsigned int _retryMax;
    unsigned int _timeoutInterval;
    QNZone *_zone;
    id <QNRecorderDelegate> _recorder;
    CDUnknownBlockType _recorderKeyGen;
    NSDictionary *_proxy;
    CDUnknownBlockType _converter;
    QNDnsManager *_dns;
}

- (void).cxx_destruct;
@property unsigned int chunkSize; // @synthesize chunkSize=_chunkSize;
@property(copy, nonatomic) CDUnknownBlockType converter; // @synthesize converter=_converter;
@property _Bool disableATS; // @synthesize disableATS=_disableATS;
@property(retain, nonatomic) QNDnsManager *dns; // @synthesize dns=_dns;
- (id)init;
@property(retain, nonatomic) NSDictionary *proxy; // @synthesize proxy=_proxy;
@property unsigned int putThreshold; // @synthesize putThreshold=_putThreshold;
@property(retain, nonatomic) id <QNRecorderDelegate> recorder; // @synthesize recorder=_recorder;
@property(copy, nonatomic) CDUnknownBlockType recorderKeyGen; // @synthesize recorderKeyGen=_recorderKeyGen;
@property unsigned int retryMax; // @synthesize retryMax=_retryMax;
@property unsigned int timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) QNZone *zone; // @synthesize zone=_zone;

@end

