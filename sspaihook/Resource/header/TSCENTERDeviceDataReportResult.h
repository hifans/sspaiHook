//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSCENTERBaseResult.h"

@class NSString;

@interface TSCENTERDeviceDataReportResult : TSCENTERBaseResult
{
    NSString *_apdid;
    NSString *_token;
    NSString *_currentTime;
    NSString *_version;
    NSString *_vkeySwitch;
    NSString *_bugTrackSwitch;
    NSString *_appListVer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(retain, nonatomic) NSString *appListVer; // @synthesize appListVer=_appListVer;
@property(retain, nonatomic) NSString *bugTrackSwitch; // @synthesize bugTrackSwitch=_bugTrackSwitch;
@property(retain, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *vkeySwitch; // @synthesize vkeySwitch=_vkeySwitch;

@end

