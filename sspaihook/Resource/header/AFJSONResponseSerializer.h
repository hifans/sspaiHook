//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPResponseSerializer.h"

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer
{
    _Bool _removesKeysWithNullValues;
    unsigned long long _readingOptions;
}

+ (id)serializer;
+ (id)serializerWithReadingOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long readingOptions; // @synthesize readingOptions=_readingOptions;
@property(nonatomic) _Bool removesKeysWithNullValues; // @synthesize removesKeysWithNullValues=_removesKeysWithNullValues;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end

