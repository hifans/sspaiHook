//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TagModel : NSObject
{
    NSString *_title;
    NSString *_intro;
    NSString *_synonyms;
    NSString *_custom_url;
    NSString *_ID;
    NSString *_created_at;
    NSString *_deleted_at;
    NSString *_articles_count;
    NSString *_views_count;
    NSString *_released_at;
    NSString *_modify_at;
}

+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *articles_count; // @synthesize articles_count=_articles_count;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *custom_url; // @synthesize custom_url=_custom_url;
@property(copy, nonatomic) NSString *deleted_at; // @synthesize deleted_at=_deleted_at;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *modify_at; // @synthesize modify_at=_modify_at;
@property(copy, nonatomic) NSString *released_at; // @synthesize released_at=_released_at;
@property(copy, nonatomic) NSString *synonyms; // @synthesize synonyms=_synonyms;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *views_count; // @synthesize views_count=_views_count;

@end

