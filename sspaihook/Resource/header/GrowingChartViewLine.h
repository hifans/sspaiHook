//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIColor;

@interface GrowingChartViewLine : NSObject
{
    NSString *_name;
    UIColor *_color;
    NSDictionary *_dataDict;
    NSArray *_dataArr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

