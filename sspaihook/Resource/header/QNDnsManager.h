//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QNHosts, QNLruCache, QNNetworkInfo;

@interface QNDnsManager : NSObject
{
    unsigned int _resolverStatus;
    QNLruCache *_cache;
    QNNetworkInfo *_curNetwork;
    NSArray *_resolvers;
    QNHosts *_hosts;
    id <QNIpSorter> _sorter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QNLruCache *cache; // @synthesize cache=_cache;
@property(retain) QNNetworkInfo *curNetwork; // @synthesize curNetwork=_curNetwork;
@property(retain, nonatomic) QNHosts *hosts; // @synthesize hosts=_hosts;
- (id)init:(id)arg1 networkInfo:(id)arg2;
- (id)init:(id)arg1 networkInfo:(id)arg2 sorter:(id)arg3;
- (void)onNetworkChange:(id)arg1;
- (id)putHosts:(id)arg1 ip:(id)arg2;
- (id)putHosts:(id)arg1 ip:(id)arg2 provider:(int)arg3;
- (id)query:(id)arg1;
- (id)queryAndReplaceWithIP:(id)arg1;
- (id)queryInternalWithDomain:(id)arg1;
- (id)queryWithDomain:(id)arg1;
@property unsigned int resolverStatus; // @synthesize resolverStatus=_resolverStatus;
@property(retain, nonatomic) NSArray *resolvers; // @synthesize resolvers=_resolvers;
@property(retain, nonatomic) id <QNIpSorter> sorter; // @synthesize sorter=_sorter;

@end

