//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXOMTAEvent.h"

#import "WXOMTAEventProtocol.h"

@class NSString;

@interface WXOMTAErrorEvent : WXOMTAEvent <WXOMTAEventProtocol>
{
    unsigned int _attr;
    NSString *_error;
    NSString *_availableMemory;
    NSString *_freeDiskSpace;
    NSString *_processName;
}

@property unsigned int attr; // @synthesize attr=_attr;
@property(retain, nonatomic) NSString *availableMemory; // @synthesize availableMemory=_availableMemory;
- (void)dealloc;
- (void)encode:(id)arg1;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
- (int)getType;
- (id)init;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

