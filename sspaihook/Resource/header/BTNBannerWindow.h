//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIView;

@interface BTNBannerWindow : UIWindow
{
    UIView *_bannerContentView;
    CDUnknownBlockType _dismissAreaTapHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bannerContentView; // @synthesize bannerContentView=_bannerContentView;
@property(copy, nonatomic) CDUnknownBlockType dismissAreaTapHandler; // @synthesize dismissAreaTapHandler=_dismissAreaTapHandler;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

