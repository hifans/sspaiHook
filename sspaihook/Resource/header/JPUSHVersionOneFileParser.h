//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPUSHFileParser.h"

@class NSString;

@interface JPUSHVersionOneFileParser : NSObject <JPUSHFileParser>
{
}

- (void)enumerateCacheObject:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)isNeedSpecialTreat:(id)arg1;
- (id)lastHistoryTreat:(id)arg1;
- (void)parseFileWithData:(id)arg1 AESKey:(id)arg2 map:(CDUnknownBlockType)arg3;
- (id)specificTreat:(id)arg1 dataInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

