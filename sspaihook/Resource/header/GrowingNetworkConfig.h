//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GrowingNetworkConfig : NSObject
{
    NSString *_customTrackerHost;
}

+ (id)generateValidEndPoint:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)buildCustomEventEndPointWithAi:(id)arg1 andStm:(unsigned long long)arg2;
- (id)buildEndPointWithPath:(id)arg1 accountId:(id)arg2 andStm:(unsigned long long)arg3;
- (id)buildNormalEventEndPointWithAi:(id)arg1 andStm:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *customTrackerHost; // @synthesize customTrackerHost=_customTrackerHost;

@end

