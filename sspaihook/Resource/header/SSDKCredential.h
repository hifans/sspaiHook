//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSDictionary, NSString;

@interface SSDKCredential : NSObject <NSCoding>
{
    NSString *_uid;
    NSString *_token;
    NSString *_secret;
    NSDate *_expired;
    unsigned long long _type;
    NSDictionary *_rawData;
}

+ (id)credentialWithJsonObject:(id)arg1;
+ (id)jsonObjectWithCredential:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool available;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *expired; // @synthesize expired=_expired;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonObject:(id)arg1;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;

@end

