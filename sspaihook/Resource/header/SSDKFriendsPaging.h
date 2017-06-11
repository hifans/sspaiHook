//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SSDKFriendsPaging : NSObject
{
    _Bool _hasNext;
    long long _prevCursor;
    long long _nextCursor;
    unsigned long long _total;
    NSArray *_users;
}

+ (id)friendsPagingWithJsonObject:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) long long nextCursor; // @synthesize nextCursor=_nextCursor;
@property(nonatomic) long long prevCursor; // @synthesize prevCursor=_prevCursor;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;

@end

