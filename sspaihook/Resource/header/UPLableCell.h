//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UPLabel;

@interface UPLableCell : UIView
{
    UPLabel *label;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 label:(id)arg2 font:(id)arg3 color:(id)arg4 aligment:(long long)arg5;
@property(retain, nonatomic) UPLabel *label; // @synthesize label;
- (void)setLabelColor:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

