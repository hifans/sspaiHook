//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QNDomain : NSObject
{
    _Bool _hasCname;
    _Bool _hostsFirst;
    int _maxTtl;
    NSString *_domain;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) _Bool hasCname; // @synthesize hasCname=_hasCname;
@property(readonly, nonatomic) _Bool hostsFirst; // @synthesize hostsFirst=_hostsFirst;
- (id)init:(id)arg1;
- (id)init:(id)arg1 hostsFirst:(_Bool)arg2 hasCname:(_Bool)arg3;
- (id)init:(id)arg1 hostsFirst:(_Bool)arg2 hasCname:(_Bool)arg3 maxTtl:(int)arg4;
@property(readonly, nonatomic) int maxTtl; // @synthesize maxTtl=_maxTtl;

@end

