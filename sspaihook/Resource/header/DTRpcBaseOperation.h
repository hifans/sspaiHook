//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTURLRequestOperation.h"

@class NSDictionary;

@interface DTRpcBaseOperation : DTURLRequestOperation
{
    NSDictionary *_responseJSON;
    NSDictionary *_resultJSON;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *responseJSON; // @synthesize responseJSON=_responseJSON;
@property(retain, nonatomic) NSDictionary *resultJSON; // @synthesize resultJSON=_resultJSON;

@end
