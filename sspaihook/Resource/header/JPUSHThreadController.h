//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface JPUSHThreadController : NSObject
{
    NSMutableDictionary *threadQueue;
}

+ (id)shareThreadInstance;
- (void).cxx_destruct;
- (_Bool)addThread:(id)arg1;
- (_Bool)deleteThread:(id)arg1;
- (id)getThreadWithName:(id)arg1;
- (id)init;

@end
