//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNCardBody.h"

@class BTNProduct;

@interface BTNCardBodyProduct : BTNCardBody
{
    BTNProduct *_product;
}

+ (void)load;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, copy, nonatomic) BTNProduct *product; // @synthesize product=_product;
- (void)updateWithRepresentation:(id)arg1;

@end

