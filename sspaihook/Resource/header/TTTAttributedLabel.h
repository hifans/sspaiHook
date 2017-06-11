//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "TTTAttributedLabel.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSString, TTTAttributedLabelLink, UIColor, UILongPressGestureRecognizer;

@interface TTTAttributedLabel : UILabel <TTTAttributedLabel, UIGestureRecognizerDelegate>
{
    _Bool _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    _Bool _extendsLinkTouchArea;
    NSAttributedString *_attributedText;
    id <TTTAttributedLabelDelegate> _delegate;
    unsigned long long _enabledTextCheckingTypes;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    NSDictionary *_inactiveLinkAttributes;
    double _shadowRadius;
    double _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    double _kern;
    double _firstLineIndent;
    double _lineSpacing;
    double _minimumLineHeight;
    double _maximumLineHeight;
    double _lineHeightMultiple;
    long long _verticalAlignment;
    NSAttributedString *_attributedTruncationToken;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    NSDataDetector *_dataDetector;
    NSArray *_linkModels;
    TTTAttributedLabelLink *_activeLink;
    NSArray *_accessibilityElements;
    struct CGSize _highlightedShadowOffset;
    struct UIEdgeInsets _linkBackgroundEdgeInset;
    struct UIEdgeInsets _textInsets;
}

+ (void)load;
+ (struct CGSize)sizeThatFitsAttributedString:(id)arg1 withConstraints:(struct CGSize)arg2 limitedToNumberOfLines:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) TTTAttributedLabelLink *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
- (void)addLink:(id)arg1;
- (id)addLinkToAddress:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToDate:(id)arg1 timeZone:(id)arg2 duration:(double)arg3 withRange:(struct _NSRange)arg4;
- (id)addLinkToDate:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToPhoneNumber:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToTransitInformation:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkToURL:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)addLinkWithTextCheckingResult:(id)arg1;
- (id)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2;
- (void)addLinks:(id)arg1;
- (id)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) NSAttributedString *attributedTruncationToken; // @synthesize attributedTruncationToken=_attributedTruncationToken;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (void)commonInit;
- (_Bool)containslinkAtPoint:(struct CGPoint)arg1;
- (void)copy:(id)arg1;
@property(retain) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
- (void)dealloc;
@property(nonatomic) id <TTTAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawBackground:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawFramesetter:(struct __CTFramesetter *)arg1 attributedString:(id)arg2 textRange:(CDStruct_912cb5d2)arg3 inRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)drawStrike:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawTextInRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long enabledTextCheckingTypes; // @synthesize enabledTextCheckingTypes=_enabledTextCheckingTypes;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) _Bool extendsLinkTouchArea; // @synthesize extendsLinkTouchArea=_extendsLinkTouchArea;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
- (struct __CTFramesetter *)framesetter;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct __CTFramesetter *)highlightFramesetter;
@property(retain, nonatomic) UIColor *highlightedShadowColor; // @synthesize highlightedShadowColor=_highlightedShadowColor;
@property(nonatomic) struct CGSize highlightedShadowOffset; // @synthesize highlightedShadowOffset=_highlightedShadowOffset;
@property(nonatomic) double highlightedShadowRadius; // @synthesize highlightedShadowRadius=_highlightedShadowRadius;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(retain, nonatomic) NSDictionary *inactiveLinkAttributes; // @synthesize inactiveLinkAttributes=_inactiveLinkAttributes;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isAccessibilityElement;
@property(nonatomic) double kern; // @synthesize kern=_kern;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (id)linkAtCharacterIndex:(long long)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linkAtRadius:(double)arg1 aroundPoint:(struct CGPoint)arg2;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(nonatomic) struct UIEdgeInsets linkBackgroundEdgeInset; // @synthesize linkBackgroundEdgeInset=_linkBackgroundEdgeInset;
@property(retain, nonatomic) NSArray *linkModels; // @synthesize linkModels=_linkModels;
@property(readonly, nonatomic) NSArray *links;
- (void)longPressGestureDidFire:(id)arg1;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) double maximumLineHeight; // @synthesize maximumLineHeight=_maximumLineHeight;
@property(nonatomic) double minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property(copy, nonatomic) NSAttributedString *renderedAttributedText; // @synthesize renderedAttributedText=_renderedAttributedText;
- (void)setFramesetter:(struct __CTFramesetter *)arg1;
- (void)setHighlightFramesetter:(struct __CTFramesetter *)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setNeedsFramesetter;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(copy, nonatomic) id text; // @dynamic text;
- (void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(CDUnknownBlockType)arg2;
- (void)setTextColor:(id)arg1;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)textColor;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

