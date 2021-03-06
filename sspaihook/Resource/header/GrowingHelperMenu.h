//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingMenuView.h"

@class CAShapeLayer, NSString, UILabel, UIView;

@interface GrowingHelperMenu : GrowingMenuView
{
    UIView *_helperView;
    CAShapeLayer *_shapeLayer;
    UILabel *_textLabel;
    NSString *_helpText;
    struct CGRect _viewFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *helpText; // @synthesize helpText=_helpText;
@property(retain, nonatomic) UIView *helperView; // @synthesize helperView=_helperView;
- (id)initWithHelpView:(id)arg1 helpText:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
- (void)viewDidLoad;

@end

