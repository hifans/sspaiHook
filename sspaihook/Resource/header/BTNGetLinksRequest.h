//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNRequestOperation.h"

#import "BTNResourceConsumer.h"

@class BTNResourceProvider, NSString;

@interface BTNGetLinksRequest : BTNRequestOperation <BTNResourceConsumer>
{
    CDUnknownBlockType _linksRequestCompletion;
}

+ (id)requestWithMerchantId:(id)arg1 pubRef:(id)arg2 userIdentifier:(id)arg3 resources:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)requestWithURL:(id)arg1 pubRef:(id)arg2 userIdentifier:(id)arg3 resources:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)finish;
- (id)init;
- (id)initWithParameters:(id)arg1 resources:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType linksRequestCompletion; // @synthesize linksRequestCompletion=_linksRequestCompletion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources;
@property(readonly) Class superclass;

@end

