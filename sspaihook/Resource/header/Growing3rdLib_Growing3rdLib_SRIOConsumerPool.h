//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface Growing3rdLib_Growing3rdLib_SRIOConsumerPool : NSObject
{
    unsigned long long _poolSize;
    NSMutableArray *_bufferedConsumers;
}

- (void).cxx_destruct;
- (id)consumerWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(_Bool)arg4 unmaskBytes:(_Bool)arg5;
- (id)init;
- (id)initWithBufferCapacity:(unsigned long long)arg1;
- (void)returnConsumer:(id)arg1;

@end

