//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNModelObject.h"

@class NSString;

@interface BTNBackground : BTNModelObject
{
    NSString *_color;
}

+ (_Bool)canInitWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
- (id)dictionaryRepresentation;
- (void)updateWithRepresentation:(id)arg1;

@end

