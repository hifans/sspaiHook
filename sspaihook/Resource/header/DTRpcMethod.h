//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DTRpcMethod : NSObject
{
    NSString *_operationType;
    Class _resultClass;
    NSString *_returnType;
    Class _elementClass;
}

- (void).cxx_destruct;
@property(nonatomic) Class elementClass; // @synthesize elementClass=_elementClass;
@property(copy, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(nonatomic) Class resultClass; // @synthesize resultClass=_resultClass;
@property(copy, nonatomic) NSString *returnType; // @synthesize returnType=_returnType;

@end

