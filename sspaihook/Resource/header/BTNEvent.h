//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNBaseEntity.h"

@interface BTNEvent : BTNBaseEntity
{
}

+ (id)eventWithStartTime:(id)arg1 endTime:(id)arg2 location:(id)arg3;
- (id)dictionaryRepresentation;
- (void)setEndTime:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)updateWithRepresentation:(id)arg1;

@end

