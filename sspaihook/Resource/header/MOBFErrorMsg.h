//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MOBFErrorMsg : NSObject <NSCoding>
{
    unsigned long long _type;
    NSString *_errcode;
    long long _errat;
    NSString *_msg;
    long long _times;
}

- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long errat; // @synthesize errat=_errat;
@property(copy, nonatomic) NSString *errcode; // @synthesize errcode=_errcode;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

