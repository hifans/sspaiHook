//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, UIColor, UIImage, UIWindow;

@protocol GrowingNode <NSObject>
- (id <GrowingNodeAsyncNativeHandler>)growingNodeAsyncNativeHandler;
- (id <GrowingNode>)growingNodeAttachedInfoNode;
- (id)growingNodeAttribute:(NSString *)arg1;
- (id)growingNodeAttribute:(NSString *)arg1 forChild:(id <GrowingNode>)arg2;
- (NSString *)growingNodeContent;
- (NSDictionary *)growingNodeDataDict;
- (_Bool)growingNodeDonotCircle;
- (_Bool)growingNodeDonotTrack;
- (struct CGRect)growingNodeFrame;
- (void)growingNodeHighLight:(_Bool)arg1 withBorderColor:(UIColor *)arg2 andBackgroundColor:(UIColor *)arg3;
- (NSString *)growingNodeName;
- (void)growingNodeOutChilds:(NSMutableArray *)arg1 outPaths:(NSMutableArray *)arg2 filterChildNode:(id <GrowingNode>)arg3;
- (void)growingNodeOutContainerChilds:(NSMutableArray *)arg1 outPaths:(NSMutableArray *)arg2 filterChildNode:(id <GrowingNode>)arg3;
- (id <GrowingNode>)growingNodeParent;
- (UIImage *)growingNodeScreenShot:(UIImage *)arg1;
- (UIImage *)growingNodeScreenShotWithScale:(double)arg1;
- (_Bool)growingNodeUserInteraction;
- (UIWindow *)growingNodeWindow;

@optional
- (unsigned long long)growingNodeEligibleEventCategory;
@end

